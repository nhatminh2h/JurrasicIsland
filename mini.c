/*
  Complete the following:
  Description of program -i.e. "basic" version or "advanced" version.
  Written by: MINH VU - 10188723
  Date: <enter date>
*/

#include <stdio.h>
/* enter any other #includes that you deem necessary below */
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define NUMROWS	    9		/* Map size */
#define NUMCOLS     9
#define NUMWALKS    1000	/* Number of random walks */
//walk function
void randomStep(int *walkX, int *walkY);
int status(int cellvalue);
void printResults(double array[NUMROWS][NUMCOLS]);

int main(void) {

    /* define the map and any other variables that you deem necessary: */
	char island[NUMROWS][NUMCOLS]= {
		{'B','W','W','B','B','W','B','W','W'},
		{'B','L','L','V','L','L','L','L','B'},
		{'W','L','L','L','L','D','L','L','B'},
		{'B','L','L','D','L','L','L','L','W'},
		{'B','L','D','L','L','L','L','L','W'},
		{'W','L','L','L','L','L','V','L','B'},
		{'W','V','L','L','L','L','L','L','W'},
		{'W','L','L','L','D','L','L','L','W'},
		{'B','B','W','B','W','B','B','W','B'}
	};
	double prob[NUMROWS][NUMCOLS]={ 0 }, mean[NUMROWS][NUMCOLS]={ 0 }, sd[NUMROWS][NUMCOLS]={ 0 }, sum_sw, stepcount;
	char nextcell;
	int x,y, currentx, currenty, currentcell ;

    /* Perform random walks and calculate results: */
	for (x=0;x<NUMROWS;x++){//cyle through rows
		for (y=0;y<NUMCOLS;y++) {//cycle through cells
			sum_sw = 0;//reset successful walk
			for (int i=0;i<NUMWALKS;i++){//1000 loops per cell
				currentx = x, currenty = y;
				stepcount = 0;// reset stepcount
				nextcell = island[currentx][currenty]; //reset nextcell
				
				while (status(nextcell) == 2)  {//start walking
					//currrentcell = nextcell;
					randomStep(&currentx, &currenty);
					if (currentx<0||currentx>=NUMROWS||currenty<0||currenty>=NUMCOLS){//check if nextcell is OoB 
						nextcell = 'E';
					}
					else {
						nextcell = island[currentx][currenty];//"walking"
					}
					stepcount++;
				}
				
				if (status(nextcell) == 0) {//escape
					prob[x][y] += 0.1;
					sum_sw++;
					mean[x][y] += stepcount;
				}
				/*if (status(nextcell) == 1){//death
					prob[x][y] += 0.00;
				}*/
			}
			if (sum_sw != 0) {//avoid QNaN and INF errors caused by 0
				mean[x][y] /= sum_sw;//divide step by successful walk
				sd[x][y] = sqrt(
			}
			
		}
	}


    /* Print results: */
printf("Probability:  \n");
printResults(prob);
printf("Mean step count: \n");
printResults(mean);
printf("Standard deviation step count: \n");
printResults(sd);
    return 0;
	
}
void randomStep(int *walkX, int *walkY){//need to call by reference to change variable value
	int step = rand()%8;
	//many cases so switch is used
	switch (step){//direction
		case 0://N
		(*walkX)--;
		break;

		case 1://NE
		(*walkX)--;
		(*walkY)++;
		break;

		case 2://E
		(*walkY)++;
		break;

		case 3://SE
		(*walkX)++;
		(*walkY)++;
		break;

		case 4://S
		(*walkX)++;
		break;

		case 5://SW
		(*walkX)++;
		(*walkY)--;
		break;

		case 6://W
		(*walkY)--;
		break;
		
		case 7://NW
		(*walkX)--;
		(*walkY)++;
	}
}

int status(int cellvalue){//only need to call by value
	switch (cellvalue){//using switch to keep code cleaner
		case 'B':
		case 'L':
			return 2;//keep walking
			break;
		case 'V':
		case 'D':
		case 'W':
			return 1;//death
			break;
		default:
			return 0;//escape
	}
}
void printResults(double array[NUMROWS][NUMCOLS]){
	int x,y;
	for (x=0;x<NUMROWS;x++){//cyle through rows
		printf("\n");
		for (y=0;y<NUMCOLS;y++) {//cycle through cells
			printf("%.2lf\t", array[x][y]);
		}
	}
	printf("\n\n");
}
