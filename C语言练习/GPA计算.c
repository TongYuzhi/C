#include <stdio.h>

int main() {
	int subjectNum;
	float score;
	float credit;
	int index;
	float GPA;
	float sum1;
	float sum2;

	printf("请输入科目数量:\n");
	scanf("%d",&subjectNum);
	
	index = 0;
	sum1 = sum2 = 0;

	for(index = 0; index < subjectNum; index++) {
		printf("请输入第%d门课的学分和成绩: ",index + 1);
		scanf("%f %f",&credit,&score);
		sum1 += credit * score;
		sum2 += credit;
	}

	GPA = sum1 / sum2;
	printf("您的GPA为:%.2f\n",GPA);

	return 0;
}