/*
* ���� c���α׷��� p259
* �迭�� �ʱ�ȭ�� �迭�� ���� ���
* @date     Wed Mar 29 16:54:52 2017
* @author   ���
*/

#include <stdio.h>

void main() {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len;

	printf("�迭 arr1�� ũ�� : %d \r\n", sizeof(arr1)); 
	printf("�迭 arr2�� ũ�� : %d \r\n", sizeof(arr2)); 
	printf("�迭 arr3�� ũ�� : %d \r\n", sizeof(arr3)); 

	ar1Len = sizeof(arr1) / sizeof(int); //�迭 arr1�� ���� ���
	ar2Len = sizeof(arr2) / sizeof(int); //�迭 arr1�� ���� ���
	ar3Len = sizeof(arr3) / sizeof(int); //�迭 arr1�� ���� ���

	for (int i = 0; i < ar1Len; i++)
		printf("%d ", arr1[i]);
	printf("\r\n");

	for (int i = 0; i < ar2Len; i++)
		printf("%d ", arr2[i]);
	printf("\r\n");

	for (int i = 0; i < ar3Len; i++)
		printf("%d ", arr3[i]);
	printf("\r\n");
}