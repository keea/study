/*
* ���� C���α׷��� p279
* �������� �ٲٴ� �Լ�
* @date     Thu Mar 30 14:30:51 2017
* @author   ���
*/

#include <stdio.h>

void UnusePoint(int pnum1, int pnum2);
void UsePoint(int * pnum1, int * pnum2);

void main() {
	int num1 = 100, num2 = 100;
	UnusePoint(num1, num2);
	printf("����Ʈ ������� �ʴ� ��� num1 : %d, num2 : %d\r\n", num1, num2);

	UsePoint(&num1, &num2);
	printf("%d\r\n", &num1);
	printf("����Ʈ ����� ��� num1 : %d, num2 : %d\r\n", num1, num2);
}

void UnusePoint(int pnum1, int pnum2) { //num1, num2�� ������ ������ �ʰ� ������ ���� ����.
	pnum1 += 30; 
	pnum2 -= 30;
	//���������� �Ű������� ���� ����. num1,num2�� ���� ������ ����.
} 

void UsePoint(int * pnum1, int * pnum2) {
	*pnum1 += 30;
	*pnum2 -= 30; //�� �ּҿ� �ִ� ���� �ٲ�.
}