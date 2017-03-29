/*
* 열혈 c프로그래밍 p262
* scanf 함수를 이용한 문자열 입력
* @date     Wed Mar 29 18:31:31 2017
* @author   희아
*/

#include<stdio.h>

void main() {
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str); //문자열을 입력 받아서 배열 str에 저장
	printf("입력 받은 문자열 : %s \n", str);

	printf("문자 단위 출력: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\r\n");
}