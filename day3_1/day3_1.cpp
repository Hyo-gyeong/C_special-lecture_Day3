#include <stdio.h>

int max (int n, int m);

int main(void)
{
	int n1, n2, n3;
	//int midmax;

	printf("Enter a number: ");
	scanf("%d", &n1);
	printf("Enter a number: ");
	scanf("%d", &n2);
	
	//max(misMax, n3);
	
	printf("Enter a number: ");
	scanf("%d", &n3);

	printf("Maximum is %d\n", max(max(n1, n2), n3));//호출안에 호출 넣어서 위에서 호출한거 없애기(코드 간단하게 만들기)

	return 0;
}

int max (int n, int m)
{
	int result;

	result = (n > m) ? n: m;//조건(x >y) ? 참(x) : 거짓(y), 삼항 연산자를 이용해서 더 간결하게 표현하기

	return result;
}