#include <stdio.h>
#include <math.h>

int main() {
	int rowCount;
	int i;
	int j;

	printf("ÇëÊäÈëĞĞÊı:\n");
	scanf("%d",&rowCount);

	for(i = 1; i < rowCount + 1; i++) {
		for(j = 0; j < abs(rowCount/2 + 1 - i); j++) {
			printf("*");
		}
		for(j = 0; j < 2 * (rowCount / 2 + 1 - abs(rowCount/2 + 1 - i)) - 1; j++) {
			printf(" ");
		}
		for(j = 0; j < abs(rowCount/2 + 1 - i); j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}