#include <stdio.h>
#include <stdlib.h>
#define B	1
void main(void){
	char a[3][3] = {
	{'B','W','W'},{'W','V','D'},{'W','V','B'}};
	int x,y=-1,i;
	printf("%d\n", B);
	for (i = 0; i<8; i++){
	x=rand()%8;
		printf("%d\n", x);
	}
}