#include <stdio.h>

void hanoi(int n ,char sorce,char assist,char target);
// ���������ϵ����ӣ�ͨ��������Ų�������ϣ���ʾΪ���ף��ң���
//������
//�Ƚ����һ���������������n-1�����ӣ���S,ͨ��T,Ų��A�ϣ�
//Ȼ�����һ�����Ӵ�S,Ų��T�ϣ�
//����ٽ�n-1�����Ӵ�A��ͨ��S��Ų��T��
void hanoi(int n ,char sorce,char assist,char target) {
	if(n) {
		hanoi(n-1,sorce,target,assist);
		printf("%d:%c->%c\n",n,sorce,target);
		hanoi(n-1,assist,sorce,target);
	}
}

int main() {
	int num;

	printf("�����뺺ŵ������:\n");
	scanf("%d",&num);

	hanoi(num,'A','B','C');

	return 0;
}