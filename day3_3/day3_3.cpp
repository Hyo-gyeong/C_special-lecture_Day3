#include <stdio.h>

 void swap (int &num1, int &num2);//& = 엔퍼센트 주소라는 뜻, 매개변수를 받는것 같지만 그것이 아님, main의 변수를 가리킴..!*******main이 변함******
 //void swap (int num1, int num2) main 속의 내용 바뀌지 않고 swap함수안에 num1, num2라는 변수가 다른공간에 따로 생김. 여기에 변수 받음.swap에서 뭔짓을해도 이 안에서만 바뀌고 main에서는 아무일도 일어나지 않음 
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

 void swap (int &num1, int &num2)//주소를 전달하는 원리,main자체를 바꿔버림!
 {
	 int temp;

	 temp = num1;
	 num1 = num2;
	 num2 = temp;
	
	 return;
 }