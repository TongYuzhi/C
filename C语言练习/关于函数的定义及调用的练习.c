#include <stdio.h>

int fun(int);

int fun(int num) {
	int i;
	int sum = 0;

	for(i = 0; i < num; i++) {
		sum +=i;
	}

	return sum;
}

int main() {
	int num;
	
	scanf("%d",&num);
	printf("%d",fun(num));
	
	return 0;
}