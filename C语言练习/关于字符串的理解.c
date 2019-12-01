#include <stdio.h>

int main() {
	char s1[] = {'A','B','C'};
	char s2[] = {"ABCD"};
	char s3[2][9] = {"beijing","shaanxi"};
	char s4[4]= {'A','B','C'};

	s3[0][7] = '2';
	s3[0][8] = '3';
	printf("[%s]\n",s1);
	printf("%s\n",s2);
	printf("%s\n",s3[0]);
	printf("%s\n",s4);

	return 0;
}