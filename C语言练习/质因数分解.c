#include <stdio.h>
#include <math.h>

int main() {
	int num;
	int i;
	int temp;

	scanf("%d",&num);

	for(i = 2; i < sqrt(num); i++) {
		if(num % i == 0) {
			temp = i;
		}
	}
	printf("%d\n",num / temp);

	return 0;
}