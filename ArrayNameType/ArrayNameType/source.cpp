/*
* ���� c���α׷��� p290
* ������ �迭�� ����
* @date     Fri Mar 31 14:04:16 2017
* @author   ���
*/

#include <stdio.h>

int main() {
	int arr[3] = { 0,1,2 };


	printf("=========arr==========\r\n"); //int�� �迭��Ұ� �ּ� ���� ���� 4����Ʈ�̴�.
	printf("�迭�� �̸� : %p \r\n", arr);
	printf("ù ��° ��� : %p \r\n", &arr[0]);
	printf("�� ��° ��� : %p \r\n", &arr[1]);
	printf("�� ��° ��� : %p \r\n\r\n", &arr[2]);


	

	//arr = &arr[i]; //�� ������ ������ ������ ����Ų��. 

	printf("��� : %d\r\n", *arr); //arr������ ���ڿ��� ù ��° ������ �ּҸ� ��Ÿ��.

	printf("arr[1] ��� : %d\r\n", arr[1]);
	printf("*arr+1 ��� : %d\r\n", *arr+1); 
	printf("1[arr] ��� : %d\r\n", 1[arr]);
	//arr[1] == *(arr+1) == *(1+arr) == 1[arr]

	return 0;

}