/*
* ���� C���α׷��� p234
* static ���� ���
* @date     Tue Mar 28 11:25:22 2017
* @author   ���
*/

#include<stdio.h>

void SimpleFunc();

void main() {
	int i;
	for (int i = 0; i < 3; i++) {
		SimpleFunc();
	}
}

void SimpleFunc() {
	static int num1 = 0;
	int num2 = 0;
	num1++; num2++;
	printf("static: %d, local: %d \r\n", num1, num2);
}