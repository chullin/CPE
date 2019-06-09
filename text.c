#include <stdio.h>

int main(){
	//int a, b, c, d, e;
	int a[5], b[5], i, j;
	int max;
	scanf("%d %d %d %d %d",&a[0], &a[1], &a[2], &a[3], &a[4]);
	//scanf("%d %d %d %d %d",&b[0], &b[1], &b[2], &b[3], &b[4]);
	for(i=0; i<= 4; i++){
		printf("before a[%d]=%d \n",i, a[i]);
	}
	
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
		b[i] = a[i];
	}

	for(i=0; i<= 4; i++){
		printf("after a[%d]=%d \n",i, a[i]);
	}
	
	for(i=0; i<= 4; i++){
		printf("after b[%d]=%d \n",i, b[i]);
	}
	
	
}
