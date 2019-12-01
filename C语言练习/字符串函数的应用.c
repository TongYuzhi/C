#include <stdio.h>
#include <string.h>

int main() {
	char s1[80] = "ABCDEFG";
	char s2[80] = "XYZ";

	//strcat(s1,s2);
	//printf("%s  %s\n",s1,s2);

	strcpy(s1 + 2,s2);
	printf("%s  %s\n",s1,s2);

	//strcpy(s2,s1);
	//printf("%s  %s\n",s1,s2);

	//printf("%d\n",strcmp(s1,s2));
	//printf("%d\n",strcmp(s2,s1));

	return 0;
}