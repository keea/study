/*
* ���� C ���α׷��� p230
* ���������� �������� Ư¡
* @date     Tue Mar 28 11:05:48 2017
* @author   ���
*/

#include<stdio.h>

int num; //���������� �⺻ 0���� �ʱ�ȭ��

void Add(int val);

void main() {
	printf("num : %d \r\n", num);
	Add(3);
	printf("num : %d \r\n", num);
	num++; //�������� num�� �� 1����
	printf("num : %d \r\n", num);
}

void Add(int val) {
	num += val; //�������� num�� �� val��ŭ ����
}