/*
* ���� c���α׷��� p260
* char�� 1���� �迭�� ����� ���ÿ� "Good time" �������� �ʱ�ȭ
* ����� ���� ���
* @date     Wed Mar 29 17:42:39 2017
* @author   ���
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