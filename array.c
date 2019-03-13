#include <stdio.h>
#include <stdlib.h>
#define B	1
int status(char array[][], int x1, int y1){
	if (array[x1][y1] == B){
		return 2;
	}
	if (x1 <0 ||y1<0||x1 >2||y1>2){
		return 0;
	}
}
void main(void){
	char a[3][3] = {
	{'B','W','W'},{'W','V','D'},{'W','V','B'}};
	int x,y=-1,i,n;
	printf("%d\n", B);
	n = status(*a, 0,0);
	printf("%d",n);
	
}