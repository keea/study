/*
* ���� c���α׷��� p268
* �Է¹��� ���ܾ� �� �ƽ�Ű �ڵ� ���� ���� ū ���� ���
* @date     Thu Mar 30 12:54:45 2017
* @author   ���
*/

#include <stdio.h>

void main() {
	char word[100];

	printf("�ܾ �Է����ּ��� : ");
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