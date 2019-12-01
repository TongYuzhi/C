#include <stdio.h>

int main() {
	int num;
	int maxNum;
	int count;

	printf("请输入一个数:\n");
	scanf("%d",&maxNum);

	for(count = 0; count<9; count++) {	
		printf("请输入一个数：\n");
		scanf("%d",&num);
		if(num > maxNum)
			maxNum = num;
	}
	
	printf("这十个成绩中的最大成绩为:%d\n",maxNum);

	return 0;
}
