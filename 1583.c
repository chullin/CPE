#include <stdio.h>

int main() {
	int x, y, i, sum, N, count;
	int unit[8];
	int temp, min;
	
	scanf("%d", &count);
	while(count--){
		
		scanf("%d", &N);
		min = N;
		for(x=1; x< 46; x++){ //  �̦h�� 99,999 �ҥH 9*5 = 45 
			
			y = N - x;  //	      215 = 216 - 1 
			temp = y;
			for(i=7; i>= 0; i--){ 
				unit[i] = y % 10;  // 215 % 10 = 5  
				y = y / 10;
			} 
			// �Nunit�o�Ӱ}�C���ƭȬۥ[�A�æL�X�� 
			sum = 0;
			for(i=0; i<= 7; i++){ 
				sum = sum + unit[i];
			}
			
			if(sum == x){
				if(temp < min){
					min = temp;
				}
			}
			
			
		}
		if(min == N){
				min = 0;
			}
		
		if(min == 0){
			printf("0\n");
		}else{
			printf("%d \n", min);
		}
		
		
	}
	
	return 0;
}
