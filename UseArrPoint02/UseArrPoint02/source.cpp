/*
* 열혈 C프로그램밍 p300 문제2
* 포인터 변수에 저장된 값을 변경시키지 않고 배열요소에 접근.
* @date     Thu Apr  6 11:12:15 2017
* @author   희아
*/
#include <stdio.h>

void main() {
	//길이가 5인 int형 배열 arr선언
	//1,2,3,4,5로 초기화
	int arr[] = { 1,2,3,4,5 };

	//배열의 첫번째 요소를 가리키는 포인터 변수 ptr선언
	int * ptr = arr;


	//포인터 변수 ptr에 저장된 값을 변경시키지 않고, ptr을 대상으로 뎃셈연산을 하여,
	//그 결과로 반환되는 주소 값을 통해서 모든 배열요소에 접근하여 값을 2씩 증가
	int length = sizeof(arr) / sizeof(int);
	for (int i = 0; i < length; i++) {
		*(ptr + i) += 2;
	}


	for (int j = 0; j < length; j++) {
		printf("%d ", arr[j]);
	}
}