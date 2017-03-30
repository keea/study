/*
* 열혈 C프로그래밍 p284 문제2
* 포인터의 이해
* @date     Thu Mar 30 19:34:30 2017
* @author   희아
*/

#include <stdio.h>

void main() {
	//int형 변수 num1, num2를 선언과 동시에 각각 10과 20으로 초기화
	int num1 = 10; 
	int num2 = 20;

	//int형 포인터 변수 ptr1, ptr2를 선언하며, num1과 num2를 가리키게 함
	int * ptr1 = &num1;
	int * ptr2 = &num2;

	//ptr1, ptr2를 이용해서 num1의 값을 10증가시키고, num2의 값을 10 감소
	*ptr1 += 10; //num1+=10; 값 : 20
	*ptr2 -= 10; //num2 -=10; 값 : 10

	//ptr1과 ptr2가 가리키는 대상을 서로 바꿈.
	int *temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	//ptr1과 ptr2가 가르키는 변수의 저장된 값을 출력
	printf("ptr1이 가르키는 변수 : %d\r\n", *ptr1);
	printf("ptr2이 가르키는 변수 : %d\r\n", *ptr2);
}