/*
* 열혈 C프로그래밍 p268
* 영단어를 입력받아 영단어의 길이를 출력한다.
* @date     Thu Mar 30 11:50:43 2017
* @author   희아
*/

#include <stdio.h>

void main() {
	char word[100];
	printf("단어를 입력해주세요 : ");
	scanf("%s", word);
	int size = sizeof(word) / sizeof(char);

	for (int i = 0; i < size; i++) {
		if (word[i] == '\0') {
			printf("%d\r\n", i);
			break;
		}
	}
}