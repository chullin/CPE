#include <stdio.h>

int main(){
	int n, m;
	int i;
	int sum = 1;
	scanf("%d", &n);
	scanf("%d", &m);
	for(i=m; i>0; i--){
		sum = sum * n;
	}
	
	printf("sum =%d", sum);
	
	return 0;
}
