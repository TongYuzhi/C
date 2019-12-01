#include <stdio.h>

int main() {
	int num;

	printf("请输入要转化的数:\n");
	scanf("%d",&num);
	for(; num; num /= 16) {
		printf("%c\n","0123456789ABCDEF"[num % 16]);
	}

	return 0;
}