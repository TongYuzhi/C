#include <stdio.h>

int main() {
	char s1[80];
	char s2[80];

	printf("����s1:\n");
	scanf("%s",s1);
	flushall();
	printf("����s2:\n");
	gets(s2);

	printf("[%s]\n[%s]",s1,s2);
//	puts(s2);

	return 0;
}