#include <stdio.h>

int main() {
	int num;
	int maxNum;
	int count;

	printf("������һ����:\n");
	scanf("%d",&maxNum);

	for(count = 0; count<9; count++) {	
		printf("������һ������\n");
		scanf("%d",&num);
		if(num > maxNum)
			maxNum = num;
	}
	
	printf("��ʮ���ɼ��е����ɼ�Ϊ:%d\n",maxNum);

	return 0;
}
