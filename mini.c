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
/* enter any other #defines as you deem necessary below */


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
	double prob[NUMROWS][NUMCOLS], sd[NUMROWS][NUMCOLS];
	
	int x,y, currentx, currenty, currentcell, nextcell, stepcount, ;

    /* Perform random walks and calculate results: */
	for (x=0;x<NUMROWS;x++){//cyle through rows
	printf("\n");
		for (y=0;y<NUMCOLS;y++) {//cycle through cells
			for (int i=0;i<NUMWALKS;i++){//1000 loops per cell
				currentx = x, currenty = y;
				stepcount = 0;// reset stepcount
				nextcell = island[currentx][currenty]; //reset nextcell
				
				if (status(nextcell) == 1){ 
					prob[x][y] = 0.00f;
					break();
				}
				while (status(nextcell) == 2)  {
					currrentcell = nextcell;
					randomStep(&currentx, &currenty);
					if (currentx<0||currentx>NUMROWS||currenty<0||currenty>NUMCOLS){
						nextcell = NULL;
					}
					else {
						nextcell = island[currentx][currenty];
					}
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
void randomStep(int *walkX, *walkY){
	int step = rand()%8;
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
int status(int *cellvalue){
	if (*cellvalue == B||*cellvalue ==L) {
			return 2;
	}
	else if (*cellvalue == V|| *cellvalue == D||cell value==W){
		return 1;
	}
	else {
		return 0
	}
}
void printResults(){


}
