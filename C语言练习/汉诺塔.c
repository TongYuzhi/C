#include <stdio.h>

void hanoi(int n ,char sorce,char assist,char target);
// 将甲柱子上的盘子，通过乙柱，挪到丙柱上，表示为：甲，乙，丙
//分析：
//先将最后一个盘子上面的其他n-1个盘子，从S,通过T,挪到A上；
//然后将最后一个盘子从S,挪到T上；
//最后再将n-1个盘子从A，通过S，挪到T上
void hanoi(int n ,char sorce,char assist,char target) {
	if(n) {
		hanoi(n-1,sorce,target,assist);
		printf("%d:%c->%c\n",n,sorce,target);
		hanoi(n-1,assist,sorce,target);
	}
}

int main() {
	int num;

	printf("请输入汉诺塔层数:\n");
	scanf("%d",&num);

	hanoi(num,'A','B','C');

	return 0;
}