/*
* 열혈 c프로그래밍 p262
* 널 문자 삽입 확인
* @date     Wed Mar 29 18:01:09 2017
* @author   희아
*/

#include <stdio.h>

void main() {
	char str[] = "Good morning!";
	printf("배열 str의 크기 : %d \r\n", sizeof(str));
	printf("널 문자 문자형 출력 : %c \r\n", str[13]);
	printf("널 문자 정수형 출력 : %d \r\n", str[13]);
}