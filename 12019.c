#include <stdio.h>

int main(){
	int N, x, y;
	int month, date;
	int a[]={1,2,3,4,5,6,7,8,9,10,11,12};
	scanf("%d", &N);
	while(N--){
		scanf("%d %d", &month, &date);
		if(month == a[0]){ // 1 月份 
			x = 3;
			// 4 11 18 25 
			
			if(date == x+4|| date == x+11|| date == x+18|| date == x+25){
				printf("Friday \n");
			}
			if(date == x-2||date == x-2+7|| date == x+12|| date == x+19|| date == x+26){
				printf("Saturday \n");
			}
			if(date == x-1||date == x-1+7|| date == x-1+14|| date == x+20|| date == x+27){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21 || date == x+28){
				printf("Monday \n");
			}
			if(date == x+1|| date == x+1+7|| date == x+1+14 || date == x+22){
				printf("Tuesday \n");
			}
			if(date == x+2|| date == x+2+7|| date == x+2+14 || date == x+23){
				printf("Wednesday \n");
			}
			if(date == x+3|| date == x+3+7|| date == x+3+14 || date == x+24){
				printf("Thursday \n");
			}
		}
		if(month == a[1]){ // 2 月份 
			x = 7;
			// 4 11 18 25 
			
			if(date == x-3||date == x-3+7|| date == x-3+14|| date == x-3+21){
				printf("Friday \n");
			}
			if(date == x-2||date == x-2+7|| date == x-2+14|| date == x-2+21){
				printf("Saturday \n");
			}
			if(date == x-1||date == x-1+7|| date == x-1+14|| date == x-1+21){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21){
				printf("Monday \n");
			}
			if(date == x-6||date == x+1|| date == x+1+7|| date == x+1+14){
				printf("Tuesday \n");
			}
			if(date == x-5||date == x+2|| date == x+2+7|| date == x+2+14){
				printf("Wednesday \n");
			}
			if(date == x-4||date == x+3|| date == x+3+7|| date == x+3+14){
				printf("Thursday \n");
			}
		}
		if(month == a[2]){ // 3 月份 
			x = 7;
			// 4 11 18 25 
			
			if(date == x-3||date == x-3+7|| date == x-3+14|| date == x-3+21){
				printf("Friday \n");
			}
			if(date == x-2||date == x-2+7|| date == x-2+14|| date == x-2+21){
				printf("Saturday \n");
			}
			if(date == x-1||date == x-1+7|| date == x-1+14|| date == x-1+21){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21){
				printf("Monday \n");
			}
			if(date == x-6||date == x+1|| date == x+1+7|| date == x+1+14 || date == x+1+21){
				printf("Tuesday \n");
			}
			if(date == x-5||date == x+2|| date == x+2+7|| date == x+2+14 || date == x+2+21){
				printf("Wednesday \n");
			}
			if(date == x-4||date == x+3|| date == x+3+7|| date == x+3+14 || date == x+24){
				printf("Thursday \n");
			}
		}
		if(month == a[3]){ // 4 月份 
			x = 4;
			// 4 11 18 25 
			
			if(date == x-3||date == x-3+7|| date == x-3+14|| date == x-3+21 || date == x-3+28){
				printf("Friday \n");
			}
			if(date == x-2||date == x-2+7|| date == x-2+14|| date == x-2+21 || date == x-2+28){
				printf("Saturday \n");
			}
			if(date == x-1||date == x-1+7|| date == x-1+14|| date == x-1+21){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21){
				printf("Monday \n");
			}
			if(date == x+1|| date == x+1+7|| date == x+1+14 || date == x+1+21){
				printf("Tuesday \n");
			}
			if(date == x+2|| date == x+2+7|| date == x+2+14 || date == x+2+21){
				printf("Wednesday \n");
			}
			if(date == x+3|| date == x+3+7|| date == x+3+14 || date == x+24){
				printf("Thursday \n");
			}
			
		}
		if(month == a[4]){ // 5 月份 
			x = 2;
			// 4 11 18 25 
			
			if(date == x+4|| date == x+11|| date == x+18|| date == x+25){
				printf("Friday \n");
			}
			if(date == x-2+7|| date == x+12|| date == x+19|| date == x+26){
				printf("Saturday \n");
			}
			if(date == x-1||date == x-1+7|| date == x-1+14|| date == x+20|| date == x+27){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21 || date == x+28){
				printf("Monday \n");
			}
			if(date == x+1|| date == x+1+7|| date == x+1+14 || date == x+22|| date == x+29){
				printf("Tuesday \n");
			}
			if(date == x+2|| date == x+2+7|| date == x+2+14 || date == x+23){
				printf("Wednesday \n");
			}
			if(date == x+3|| date == x+3+7|| date == x+3+14 || date == x+24){
				printf("Thursday \n");
			}
		}
		if(month == a[5]){ // 6 月份 
			x = 6;
			// 4 11 18 25 
			
			if(date == x-3||date == x-3+7|| date == x-3+14|| date == x-3+21){
				printf("Friday \n");
			}
			if(date == x-2||date == x-2+7|| date == x-2+14|| date == x-2+21){
				printf("Saturday \n");
			}
			if(date == x-1||date == x-1+7|| date == x-1+14|| date == x-1+21){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21){
				printf("Monday \n");
			}
			if(date == x+1|| date == x+1+7|| date == x+1+14 || date == x+1+21){
				printf("Tuesday \n");
			}
			if(date == x-5||date == x+2|| date == x+2+7|| date == x+2+14 || date == x+2+21){
				printf("Wednesday \n");
			}
			if(date == x-4||date == x+3|| date == x+3+7|| date == x+3+14 || date == x+24){
				printf("Thursday \n");
			}
		}
		if(month == a[6]){ // 7 月份 
			x = 4;
			// 4 11 18 25 
			
			if(date == x-3||date == x-3+7|| date == x-3+14|| date == x-3+21 || date == x-3+28){
				printf("Friday \n");
			}
			if(date == x-2||date == x-2+7|| date == x-2+14|| date == x-2+21 || date == x-2+28){
				printf("Saturday \n");
			}
			if(date == x-1||date == x-1+7|| date == x-1+14|| date == x-1+21|| date == x-1+28){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21){
				printf("Monday \n");
			}
			if(date == x+1|| date == x+1+7|| date == x+1+14 || date == x+1+21){
				printf("Tuesday \n");
			}
			if(date == x+2|| date == x+2+7|| date == x+2+14 || date == x+2+21){
				printf("Wednesday \n");
			}
			if(date == x+3|| date == x+3+7|| date == x+3+14 || date == x+24){
				printf("Thursday \n");
			}
			
		}
		if(month == a[7]){ // 8 月份 
			x = 1;
			// 1 8 15 22 29
			
			if(date == x+4|| date == x+11|| date == x+18|| date == x+25){
				printf("Friday \n");
			}
			if(date == x-2+7|| date == x+12|| date == x+19|| date == x+26){
				printf("Saturday \n");
			}
			if(date == x-1+7|| date == x-1+14|| date == x+20|| date == x+27){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21 || date == x+28){
				printf("Monday \n");
			}
			if(date == x+1|| date == x+1+7|| date == x+1+14 || date == x+22|| date == x+29){
				printf("Tuesday \n");
			}
			if(date == x+2|| date == x+2+7|| date == x+2+14 || date == x+23|| date == x+30){
				printf("Wednesday \n");
			}
			if(date == x+3|| date == x+3+7|| date == x+3+14 || date == x+24){
				printf("Thursday \n");
			}
		}
		if(month == a[8]){ // 9 月份 
			x = 5;
			// 4 11 18 25 
			
			if(date == x-3||date == x-3+7|| date == x-3+14|| date == x-3+21 || date == x-3+28){
				printf("Friday \n");
			}
			if(date == x-2||date == x-2+7|| date == x-2+14|| date == x-2+21){
				printf("Saturday \n");
			}
			if(date == x-1||date == x-1+7|| date == x-1+14|| date == x-1+21){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21){
				printf("Monday \n");
			}
			if(date == x+1|| date == x+1+7|| date == x+1+14 || date == x+1+21){
				printf("Tuesday \n");
			}
			if(date == x+2|| date == x+2+7|| date == x+2+14 || date == x+2+21){
				printf("Wednesday \n");
			}
			if(date == x-4||date == x+3|| date == x+3+7|| date == x+3+14 || date == x+24){
				printf("Thursday \n");
			}
			
		}
		if(month == a[9]){ // 10 月份 
			x = 3;
			// 4 11 18 25 
			
			if(date == x+4|| date == x+11|| date == x+18|| date == x+25){
				printf("Friday \n");
			}
			if(date == x-2||date == x-2+7|| date == x+12|| date == x+19|| date == x+26){
				printf("Saturday \n");
			}
			if(date == x-1||date == x-1+7|| date == x-1+14|| date == x+20|| date == x+27){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21 || date == x+28){
				printf("Monday \n");
			}
			if(date == x+1|| date == x+1+7|| date == x+1+14 || date == x+22){
				printf("Tuesday \n");
			}
			if(date == x+2|| date == x+2+7|| date == x+2+14 || date == x+23){
				printf("Wednesday \n");
			}
			if(date == x+3|| date == x+3+7|| date == x+3+14 || date == x+24){
				printf("Thursday \n");
			}
		}
		if(month == a[10]){ // 11 月份 
			x = 7;
			// 4 11 18 25 
			
			if(date == x-3||date == x-3+7|| date == x-3+14|| date == x-3+21){
				printf("Friday \n");
			}
			if(date == x-2||date == x-2+7|| date == x-2+14|| date == x-2+21){
				printf("Saturday \n");
			}
			if(date == x-1||date == x-1+7|| date == x-1+14|| date == x+20){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21){
				printf("Monday \n");
			}
			if(date == x-6||date == x+1|| date == x+1+7|| date == x+1+14|| date == x+22){
				printf("Tuesday \n");
			}
			if(date == x-5||date == x+2|| date == x+2+7|| date == x+2+14|| date == x+23){
				printf("Wednesday \n");
			}
			if(date == x-4||date == x+3|| date == x+3+7|| date == x+3+14|| date == x+24){
				printf("Thursday \n");
			}
		}
		if(month == a[11]){ // 12 月份 
			x = 5;
			// 4 11 18 25 
			
			if(date == x-3||date == x-3+7|| date == x-3+14|| date == x-3+21 || date == x-3+28){
				printf("Friday \n");
			}
			if(date == x-2||date == x-2+7|| date == x-2+14|| date == x-2+21 || date == x-2+28){
				printf("Saturday \n");
			}
			if(date == x-1||date == x-1+7|| date == x-1+14|| date == x-1+21|| date == x+27){
				printf("Sunday \n");
			}
			if(date == x|| date == x+7|| date == x+14 || date == x+21){
				printf("Monday \n");
			}
			if(date == x+1|| date == x+1+7|| date == x+1+14 || date == x+1+21){
				printf("Tuesday \n");
			}
			if(date == x+2|| date == x+2+7|| date == x+2+14 || date == x+2+21){
				printf("Wednesday \n");
			}
			if(date == x+3|| date == x+3+7|| date == x+3+14 || date == x+24){
				printf("Thursday \n");
			}
			
		}
	}
	
	return 0;
}
