/*
* 열혈 C프로그래밍 p242
* 재귀함수를 이용한 팩토리얼 계산
* @date     Tue Mar 28 13:11:13 2017
* @author   희아
*/

#include <stdio.h>
int Factorial(int n);

void main() {
	printf("0! = %d \r\n", Factorial(0));
	printf("1! = %d \r\n", Factorial(1));
	printf("2! = %d \r\n", Factorial(2));
	printf("3! = %d \r\n", Factorial(3));
	printf("4! = %d \r\n", Factorial(4));
	printf("9! = %d \r\n", Factorial(9));
}

int Factorial(int n) {
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}