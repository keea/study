/*
* ���� c���α׷��� 222p
* �������� Ư�� Ȯ��
* @date     Tue Mar 28 10:09:59 2017
* @author   ���
*/

//�Լ�����
int SimpleFuncOne();
int SimpleFuncTwo();

#include <stdio.h>
int main() {
	int num = 17; //���ĺ��� main�� num ��ȿ
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \r\n", num);
	return 0; //main�� num�� ��ȿ�� ������ ����
 }

int SimpleFuncOne() {
	int num = 10; //���ĺ��� SimpleFuncOne�� num ��ȿ
	num++;
	printf("simpleFuncOne num: %d \r\n", num);
	return 0; //SimpleFuncOne�� num�� ��ȿ�� ������ ����
}

int SimpleFuncTwo() {
	int num1 = 20; //���ĺ��� num1 ��ȿ
	int num2 = 30; //���ĺ��� num2 ��ȿ
	num1++, num2--;
	printf("num1 & num2 : %d %d\r\n", num1, num2);
	return 0;
}