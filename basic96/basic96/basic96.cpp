/*
* �ѹ��� ������ C���α׷��� 200�� 58p 96��
* �ܹ��� ���� �޴�
* @date     Fri Mar 24 18:49:13 2017
* @author   ���
*/

#include <stdio.h>
#include <stdlib.h>
void print_menu();
bool check_menu(int menu);

void main() {
	print_menu();
}

void print_menu() {
	int menu;

	printf("1. ġ����� ��Ʈ\r\n");
	printf("2. �Ұ����� ��Ʈ\r\n");
	printf("3. ġŲ���� ��Ʈ\r\n");
	printf("4. ����\r\n");

	printf("���ϴ� �޴��� �����Ͻÿ�: ");
	scanf("%d", &menu);
	if (check_menu(menu)) {
		if (menu == 4) {
			exit(0);
		}
		else {
			printf("%d �� �޴��� ���õǾ����ϴ�.\r\n", menu);
		}
	}
	else {
		printf("�߸��� �޴��� �����ϼ̽��ϴ�.\r\n");
	}
}

bool check_menu(int menu) {
	if (menu < 5)
		return true;
	else
		return false;
}
