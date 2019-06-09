#include <stdio.h>

int main(){
	long long int a[10005][10005];
	long long int b[10005];
	int i, j, w, x, y;
	
	scanf("%d %d", &x, &y); // 15 3
	for(i=0; i<x; i++){
		scanf("%lld", &b[i]);
	}
	for(i=0; i<y; i++){
		for(j=0; j<x; j++){
			for(w=0; w<y; w++){
				if(b[x]%y == (y-i)){
					a[i][j] = b[w];
				}
			}
		}
	}

	for(i=0; i<y; i++){
		for(j=0; j<x; j++){
			printf("a[%d][%d] = %lld \n", i, j, a[i][j]);
		}
	}
	
	
	return 0;
}
