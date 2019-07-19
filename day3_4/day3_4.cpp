#include <stdio.h>

void displaySorted (int num1, int num2, int num3);

int main(void)
{
	int n1, n2, n3;

	printf("Enter a number: ");
	scanf("%d", &n1);
	printf("Enter a number: ");
	scanf("%d", &n2);
	printf("Enter a number: ");
	scanf("%d", &n3);
	
	printf("\n\n");

	printf("Befor sorting: %d, %d, %d\n", n1, n2, n3);

	displaySorted (n1, n2, n3);

	return 0;
}

void displaySorted (int num1, int num2, int num3)
{
	int first = num1, second = num2, third = num3;
	int temp;

	if (num1 < num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;

		// num1 > num2

		if (num2 < num3 && num3 < num1) {
			first = num1;
			second = num3;
			third = num2;
		}
		else if (num2 > num3) {
			first = num1;
			second = num2;
			third = num3;
		}
		else if (num3 > num1) {
			first = num3;
			second = num1;
			third = num2;
		}
	}
	else {
		if (num2 > num3) {
			first = num1;
			second = num2;
			third = num3;
		}
		else {
			first = num1;
			second = num3;
			third = num2;
		}
	}
	printf("After sortinf: %d, %d, %d\n", third, second, first);
}