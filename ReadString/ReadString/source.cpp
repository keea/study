/*
* ���� c���α׷��� p262
* scanf �Լ��� �̿��� ���ڿ� �Է�
* @date     Wed Mar 29 18:31:31 2017
* @author   ���
*/

#include<stdio.h>

void main() {
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str); //���ڿ��� �Է� �޾Ƽ� �迭 str�� ����
	printf("�Է� ���� ���ڿ� : %s \n", str);

	printf("���� ���� ���: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\r\n");
}