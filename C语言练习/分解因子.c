#include <stdio.h>

int main() {
	int num;
	int factor;
	
	printf("������һ����:\n");
	scanf("%d",&num);

	for(factor = 1; factor <= num; factor++) {
		if(num % factor == 0) {
			printf("������һ������Ϊ:%d\n",factor);
		}
	}

	return 0;
}