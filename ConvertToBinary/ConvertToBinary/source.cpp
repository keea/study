/*
* 10������ �Է¹��� �� 2������ ���
* @date     Fri Apr 21 15:19:35 2017
* @author   keea
*/

#include <stdio.h>


void main() {
	int num;
	printf("10���� ������ �Է� : ");
	scanf("%i", &num);
	int count = 0;
	char binary[100];
	while (num > 0)
	{
		binary[count] = num % 2;
		num = num / 2;
		count = count + 1;	
	}

	int i = count - 1;
	while (0 <= i)
	{
		printf("%i", binary[i]);
		i = i - 1;
	}
}


