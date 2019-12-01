#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define SHOW_BY_LENGTH  -1

const char *TITLE = "点坐标管理系统";
const char *AUTHOR = "坨·罗纳尔多";
const char *menuItem[] = {
	"1.录入点坐标",
	"2.插入新点功能",
	"3.删除点功能",
	"4.显示所有点坐标",
	"5.按行坐标升序排列",
	"6.退出",
};

void showMessages(char *message,int position);

void showMessages(char *message,int position) {
	int i;

	if (SHOW_BY_LENGTH == position) {
		position = (80 - strlen(message)) / 2;
	}

	for(i = 0; i < position; i++) {
		printf(" ");
	}
	printf("%s\n",message );
}

int main() {
	char author[79];
	int pos;

	strcpy(author,"作者：   ");
	strcat(author,AUTHOR);
	pos = 79 - strlen(author);

	system("cls");
	showMessages(author,SHOW_BY_LENGTH);
	showMessages(TITLE,SHOW_BY_LENGTH);




	getch();
}


