/*
* 열혈 c프로그래밍 p268
* 입력받은 영단어 중 아스키 코드 값이 가장 큰 문자 출력
* @date     Thu Mar 30 12:54:45 2017
* @author   희아
*/

#include <stdio.h>

void main() {
	char word[100];

	printf("단어를 입력해주세요 : ");
	scanf("%s", word);

	int len;

	for (int i = 0; i < 100; i++) {
		if (word[i] == '\0')
			len = i-1;
	}

	int maxNum = 0;
	for (int j = 0; j < len; j++) {
		if (maxNum < word[j])
			maxNum = word[j];
	}

	printf("%c\r\n", maxNum);
}