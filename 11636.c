#include <stdio.h>

int power(int n){
	int i;
	int sum = 1;
	
	if(n == 0){
		return sum = 1;
	}
	else{
		for(i=0; i<n; i++){
			sum = sum *2;
		}
		return sum;
	}
}

int main(){
	int x = 1, N;
	int i, temp;
	//int n;
	//scanf("%d", &n);
	//printf("sum = %d\n", power(3));
	
	while(N != -1){
	
		scanf("%d", &N);
		
		for(i=0; i<15; i++){
			if(N <= power(i)){
				temp = i;
				break;
			}
		}
		
		if(N != -1){
			printf("Case %d: %d \n",x, i);
			x++;
		}
	} 
	
	

	return 0;
} 
