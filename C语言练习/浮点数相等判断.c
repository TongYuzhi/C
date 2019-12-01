#include <stdio.h>
#include <math.h>

int main() {
	double a;
	double b;

	scanf("%lf %lf",&a,&b);
	if(fabs(a - b) > 1e-8 ) {
		printf("no");
	}
	else {
		printf("yes");
	}

	return 0;
}