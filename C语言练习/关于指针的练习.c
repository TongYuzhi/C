#include <stdio.h>

int main() {
	int i,j,*p,*q;
	int *f;
	int a[10] = {1,2,3,4,5,6,7,8,9};
	
	p = &i;
	q = &j;
	f = a + 1;

	printf("p=%p,q=%p\n%p,%p\n",p,q,a,f);
	printf("a[0]=%d,a[1]=%d",*a,*f);

	return 0;
}