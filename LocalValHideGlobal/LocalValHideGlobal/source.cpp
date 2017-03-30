/*
* 열혈 C프로그래밍 p231
* 전역변수와 동일한 이름의 지역변수가 선언된다면
* @date     Tue Mar 28 11:14:37 2017
* @author   희아
*/

#include <stdio.h>
int Add(int val);
int num = 1;

void main() {
	int num = 5;
	printf("num: %d \r\n", Add(3));
	printf("num: %d \r\n", num + 9);
}

int Add(int val) {
	int num = 9;
	num += val;
	return num;
}