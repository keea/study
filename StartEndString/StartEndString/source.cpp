/*
* ���� C���α׷��� p266
* ���ڿ��� �߰��� �� ���ڸ� ����
* @date     Thu Mar 30 11:40:30 2017
* @author   ���
*/

#include <stdio.h>

void main() {
	char str[50] = "I like C programming";
	printf("string : %s \r\n", str);

	str[8] = '\0';
	printf("string : %s \r\n", str);

	str[6] = '\0';
	printf("string : %s \r\n", str);

	str[1] = '\0';
	printf("string : %s \r\n", str);
}