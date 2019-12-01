#include <stdio.h>

int main() {
	int num;
	int factor;
	
	printf("请输入一个数:\n");
	scanf("%d",&num);

	for(factor = 1; factor <= num; factor++) {
		if(num % factor == 0) {
			printf("此数的一个因子为:%d\n",factor);
		}
	}

	return 0;
}