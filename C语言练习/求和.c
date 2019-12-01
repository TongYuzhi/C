#include <stdio.h>

int main() {
	int n;
	int temp;
	int i;
	int sum;
	
	sum = 0;
	scanf("%d",&n);
	if(n < 100) {
		for(i = 0; i < n; i++) {
			scanf("%d ",&temp);
			sum += temp;
		}
	}
	printf("%d",sum);

	return 0;
}