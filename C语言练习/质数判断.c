#include <stdio.h>

int main() {
	int num;
	int i;

	printf("������һ����:\n");
	scanf("%d",&num);

	for(i = 2; num % i; i++) {
	}
		if(i >= num) {
			printf("%d������\n",num);
		}
		else {
			printf("%d��������\n",num);
		}

	return 0;
}