#include <stdio.h>

int main() {
	int i;
	int j;
	int k;
	int rowCount;

	printf("请输入星星的行数:\n");
	scanf("%d",&rowCount);

	for(i = 1; i < rowCount + 1; i++) {
		for(j = 0; j < rowCount - i; j++) {
			printf(" ");
		}
		for(k = 0; k < 2*i-1; k++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}