#include <stdio.h>

int main() {
	int score[10];
	int temp;
	int factor;
	int count = 0;
	int newScore;   //����ĳɼ�
	int pointScore; //�����λ��
	int targetScore;//��Ҫɾ���ĳɼ�
	int sum;
	float average;
	int i;
	int j;

	//����Ϊ¼��ģ��

	printf("������һ���ɼ���(����-1ʱֹͣ����)");
	scanf("%d",&temp);

	while(temp != -1 && count < 10) {
		score[count++] = temp;
		printf("������һ���ɼ���(����-1ʱֹͣ����)");
		scanf("%d",&temp);
	}
	
	printf("����ĳɼ�����:\n");
	for(factor = 0; factor < count; factor++) {
		printf("%d\n",score[factor]);
	}

	//����Ϊ����ģ��

	printf("��������Ҫ���ӵĳɼ�:\n");
	scanf("%d",&newScore);
	printf("��������Ҫ����ĳɼ���λ�ã����ĸ��ɼ�֮ǰ�����Ҳ����óɼ��������ӵ����һ��Ԫ�صĺ��棩:\n");
	scanf("%d",&pointScore);
	
	//ȷ���û�Ҫ�����λ���������еı��
	
	for(factor = 0; factor < count && score[factor] != pointScore; factor++) {

	}
	for(temp = count; temp > factor; temp--) {
		score[temp] = score[temp - 1];
	}
	score[factor] = newScore; 
	count++;

	printf("����ĳɼ�����:\n");
	for(factor = 0; factor < count; factor++) {
		printf("%d\n",score[factor]);
	}
	
	//����Ϊɾ��ģ��

	printf("��������Ҫɾ���ĳɼ���");
	scanf("%d",&targetScore);

	for(factor = 0; factor < count && score[factor] != targetScore; factor++) {

	}
	while(factor >= count) {
		printf("�Ҳ����˳ɼ�,���������룺\n");
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

	printf("����ĳɼ�����:\n");
	for(factor = 0; factor < count; factor++) {
		printf("%d\n",score[factor]);
	}

	//����Ϊ����ģ��

	for(i = 0; i < count - 1; i++) {
		for(j = i + 1; j < count; j++) {
			if(score[i] > score[j]) {
				temp = score[j];
				score[j] = score[i];
				score[i] = temp;
			}
		}
	}
	printf("���ɼ���С������������:\n");
	for(factor = 0; factor < count; factor++) {
		printf("%d\n",score[factor]);
	}
		

	//����Ϊ��ƽ����ģ��

	sum = 0;
	for(factor = 0; factor < count; factor++) {
		sum += score[factor]; 
	}
	average = sum / count;
	
	printf("�ɼ����ܺ�Ϊ��%d",sum);
	printf("ƽ���ɼ�Ϊ��%f",average);

	return 0;
}