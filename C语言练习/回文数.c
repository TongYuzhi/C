#include <stdio.h>

int main() {
	int num;
	int m;
	int n;

	printf("请输入一个数:\n");
	scanf("%d",&num);

	for(m = 0,n = num; n; n /= 10) {
		m = m * 10 + n % 10;
	}
	if(m == num) {
		printf("此数是一个回文数\n");
	}
	else {
		printf("此数不是回文数\n");
	}

	return 0;
}