#include <stdio.h>

int main() {
	int s1[100];
	int s2[100];
	int index;

	scanf("%s %s",s1,s2);
	for(index = 0; s1[index] != s2[index]; index++) {		
	}
	printf("%d",index + 1);

	return 0;
}