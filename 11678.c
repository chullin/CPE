#include <stdio.h>

int main(){
	int a, b, i, j;
	int temp1, temp2;
	int count, count1, count2;
	int ok = 0;
	int length =0;
	long long int c[10000], d[10000];
	//long long int ;
	while(1){
	
	scanf("%d %d", &a, &b);
	if(a == b && a == 0){
		break;
	}
		for(i=0; i<a; i++){
			scanf("%lld", &c[i]);
		}
		for(i=0; i<b; i++){
			scanf("%lld", &d[i]);
		}
		temp1 = c[0]; // 將重複數字設為 -1 
		for(i=1; i<a; i++){
			if(c[i] == temp1){
				c[i] = -1;
			}
			else temp1 = c[i];
		}
		temp2 = d[0];// 將重複數字設為 -1
		for(i=1; i<b; i++){
			if(d[i] == temp2){
				d[i] = -1;
			}
			else temp2 = d[i];
		}
		// 比對哪一個去除重複數字後陣列長度最小
		count1 = 0;
		for(i=0; i<a; i++){
			if(c[i] != -1)
				count1++;
		}
		count2 = 0;
		for(i=0; i<b; i++){
			if(d[i] != -1)
				count2++;
		}
		
		/*
		for(i=0; i<a; i++){
			//printf("c[%d]=%d ",i, c[i] );
		}
		printf("\n");
		
		for(i=0; i<b; i++){
			//printf("d[%d]=%d ",i, d[i] );
		}
		printf("\n");
		*/
		
		if(count1>= count2){
			length = 0;
			count = 0;
			for(i=0; i<b; i++){
				for(j=0; j<a; j++){
					if(d[i] == c[j] && d[i] != -1)
						count++;  // 有幾個相同 
				}
				//printf("%d \n", count);
				if(d[i] != -1){ 
					length++;   // 計算除了 -1 的陣列長度 
				} 
			}
		}
		
		if(count2> count1){
			length = 0;
			count = 0;
			for(i=0; i<a; i++){
				for(j=0; j<b; j++){
					if(c[i] == d[j] && c[i] != -1)
						count++;  // 有幾個相同 
				}
				//printf("%d \n", count);
				if(c[i] != -1){ 
					length++;   // 計算除了 -1 的陣列長度 
				} 
			}
		}
		printf("%d  %d  %d \n", length, count, length-count);
	
	}
	return 0;
} 
