#include <stdio.h>

int main() {
	int multiple;
	int i;
	int j;
	int k;
	int l;

	scanf("%d",&multiple);
	for(i = 0; i < multiple; i++) {
		for(j = 0; j < multiple; j++) {
			printf("*");
		}
		for(k = 0; k < multiple; k++) {
				printf("x");
		}
		for(l = 0; l < multiple; l++) {
					printf("*");
		}
		printf("\n");
	}

	for(i = 0; i < multiple; i++) {
		for(j = 0; j < multiple; j++) {
			printf(" ");
		}
		for(k = 0; k < multiple; k++) {
				printf("xx");
		}
		printf("\n");
	}

	for(i = 0; i < multiple; i++) {
		for(j = 0; j < multiple; j++) {
			printf("*");
		}
		for(k = 0; k < multiple; k++) {
				printf(" ");
		}
		for(l = 0; l < multiple; l++) {
					printf("*");
		}
		printf("\n");
	}

	return 0;
}