#include <stdio.h>

int main(){
	int a = 1;
	long int b = 10000;
	long long int c = 1000000;
	
	printf("%d", sizeof(a));
	printf("%d", sizeof(b));
	printf("%d", sizeof(c));
	return 0;
}
