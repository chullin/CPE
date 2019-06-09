#include<stdio.h>

int main() {
	int a, i, p, j, count, t = 0;
	char m[31], n[31];
	long long int num[31], num2[31], g, h, ans;
	scanf("%d", &a);
	while(a--) {
		scanf("%s", &m);
		scanf("%s", &n);
		i = 0;
		while(m[i] != '\0') {
			i++;
		}
		for(j = 0; j <= i - 1; j++) {
			if(m[j] == '1') {
				num[j] = 1;
				p = i - 1 - j;
				while(p--) {
					num[j] = num[j] * 2;
				}
			}
			else if(m[j] == '0') {
				num[j] = 0;
			}
		}
		g = 0;
		for(j = 0; j <= i - 1; j++) {
			g = g + num[j];
		}
		i = 0;
		while(n[i] != '\0') {
			i++;
		}
		for(j = 0; j <= i - 1; j++) {
			if(n[j] == '1') {
				num2[j] = 1;
				p = i - 1 - j;
				while(p--) {
					num2[j] = num2[j] * 2;
				}
			}
			else if(n[j] == '0') {
				num2[j] = 0;
			}
		}
		h = 0;
		for(j = 0; j <= i - 1; j++) {
			h = h + num2[j];
		}
		count = 0;
		for(ans = 2; ans * ans <= g; ans++) {
			if(g % ans == 0 && h % ans == 0 || g == h) {
				count = 1;
				break;
			}
		}
		t++;
		if(count != 0) {
			printf("Pair #%d: All you need is love!\n", t);
		}
		else printf("Pair #%d: Love is not all you need!\n", t);
	}
	return 0;
} 
