/*
  Complete the following:
  Description of program -i.e. "basic" version or "advanced" version.

  Written by: <enter your name and ID>
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
		{B,W,W,B,B,W,B,W,W},
		{B,L,L,V,L,L,L,L,B},
		{W,L,L,L,L,D,L,L,B},
		{B,L,L,D,L,L,L,L,W},
		{B,L,D,L,L,L,L,L,W},
		{W,L,L,L,L,L,V,L,B},
		{W,V,L,L,L,L,L,L,W},
		{W,L,L,L,D,L,L,L,W},
		{B,B,W,B,W,B,B,W,B}
	};
	int x,y,step;
	

    /* Perform random walks and calculate results: */
	
		for (x=0;x<9;x++){//cyle through rows
			for (y=0;y<9;y++) {//cycle through cells
				if (island[x][y] == B){
					for (int i=0;i<1000;i++){//1000 walks
						randomStep()
						
					}
				}
				else if (island[x][y] == L){
					
				}
				else 
			}
		}


    /* Print results: */
    




    return 0;
}
//walk function
void randomStep(int cell){
	int stepcount = 0;
	while (cell == B || cell ==L)
		step = rand()%8
			switch (step){//direction
				case 0://N
				case 1://NE
				case 2://E
				case 3://SE
				case 4://S
				case 5://SW
				case 6://W
				case 7://NW
		stepcount++;
		

int status(int cellvalue)
		if (cellvalue != B) {
	
	
	
	
}