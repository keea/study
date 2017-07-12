/*
* 열혈 c프로그래밍 p256
* 배열을 선언하고 배열요소에 접근
* @date     Wed Mar 29 16:29:04 2017
* @author   keea
*/

#include<stdio.h>

void main() {
	int arr[5]; //길이가 5인 int형 1차원 배열 arr
	int sum = 0, i;

	arr[0] = 10; //배열의 위치 정보를 명시하는 인덱스 값은 0에서부터 시작한다.
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}

	printf("배열요소에 저장된 값의 합: %d \r\n", sum);
}
