#include <stdio.h>
#include <string.h>

int main() {
	char s1[5][80] = { 0 };
	char temp[80] = { 0 };
	int i;
	int j;

	for(i = 0; i < 5; i++) {
		printf("ÇëÊäÈëµÚ%d¸ö×Ö·û´®\n",i + 1);
		scanf("%s",&s1[i][0]);
	}

	printf("ÊäÈëµÄ×Ö·û´®ÈçÏÂ:\n");
	for(i = 0; i < 5; i++) {
		printf("%s\n",s1[i]);
	}
	
	printf("×Ö·û´®ÅÅÐòÈçÏÂ:\n");
	for(i = 0; i < 4; i++) {
		for(j = i + 1; j < 5; j++) {
			if(strcmp(s1[i],s1[j]) > 0) {
				strcpy(temp,s1[i]);
				strcpy(s1[i],s1[j]);
				strcpy(s1[j],temp);
			}
		}
	}
	for(i = 0; i < 5; i++) {
		printf("%s\n",s1[i]);
	}
	
	return 0;
}