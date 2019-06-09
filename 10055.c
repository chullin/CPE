#include <stdio.h>

int main(){
	long long int a, b, sum;
	
	while(scanf("%lld %lld", &a, &b) != EOF){
		sum = a - b;
		if(sum < 0){
			sum = sum * -1;
		}
		printf("%lld \n", sum);	
	}
	
	return 0;
}



