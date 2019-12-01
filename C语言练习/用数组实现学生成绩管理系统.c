#include <stdio.h>

int main() {
	int score[10];
	int factor;
	int temp;
	int count = 0;
	int newScore;
	int pointScore;
	int i;
	int j;

	//录入
	printf("请输入一个成绩：(输入-1时停止输入)");
	scanf("%d",&temp);

	while(temp != -1 && count < 10) {
		score[count] = temp;
		printf("请输入一个成绩：(输入-1时停止输入)");
		scanf("%d",&temp);
		count++;
	}

	//显示
	
	printf("输入的成绩如下:\n");

	for(factor = 0; factor < count; factor++) {
		printf("%d\n",score[factor]);
	}

	//插入
	
	printf("请输入要插入的成绩:");
	scanf("%d",&newScore);
	printf("请输入想要插入的成绩的位置（在哪个成绩之前？若找不到该成绩，则增加到最后一个元素的后面)\n");
	scanf("%d",&pointScore);

	for(factor = 0; factor < count && score[factor] != pointScore; factor++) {

	}
	for(i = count; i > factor; i--) {
		score[i] = score[i - 1];
	}
	score[factor] = newScore;
	count++;
	
	//显示
	
	printf("输入的成绩如下:\n");

	for(factor = 0; factor < count; factor++) {
		printf("%d\n",score[factor]);
	}


	return 0;
}
/*
99
88
77
-1
66
*/