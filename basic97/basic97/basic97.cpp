/*
* �ѹ��� ������ C���α׷��� 200�� 58p 97������
* ������ �� �ڸ����� ����ϴ� ����Լ� ����
* @date     Fri Mar 24 19:38:32 2017
* @author   ���
*/
#include <stdio.h>

void show_digit(int x);

void main() {
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);
	show_digit(num);
	printf("\r\n");
}

/*
* ������ �� �ڸ����� ����ϴ� ����Լ�
* @param
* @return
* @date   Mon Mar 27 09:55:34 2017
*/
void show_digit(int x) {
	static int nanugi = 10000;
	nanugi /= 10;
	//printf("%d�� %d�� ������. : " ,x, nanugi);
	if (x < 10) {
		printf("%d", x);

	}
	else {
		printf("%d ", x / nanugi);
		//printf("�ѱ�� ���� : %d \r\n", x%nanugi);
		show_digit(x%nanugi);
	}
}