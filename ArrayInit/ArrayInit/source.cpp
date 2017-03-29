/*
* 열혈 c프로그래밍 p259
* 배열의 초기화와 배열의 길이 계산
* @date     Wed Mar 29 16:54:52 2017
* @author   희아
*/

#include <stdio.h>

void main() {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len;

	printf("배열 arr1의 크기 : %d \r\n", sizeof(arr1)); 
	printf("배열 arr2의 크기 : %d \r\n", sizeof(arr2)); 
	printf("배열 arr3의 크기 : %d \r\n", sizeof(arr3)); 

	ar1Len = sizeof(arr1) / sizeof(int); //배열 arr1의 길이 계산
	ar2Len = sizeof(arr2) / sizeof(int); //배열 arr1의 길이 계산
	ar3Len = sizeof(arr3) / sizeof(int); //배열 arr1의 길이 계산

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