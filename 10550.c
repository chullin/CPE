#include <stdio.h>

int main(){
	int a, b, c, d;
	int sum;
	while(!(a == 0 && b == 0&&c == 0&&d == 0)){
	sum =0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
		if(b > a){ // 密碼的第一個數字，順時針 
			sum = sum + ((a+40) - b) *  9;
		}else if(b < a){
			sum = sum + (a - b) * 9;
		}else{
			sum = sum + 0;
		}
		
		if(c > b){
			sum = sum + (b+40 - c) *  9;
		}else if(c < b){
			sum = sum + (c +40 - b) * 9;
		}else{
			sum = sum + 0;
		}
		if(d > c){ // 密碼的最後一個數字，順時針 
			sum = sum + ((c+40) - d) *  9;
		}else if(d < c){
			sum = sum + (c - d) * 9;
		}else{
			sum = sum + 0;
		}
		
		sum = sum + 1080;
		if(!(a == 0 && b == 0&&c == 0&&d == 0)){
				printf("sum = %d \n", sum);
		}
	}
	
	return 0;
} 
