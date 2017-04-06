#include <stdio.h>
/*
* 열혈 C프로그램밍 p299 문제1
* 포인터 변수에 저장된 값을 변경시켜가면서 배열요소에 접근.
* @date     Wed Apr  5 18:52:33 2017
* @author   희아
*/
void main() {
	//길이가 5인 int형 배열 arr선언
	//1,2,3,4,5로 초기화
	int arr[] = {1,2,3,4,5};

	//배열의 첫번째 요소를 가리키는 포인터 변수 ptr선언
	int * ptr = arr;

	//포인터 변수 ptr에 저장된 값을 증가시키는 형태의 연산을 기반으로 배열요소에 접근하면서
	//모든 배열요소의 값을 2씩 증가
	int length = sizeof(arr) / sizeof(int);
	for (int i = 0; i < length; i++) {
		*(ptr + i) += 2;
	}

	for (int j = 0; j < length; j++) {
		printf("%d ", arr[j]);
	}
}