#include <stdio.h>

int main() {
	struct BOOK_INFORMATION {
		short code;
		char name;
		char writer;
		char publisher;
		char publicationDate;
		float price;
	}
	int count;
	int i;
	int j;

	printf("请输入图书数量:\n");
	scanf("%d",&count);

	for(i = 0; i < count; i++) {
		scanf("%d %s %s %s %s %.2f",&stu[i].code,&BOOK_INFORMATION[i].name,&BOOK_INFORMATION[i].writer,&BOOK_INFORMATION[i].publisher,&BOOK_INFORMATION[i].publicationDate);
	}
	

	return 0;
}