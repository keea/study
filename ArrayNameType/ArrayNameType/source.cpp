/*
* 열혈 c프로그래밍 p290
* 포인터 배열과 연산
* @date     Fri Mar 31 14:04:16 2017
* @author   희아
*/

#include <stdio.h>

int main() {
	int arr[3] = { 0,1,2 };


	printf("=========arr==========\r\n"); //int형 배열요소간 주소 값의 차는 4바이트이다.
	printf("배열의 이름 : %p \r\n", arr);
	printf("첫 번째 요소 : %p \r\n", &arr[0]);
	printf("두 번째 요소 : %p \r\n", &arr[1]);
	printf("세 번째 요소 : %p \r\n\r\n", &arr[2]);


	

	//arr = &arr[i]; //이 문장은 컴파일 에러를 일으킨다. 

	printf("요소 : %d\r\n", *arr); //arr변수는 문자열에 첫 번째 문자의 주소를 나타냄.

	printf("arr[1] 요소 : %d\r\n", arr[1]);
	printf("*arr+1 요소 : %d\r\n", *arr+1); 
	printf("1[arr] 요소 : %d\r\n", 1[arr]);
	//arr[1] == *(arr+1) == *(1+arr) == 1[arr]

	return 0;

}