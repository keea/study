/*
* ���� C���α׷��� p231
* ���������� ������ �̸��� ���������� ����ȴٸ�
* @date     Tue Mar 28 11:14:37 2017
* @author   ���
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