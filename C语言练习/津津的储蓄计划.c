#include <stdio.h>

int main() {
	int buget;
	int remain;
	int month;
	int cash;
	int savings;
	int temp;

	cash = 300;
	remain = 0;
	month = 0;
	savings = 0;
	temp = 0;

	while(month < 12 && remain >= 0) {
		scanf("%d",&buget);
		remain += cash - buget;
		if(remain / 100 > 0) {
			temp = remain / 100 * 100;
			remain -= temp;
			savings += temp;
		}
		month++;
	}
	
	if(month < 12) {
		printf("%d",-month);
	}
	else {
		printf("%d\n",remain + savings * 2 / 10 + savings);
	}

	return 0;
}