#include <stdio.h>

int main() {
	//int index;
	int temp;

	/*for(index = 0; index < 3; index++) {
		scanf("%d",&temp);
		switch(temp) {
		case 1: printf("[%d]",++temp);
		case 2: printf("{%d}",++temp);
		default: printf("<%d>",++temp);
		}
	}*/
	scanf("%d",&temp);
		switch(temp) {
		case 1: printf("[%d]",++temp);
		case 2: printf("{%d}",++temp);
		default: printf("<%d>",++temp);
		}

	return 0;
}