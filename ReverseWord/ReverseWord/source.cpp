/*
* 열혈 C프로그래밍 p268
* 사용자로부터 입력받은 영단어를 역순으로 출력
* @date     Thu Mar 30 12:22:17 2017
* @author   희아
*/

#include <stdio.h>

void main() {
	char word[100];

	printf("영단어를 입력하세요 : ");
	scanf("%s", word);

	int len = 0;

	//입력한 영단어 사이즈 구하기
	for (int i = 0; i < 100; i++) {
		if (word[i] == '\0') {
			len = i; 
			break;
		}
	}

	int size = len - 1;
	//영단어 역순으로 배열에 저장하기
	for (int j = 0; j < size /2; j++) {
		char temp = word[j];
		word[j] = word[size - j];
		word[len - j] = temp;
	}

	//배열에 저장된 값 출력
	for (int k = 0; k < len; k++) {
		printf("%c", word[k]);
	}

	printf("\r\n");
}