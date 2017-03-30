/*
* 열혈 C프로그래밍 p279
* 변수값을 바꾸는 함수
* @date     Thu Mar 30 14:30:51 2017
* @author   희아
*/

#include <stdio.h>

void UnusePoint(int pnum1, int pnum2);
void UsePoint(int * pnum1, int * pnum2);

void main() {
	int num1 = 100, num2 = 100;
	UnusePoint(num1, num2);
	printf("포인트 사용하지 않는 경우 num1 : %d, num2 : %d\r\n", num1, num2);

	UsePoint(&num1, &num2);
	printf("%d\r\n", &num1);
	printf("포인트 사용한 경우 num1 : %d, num2 : %d\r\n", num1, num2);
}

void UnusePoint(int pnum1, int pnum2) { //num1, num2의 변수를 보내지 않고 변수의 값만 보냄.
	pnum1 += 30; 
	pnum2 -= 30;
	//지역변수인 매개변수의 값만 변경. num1,num2의 값은 변하지 않음.
} 

void UsePoint(int * pnum1, int * pnum2) {
	*pnum1 += 30;
	*pnum2 -= 30; //이 주소에 있는 값을 바꿈.
}