/*
* ���� C���α׷��� p268
* ����ڷκ��� �Է¹��� ���ܾ �������� ���
* @date     Thu Mar 30 12:22:17 2017
* @author   ���
*/

#include <stdio.h>

void main() {
	char word[100];

	printf("���ܾ �Է��ϼ��� : ");
	scanf("%s", word);

	int len = 0;

	//�Է��� ���ܾ� ������ ���ϱ�
	for (int i = 0; i < 100; i++) {
		if (word[i] == '\0') {
			len = i; 
			break;
		}
	}

	int size = len - 1;
	//���ܾ� �������� �迭�� �����ϱ�
	for (int j = 0; j < size /2; j++) {
		char temp = word[j];
		word[j] = word[size - j];
		word[len - j] = temp;
	}

	//�迭�� ����� �� ���
	for (int k = 0; k < len; k++) {
		printf("%c", word[k]);
	}

	printf("\r\n");
}