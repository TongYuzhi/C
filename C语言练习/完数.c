#include <stdio.h>

int main() {
	int sum;
	int num;
	int factor;

	for(num = 6; num < 10000; num++) {
		sum = 0;
		for(factor = 1; factor <= num / 2; factor++) {
			if(num % factor == 0)
				sum += factor;
		}
		if(sum == num)
			printf("%d ",num);
	}


	return 0;
}