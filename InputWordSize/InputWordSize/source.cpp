/*
* ���� C���α׷��� p268
* ���ܾ �Է¹޾� ���ܾ��� ���̸� ����Ѵ�.
* @date     Thu Mar 30 11:50:43 2017
* @author   ���
*/

#include <stdio.h>

void main() {
	char word[100];
	printf("�ܾ �Է����ּ��� : ");
	scanf("%s", word);
	int size = sizeof(word) / sizeof(char);

	for (int i = 0; i < size; i++) {
		if (word[i] == '\0') {
			printf("%d\r\n", i);
			break;
		}
	}
}