#include <stdio.h>

int main() {
	int num;
	int m;
	int n;

	printf("������һ����:\n");
	scanf("%d",&num);

	for(m = 0,n = num; n; n /= 10) {
		m = m * 10 + n % 10;
	}
	if(m == num) {
		printf("������һ��������\n");
	}
	else {
		printf("�������ǻ�����\n");
	}

	return 0;
}