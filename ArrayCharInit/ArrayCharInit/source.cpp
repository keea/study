/*
* 열혈 c프로그래밍 p260
* char형 1차원 배열을 선언과 동시에 "Good time" 내용으로 초기화
* 저장된 내용 출력
* @date     Wed Mar 29 17:42:39 2017
* @author   희아
*/

#include <stdio.h>

void main() {
	char c[] = {'G','o','o','d',' ','t','i','m','e'};

	int cLen = sizeof(c) / sizeof(char);

	for (int i = 0; i < cLen; i++) {
		printf("%c", c[i]);
	}
	printf("\r\n");
}