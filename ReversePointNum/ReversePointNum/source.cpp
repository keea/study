/*
* 열혈 C프로그램밍 p300 문제3
* 배열에 저장된 값의 순서가 반대로 출력되도록 변경. 단 포인터 사용.
* @date     Thu Apr  6 12:03:15 2017
* @author   희아
*/

#include <stdio.h>

void main() {
	int arr[] = { 1,2,3,4,5,6 };

	int length = sizeof(arr) / sizeof(int);

	int * firstNum = arr; //배열의 첫번째 값의 주소를 저장
	int * lastNum = &arr[length - 1]; //배열의 마지막 값의 주소를 저장

	for (int i = 0; i < length / 2; i++) { //앞뒤로 바꾸는 것은 반절만 하면 된다.

		int temp = *(firstNum + i); // 임시로 값 저장
		*(firstNum + i) = *(lastNum - i); 
		*(lastNum-i) = temp;
	}

	for (int j = 0; j < length; j++) {
		printf("%d ", arr[j]);
	}
}