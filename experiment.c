
#include <stdio.h>
int walk(char a){
	switch (a){
		case 'B':
			return 0;
			break;
		case 'V':
			return 1;
			break;
		default:
			return 2;
}
}
int main(void){
	char d = 'B';
	int a = walk(d);
	printf("%d",a);
	return 0;
}