/*
* ���� C���α׷��� p284 ����2
* �������� ����
* @date     Thu Mar 30 19:34:30 2017
* @author   ���
*/

#include <stdio.h>

void main() {
	//int�� ���� num1, num2�� ����� ���ÿ� ���� 10�� 20���� �ʱ�ȭ
	int num1 = 10; 
	int num2 = 20;

	//int�� ������ ���� ptr1, ptr2�� �����ϸ�, num1�� num2�� ����Ű�� ��
	int * ptr1 = &num1;
	int * ptr2 = &num2;

	//ptr1, ptr2�� �̿��ؼ� num1�� ���� 10������Ű��, num2�� ���� 10 ����
	*ptr1 += 10; //num1+=10; �� : 20
	*ptr2 -= 10; //num2 -=10; �� : 10

	//ptr1�� ptr2�� ����Ű�� ����� ���� �ٲ�.
	int *temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	//ptr1�� ptr2�� ����Ű�� ������ ����� ���� ���
	printf("ptr1�� ����Ű�� ���� : %d\r\n", *ptr1);
	printf("ptr2�� ����Ű�� ���� : %d\r\n", *ptr2);
}