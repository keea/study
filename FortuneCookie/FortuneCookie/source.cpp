/*
* �Լ��� ���ڿ� ����
* @date     Mon Apr 10 15:55:37 2017
* @author   ���
*/

#include <stdio.h>

void fortune_cookie(char msg[]);

void main() {
	char quote[] = "Cookies make you fat";
	printf("quote ���ڿ��� %p������ ����Ǿ� �ֽ��ϴ�.\r\n", quote);
	fortune_cookie(quote);
}

void fortune_cookie(char msg[]) {

	printf("�޽����� ������ �����ϴ�: %s\r\n", msg);
	printf("�޽����� %li����Ʈ ũ���Դϴ�.\r\n", sizeof(msg));
}
