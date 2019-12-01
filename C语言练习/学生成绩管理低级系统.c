#include <stdio.h>

int main() {
	int score[10];
	int temp;
	int factor;
	int count = 0;
	int newScore;   //插入的成绩
	int pointScore; //插入的位置
	int targetScore;//需要删除的成绩
	int sum;
	float average;
	int i;
	int j;

	//以下为录入模块

	printf("请输入一个成绩：(输入-1时停止输入)");
	scanf("%d",&temp);

	while(temp != -1 && count < 10) {
		score[count++] = temp;
		printf("请输入一个成绩：(输入-1时停止输入)");
		scanf("%d",&temp);
	}
	
	printf("输入的成绩如下:\n");
	for(factor = 0; factor < count; factor++) {
		printf("%d\n",score[factor]);
	}

	//以下为增加模块

	printf("请输入想要增加的成绩:\n");
	scanf("%d",&newScore);
	printf("请输入想要插入的成绩的位置（在哪个成绩之前？若找不到该成绩，则增加到最后一个元素的后面）:\n");
	scanf("%d",&pointScore);
	
	//确定用户要插入的位置在数组中的编号
	
	for(factor = 0; factor < count && score[factor] != pointScore; factor++) {

	}
	for(temp = count; temp > factor; temp--) {
		score[temp] = score[temp - 1];
	}
	score[factor] = newScore; 
	count++;

	printf("输入的成绩如下:\n");
	for(factor = 0; factor < count; factor++) {
		printf("%d\n",score[factor]);
	}
	
	//以下为删除模块

	printf("请输入想要删除的成绩：");
	scanf("%d",&targetScore);

	for(factor = 0; factor < count && score[factor] != targetScore; factor++) {

	}
	while(factor >= count) {
		printf("找不到此成绩,请重新输入：\n");
		scanf("%d",&targetScore);
		for(factor = 0; factor < count && score[factor] != targetScore; factor++) {

		}
	}
	for(factor = 0; factor < count && score[factor] != targetScore; factor++) {
	
	}
	for(temp = factor; temp < count - 1; temp++) {
		score[temp] = score[temp + 1];
	}
	count--;

	printf("输入的成绩如下:\n");
	for(factor = 0; factor < count; factor++) {
		printf("%d\n",score[factor]);
	}

	//以下为排序模块

	for(i = 0; i < count - 1; i++) {
		for(j = i + 1; j < count; j++) {
			if(score[i] > score[j]) {
				temp = score[j];
				score[j] = score[i];
				score[i] = temp;
			}
		}
	}
	printf("将成绩由小到大排序如下:\n");
	for(factor = 0; factor < count; factor++) {
		printf("%d\n",score[factor]);
	}
		

	//以下为求平均数模块

	sum = 0;
	for(factor = 0; factor < count; factor++) {
		sum += score[factor]; 
	}
	average = sum / count;
	
	printf("成绩的总和为：%d",sum);
	printf("平均成绩为：%f",average);

	return 0;
}