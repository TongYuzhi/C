#include <stdio.h>
#include <math.h>

int main() {
	int i;
	int j;
	int k;
	int rowCount;

	printf("请输入图案的行数:\n");
	scanf("%d",&rowCount);

	for(i = 1; i < rowCount + 1; i++) {
		for(j = 0; j < abs(rowCount/2 - i + 1); j++) {
			printf(" ");
		}
		for(k = 0; k < 2*(rowCount/2 + 1 - abs(rowCount/2 - i + 1)) - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}