#include <stdio.h>
int a[10000];
int derivative(int x,int max){
	long long int i, exp = 1;
	int sum = 0;
	
	for(i=max-1; i>=0; i--){
		sum = sum + a[i] * (max-i) * exp;
		exp = exp * x;
	}
	return sum;
}

int main(){
	int n, i;
	int g;
	while(scanf("%d", &n) != EOF){
		for(i=0; ; i++){
			scanf("%d", &a[i]);
			if(getchar() == '\n'){
				break;
			}
		}
		g = derivative(n, i);
		printf("%d \n", g);
	}
	return 0;
}
