/* 
* 한번에 끝내는 C프로그래밍 200제
* 자동차 경주 게임
* @date     Fri Mar 24 18:08:25 2017
* @author   희아
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//함수 정의
void starMsg();
void init();
void isFinsh(int disCar1, int disCar2);
void disp_car_distance(int car_number, int distance);
void dispCarRun(int distance);
int randNum();

void main() {
	srand(time(NULL));
	starMsg();
}

/*
* 시작메시지를 띄운다.
* @param 
* @return
* @date   Fri Mar 24 18:16:43 2017
*/
void starMsg() {
	printf("경기를 시작합니다. \r\n");
	init();
}

/*
* 자동차게임을 반복한다.
* @param
* @return
* @date   Fri Mar 24 18:17:06 2017
*/
void init() {
	static int disCar1 = 0;
	static int disCar2 = 0;

	char cont = 0;
	while (1)
	{
		scanf("%c", &cont);
		if (cont == 10) {
			disCar1 += randNum();
			disCar2 += randNum();

			disp_car_distance(1, disCar1);
			disp_car_distance(2, disCar2);

			printf("\r\n========================================\r\n");

			isFinsh(disCar1, disCar2);
		}
	}
}

/*
* 1~10까지의 랜덤값을 반환한다.
* @param
* @return 1~10까지 랜덤값
* @date   Fri Mar 24 18:41:34 2017
*/
int randNum() {
	return rand() % 2 + 1;
}

/*
*
* @param disCar1(1번자동차거리), disCar2(2번자동차거리)
* @return
* @date   Fri Mar 24 18:23:00 2017
*/
void isFinsh(int disCar1, int disCar2) {
	int finshLine = 50;
	if (disCar1 > finshLine || disCar2 > finshLine) {
		if (disCar1 > disCar2) {
			printf("\r\n1번 자동차가 승리했습니다.\r\n");
		}
		else if (disCar2 > disCar1) {
			printf("\r\n2번 자동차가 승리했습니다.\r\n");
		}
		else {
			printf("\r\n무승부입니다.\r\n");
		}
		exit(0);
	}
}

/*
* 자동차가 달린 경기상황 출력
* @param car_number(차번호), distance(거리)
* @return
* @date   Fri Mar 24 18:12:26 2017
*/
void disp_car_distance(int car_number, int distance) {
	printf("CAR #%d : ",car_number);
	if (car_number == 1) {
		dispCarRun(distance);
	}
	else {
		dispCarRun(distance);
	}
}

/*
* 달린거리를 별로 표현
* @param distance(거리)
* @return
* @date   Fri Mar 24 18:21:01 2017
*/
void dispCarRun(int distance) {
	for (int i = 0; i < distance; i++) {
		printf("*");
	}
	printf("\r\n");
}