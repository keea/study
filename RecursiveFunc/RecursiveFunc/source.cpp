/*
* ���� C ���α׷��� p240
* ����Լ�
* @date     Tue Mar 28 11:53:18 2017
* @author   ���
*/

#include<stdio.h>
void Recursive(int num);


void main() {
	Recursive(3);
}

void Recursive(int num) {
	if (num <= 0) //��� Ż�� ����
		return; //����� Ż��

	printf("Recursive call %d \r\n", num);
	Recursive(num - 1);
}