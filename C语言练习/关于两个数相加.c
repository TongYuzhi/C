#include <stdio.h>

int main() {
    int a,b;
    int sum;
    
    printf("请输入两个数:\n");
	scanf("%d %d",&a,&b);

	sum = a + b;
	printf("这两个数之和为:%d\n",sum);
    
    return 0;
}