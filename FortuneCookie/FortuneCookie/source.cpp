/*
* 함수에 문자열 전달
* @date     Mon Apr 10 15:55:37 2017
* @author   희아
*/

#include <stdio.h>

void fortune_cookie(char msg[]);

void main() {
	char quote[] = "Cookies make you fat";
	printf("quote 문자열은 %p번지에 저장되어 있습니다.\r\n", quote);
	fortune_cookie(quote);
}

void fortune_cookie(char msg[]) {

	printf("메시지는 다음과 같습니다: %s\r\n", msg);
	printf("메시지는 %li바이트 크기입니다.\r\n", sizeof(msg));
}
