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

	//¼��
	printf("������һ���ɼ���(����-1ʱֹͣ����)");
	scanf("%d",&temp);

	while(temp != -1 && count < 10) {
		score[count] = temp;
		printf("������һ���ɼ���(����-1ʱֹͣ����)");
		scanf("%d",&temp);
		count++;
	}

	//��ʾ
	
	printf("����ĳɼ�����:\n");

	for(factor = 0; factor < count; factor++) {
		printf("%d\n",score[factor]);
	}

	//����
	
	printf("������Ҫ����ĳɼ�:");
	scanf("%d",&newScore);
	printf("��������Ҫ����ĳɼ���λ�ã����ĸ��ɼ�֮ǰ�����Ҳ����óɼ��������ӵ����һ��Ԫ�صĺ���)\n");
	scanf("%d",&pointScore);

	for(factor = 0; factor < count && score[factor] != pointScore; factor++) {

	}
	for(i = count; i > factor; i--) {
		score[i] = score[i - 1];
	}
	score[factor] = newScore;
	count++;
	
	//��ʾ
	
	printf("����ĳɼ�����:\n");

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