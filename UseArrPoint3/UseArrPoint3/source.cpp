/*
* 한번에 끝내는 C프로그래밍 200제
* 포인터 변수에 저장된 값을 변경시켜가면서 배열요소에 접근하여 배열에 저장된 모든 정수의 합.
* @date     Thu Apr  6 11:51:46 2017
* @author   희아
*/

#include <stdio.h>

void main() {
	//길이가 5인 int형 배열 arr선언
	//1,2,3,4,5로 초기화
	int arr[] = { 1,2,3,4,5 };

	//이 배열의 마지막 요소를 가리키는 포인터 변수 ptr 선언
	int length = sizeof(arr) / sizeof(int); //배열의 사이즈 구하기
	int * ptr = &arr[length - 1];

	int tempSum = 0; //배열의 저장된 정수의 합

	//ptr에 저장된 값을 감소시키는 형태의 연산을 기반으로
	//모든 배열요소에 접근, 배열에 저장된 모든 정수를 더함.
	for (int i = 0; i < length; i++) {
		tempSum += *(ptr--);
	}

	//그 결과를 출력
	printf("%d", tempSum);

}