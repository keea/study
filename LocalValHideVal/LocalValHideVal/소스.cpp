/*
* ���� C���α׷��� p228
* main �Լ���, if�� ���ο� ������ �̸��� ������ ���� ���
* @date     Tue Mar 28 10:52:17 2017
* @author   ���
*/

#include <stdio.h>
void main() {
	int num = 1;

	if (num == 1) {
		//int num = 7; //�� ���� �ּ�ó�� �ϰ� ������ Ȯ������!
		num += 10; 
		printf("if�� �� �������� num : %d \r\n", num);
	}
	printf("main �Լ� �� �������� num: %d \r\n", num);
 }