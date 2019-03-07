
#include <stdio.h>
void walk(int *locx){
	(*locx)++;
}

int main(void){
	static int x = 0, stepx = 0;
	walk(&stepx);
	printf("%d",stepx);
	return 0;
}
