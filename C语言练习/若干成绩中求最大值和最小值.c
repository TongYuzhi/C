#include <stdio.h>

int main() {
	int temp;
	int maxScore = 0;
	int minScore = 0;

	printf("请输入一个成绩<输入-1时结束输入>");
	for(scanf("%d",&temp),maxScore = minScore = temp; temp != -1; scanf("%d",&temp)) {
		if(maxScore < temp) {
			maxScore = temp;
		}
		if(minScore > temp) {
			minScore = temp;
		}
		printf("请输入一个成绩<输入-1时结束输入>");
	}

	printf("这一组成绩中，最大成绩为:%d\n最小成绩为:%d\n",maxScore,minScore);

	return 0;
}