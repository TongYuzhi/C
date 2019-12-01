#include <stdio.h>

int main() {
	int temp;
	int maxNum = 0;
	int minNum = 0;
	int n;
	int i;

	scanf("%d",&n);
	scanf("%d",&temp);
	maxNum = minNum = temp;

	for(i = 0; i < n - 1; i++) {
		scanf("%d ",&temp);
		if(temp > maxNum) {
			maxNum = temp;
		}
		else if(temp < minNum) {
			minNum = temp;
		}
	}
	printf("%d %d",minNum,maxNum);

	return 0;
}