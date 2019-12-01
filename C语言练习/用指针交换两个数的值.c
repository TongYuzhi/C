#include <stdio.h>

void exchange(int *,int *);

void exchange(int *m,int *n) {
	int temp;

	temp = *m;
	*m = *n;
	*n = temp;
}

int main(int argc, char const *argv[]) {
	int a;
	int b;

	scanf("%d%d",&a,&b);
	
	exchange(&a,&b);

	printf("%d\n%d\n",a,b);

	return 0;
}
