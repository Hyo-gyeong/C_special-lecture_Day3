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

	printf("Maximum is %d\n", max(max(n1, n2), n3));//ȣ��ȿ� ȣ�� �־ ������ ȣ���Ѱ� ���ֱ�(�ڵ� �����ϰ� �����)

	return 0;
}

int max (int n, int m)
{
	int result;

	result = (n > m) ? n: m;//����(x >y) ? ��(x) : ����(y), ���� �����ڸ� �̿��ؼ� �� �����ϰ� ǥ���ϱ�

	return result;
}