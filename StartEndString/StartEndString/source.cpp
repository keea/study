/*
* 열혈 C프로그래밍 p266
* 문자열의 중간에 널 문자를 삽입
* @date     Thu Mar 30 11:40:30 2017
* @author   희아
*/

#include <stdio.h>

void main() {
	char str[50] = "I like C programming";
	printf("string : %s \r\n", str);

	str[8] = '\0';
	printf("string : %s \r\n", str);

	str[6] = '\0';
	printf("string : %s \r\n", str);

	str[1] = '\0';
	printf("string : %s \r\n", str);
}