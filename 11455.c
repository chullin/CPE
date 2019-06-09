#include <stdio.h> 

int main(){
	int time, i;
	int a, b, c, d;
	scanf("%d", &time);
	while(time--){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		
		if(a==0 || b==0 || c==0 || d==0){
			printf("banana \n");
		}
		else if( a==b && b==c && c==d && d==a){
			printf("square \n");
		}
		else if(a==b&&c==d || a==c&&b==d || a==d&&c==d){
			printf("rectangle \n");
		}
		else if(a>b && a>c && a>d && b+c+d>a){
			printf("quadrangle \n");
		}
		else if(b>a && b>c && b>d && a+c+d>b){
			printf("quadrangle \n");
		}
		else if(c>b && c>a && c>d && b+a+d>c){
			printf("quadrangle \n");
		}
		else if(d>b && d>c && d>a && b+c+a>d){
			printf("quadrangle \n");
		}
		else 
			printf("banana \n");
	}
	
	return 0;
}
