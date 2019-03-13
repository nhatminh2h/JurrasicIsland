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

#define NUMROWS	    9		/* Map size */
#define NUMCOLS     9
#define NUMWALKS    1000	/* Number of random walks */

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
	double prob[NUMROWS][NUMCOLS], mean[NUMROWS][NUMCOLS], sd[NUMROWS][NUMCOLS];
	
	int x,y, currentx, currenty, currentcell, nextcell, stepcount, sum_sw;

    /* Perform random walks and calculate results: */
	for (x=0;x<NUMROWS;x++){//cyle through rows
		for (y=0;y<(NUMCOLS-1);y++) {//cycle through cells
			for (int i=0;i<(NUMWALKS-1);i++){//1000 loops per cell
				currentx = x, currenty = y;
				stepcount = 0;// reset stepcount
				nextcell = island[currentx][currenty]; //reset nextcell
				
				while (status(nextcell) == 2)  {//start walking
					//currrentcell = nextcell;
					randomStep(currentx, currenty);
					if (currentx<0||currentx>(NUMROWS-1)||currenty<0||currenty>(NUMCOLS-1)){//check if nextcell is OoB
						nextcell = NULL;
					}
					else {
						nextcell = island[currentx][currenty];//"walking"
					}
					stepcount++;
				}
				
				if (status(nextcell) == 0) {//escape
					prob[x][y] += 0.1;
					sum_sw++;
				}
				if (status(&nextcell) == 1){//death
					
				}
			}
		}
	}
}

    /* Print results: */
printResults();


    return 0;
}
//walk function
void randomStep(int *walkX, *walkY){//need to call by reference to change variable value
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
			(*walkY)++:
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
void printResults(double *array){
	int x,y;
	for (x=0;x<NUMROWS;x++){//cyle through rows
		printf("\n")
		for (y=0;y<NUMCOLS;y++) {//cycle through cells
			printf("%f\t", *array[x][y])
		}
	}
}
