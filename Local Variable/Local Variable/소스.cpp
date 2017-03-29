/*
* 열혈 c프로그래밍 222p
* 지역변수 특성 확인
* @date     Tue Mar 28 10:09:59 2017
* @author   희아
*/

//함수정의
int SimpleFuncOne();
int SimpleFuncTwo();

#include <stdio.h>
int main() {
	int num = 17; //이후부터 main의 num 유효
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \r\n", num);
	return 0; //main의 num이 유효한 마지막 문장
 }

int SimpleFuncOne() {
	int num = 10; //이후부터 SimpleFuncOne의 num 유효
	num++;
	printf("simpleFuncOne num: %d \r\n", num);
	return 0; //SimpleFuncOne의 num이 유효한 마지막 문장
}

int SimpleFuncTwo() {
	int num1 = 20; //이후부터 num1 유효
	int num2 = 30; //이후부터 num2 유효
	num1++, num2--;
	printf("num1 & num2 : %d %d\r\n", num1, num2);
	return 0;
}