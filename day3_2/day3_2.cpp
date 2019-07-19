#include <stdio.h>

int min (int num1, int num2);
int getGCD(int num1, int num2, int num3);

int main(void)
{
	int n1, n2, n3;

	printf("Enter a number: ");
	scanf("%d", &n1);
	printf("Enter a number: ");
	scanf("%d", &n2);
	printf("Enter a number: ");
	scanf("%d", &n3);
	
	printf("GCD is %d\n", getGCD(n1, n2, n3));
}

int min (int num1, int num2)
{
	int bigger;

	bigger = (num1 > num2) ? num1 : num2;

	return bigger;
}

int getGCD(int num1, int num2, int num3)
{
	int i, mini;
	int gcd;

	mini = min(min(num1,num2), num3);

	for (i = mini; i >= 1; i--) {
		if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0) {
			gcd = i;
			break;
		}
	}
	return gcd;
}