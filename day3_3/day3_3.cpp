#include <stdio.h>

 void swap (int &num1, int &num2);//& = ���ۼ�Ʈ �ּҶ�� ��, �Ű������� �޴°� ������ �װ��� �ƴ�, main�� ������ ����Ŵ..!*******main�� ����******
 //void swap (int num1, int num2) main ���� ���� �ٲ��� �ʰ� swap�Լ��ȿ� num1, num2��� ������ �ٸ������� ���� ����. ���⿡ ���� ����.swap���� �������ص� �� �ȿ����� �ٲ�� main������ �ƹ��ϵ� �Ͼ�� ���� 
 int main(void)
 {
	 int n1, n2;

	 printf("Enter a number: ");
	 scanf("%d", &n1);
	 printf("Enter a number: ");
	 scanf("%d", &n2);
	 
	 printf("Befor swapping num1 is %d, num2 is %d\n", n1, n2);

	 swap (n1, n2);

	 printf("After swapping num1 is %d, num2 is %d\n", n1, n2);

	 return 0;
 }

 void swap (int &num1, int &num2)//�ּҸ� �����ϴ� ����,main��ü�� �ٲ����!
 {
	 int temp;

	 temp = num1;
	 num1 = num2;
	 num2 = temp;
	
	 return;
 }