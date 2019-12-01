#include <stdio.h>

int main() {
	int num;
	int i;

	printf("请输入一个数:\n");
	scanf("%d",&num);

	for(i = 2; num % i; i++) {
	}
		if(i >= num) {
			printf("%d是质数\n",num);
		}
		else {
			printf("%d不是质数\n",num);
		}

	return 0;
}