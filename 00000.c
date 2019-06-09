#include <stdio.h>

int main(){
	int a[5], i, j;
	int b[5];
	int c[5];
	int count = 0;
	int temp, max;o
	printf("Please enter 5 numbers: \n");
	scanf("%d %d %d %d %d",&a[0], &a[1], &a[2], &a[3], &a[4]);
	scanf("%d %d %d %d %d",&b[0], &b[1], &b[2], &b[3], &b[4]);
	
	for(j=0; j<= 4; j++){
		for(i=0; i<= 3; i++){
			if(a[i] > a[i+1]){
				max = a[i];
				a[i] = a[i+1];
				a[i+1] = max;
			}
		}
	}
	
	for(i=0; i<= 4; i++){
		c[i] = a[i];
	}
	
	
	
	temp = -1;
	for(j=0; j<= 4; j++){
		for(i=0; i<= 4; i++){
			if(c[j] != temp)
				if(c[j] == b[i]){
					count++;
					temp = c[j];
				}
		}
	}
	
	printf("count = %d", count);


	return 0;
} 
