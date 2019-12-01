#include <stdio.h>

int main() {
	long a = 3;
	int b[10] = {6};
	char c = 'x';
	double d = .4;
	float e = .5;

	printf("%d %d %d %d %d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e));
	printf("%d",sizeof('\abcd'));
	printf("\n%d",sizeof(3+4));

	return 0;
}