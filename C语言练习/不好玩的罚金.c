#include <stdio.h>

int main() {
	int limitSpeed;
	int recordSpeed;
	int above;

	printf("Enter the speed limit:\n");
	scanf("%d",&limitSpeed);
	printf("Enter the recorded speed of the car:\n");
	scanf("%d",&recordSpeed);
	above = recordSpeed - limitSpeed;

	if(above > 0) {
		if(above <= 20) {
			printf("You are speeding and your fine is $100\n");
		}
		if(above <= 30 && above > 20) {
			printf("You are speeding and your fine is $270\n");
		}
		if(above > 30) {
			printf("You are speeding and your fine is $500\n");
		}
	}
	else {
		printf("Congratulations, you are within the speed limit\n");
	}

	return 0;
}