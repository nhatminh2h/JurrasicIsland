#include <stdio.h>

int main(void){
	char bla[2][2] = {'B','L','V','W'}, x,y;
	for ( x=-1;x<3;x++){//cyle through rows
			for ( y=-1;y<3;y++) {//cycle through cells
	printf("%c ",bla[x][y]);
	}
	printf("\n");
	}
	return 0;
}