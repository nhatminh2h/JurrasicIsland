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
	int x,y, currentx, currenty, currentcell, nextcell, stepcount, ;

    /* Perform random walks and calculate results: */
		for (x=0;x<9;x++){//cyle through rows
		printf("\n");
			for (y=0;y<9;y++) {//cycle through cells
				currentx = x, currenty = y; 
				for (int i=0;i<1000;i++){//1000 loops per cell
					while (
						currrentcell = island[currentx][currenty];
						randomStep(&currentx, &currenty);
						nextcell = island[currentx][currenty];
						if (currentcell == B){
							
							
						}
						else if{ 
							printf("%d",0.00)
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
			return 2
	}
	else if (*cellvalue == V||
}
void printResults(){


}