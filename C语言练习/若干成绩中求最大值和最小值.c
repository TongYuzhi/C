#include <stdio.h>

int main() {
	int temp;
	int maxScore = 0;
	int minScore = 0;

	printf("������һ���ɼ�<����-1ʱ��������>");
	for(scanf("%d",&temp),maxScore = minScore = temp; temp != -1; scanf("%d",&temp)) {
		if(maxScore < temp) {
			maxScore = temp;
		}
		if(minScore > temp) {
			minScore = temp;
		}
		printf("������һ���ɼ�<����-1ʱ��������>");
	}

	printf("��һ��ɼ��У����ɼ�Ϊ:%d\n��С�ɼ�Ϊ:%d\n",maxScore,minScore);

	return 0;
}