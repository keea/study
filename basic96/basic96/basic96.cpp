/*
* 한번에 끝내는 C프로그래밍 200제 58p 96번
* 햄버거 가게 메뉴
* @date     Fri Mar 24 18:49:13 2017
* @author   희아
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

	printf("1. 치즈버거 세트\r\n");
	printf("2. 불고기버거 세트\r\n");
	printf("3. 치킨버거 세트\r\n");
	printf("4. 종료\r\n");

	printf("원하는 메뉴를 선택하시오: ");
	scanf("%d", &menu);
	if (check_menu(menu)) {
		if (menu == 4) {
			exit(0);
		}
		else {
			printf("%d 번 메뉴가 선택되었습니다.\r\n", menu);
		}
	}
	else {
		printf("잘못된 메뉴를 선택하셨습니다.\r\n");
	}
}

bool check_menu(int menu) {
	if (menu < 5)
		return true;
	else
		return false;
}
