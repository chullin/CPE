#include <stdio.h>
#define ROW 4
#define COL 3
#define LEN 4 
void show(int c[ROW][COL], int d[LEN]){
	int i, j;
	printf("A°}¦C : \n");
	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	printf("B°}¦C : \n");
	for(i=0; i<LEN; i++){
		printf("%d ", d[i]);
	}
}

int main(){
	int a[ROW][COL] = { {1, 2, 3},
				   {4, 5, 6},
				   {7, 8, 9},
				   {1, 3, 5} };
				   
	int b[LEN] = {10, 11, 12, 13};
	
	show(a, b);
	
	return 0;
} 


