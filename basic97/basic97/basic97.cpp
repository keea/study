/*
* 한번에 끝내는 C프로그래밍 200제 58p 97번문제
* 정수의 각 자릿수를 출력하는 재귀함수 구현
* @date     Fri Mar 24 19:38:32 2017
* @author   희아
*/
#include <stdio.h>

void show_digit(int x);

void main() {
	int num;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
	show_digit(num);
	printf("\r\n");
}

/*
* 정수의 각 자릿수를 출력하는 재귀함수
* @param
* @return
* @date   Mon Mar 27 09:55:34 2017
*/
void show_digit(int x) {
	static int nanugi = 10000;
	nanugi /= 10;
	//printf("%d에 %d를 나누다. : " ,x, nanugi);
	if (x < 10) {
		printf("%d", x);

	}
	else {
		printf("%d ", x / nanugi);
		//printf("넘기는 값은 : %d \r\n", x%nanugi);
		show_digit(x%nanugi);
	}
}