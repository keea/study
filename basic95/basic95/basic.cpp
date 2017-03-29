/* 
* �ѹ��� ������ C���α׷��� 200��
* �ڵ��� ���� ����
* @date     Fri Mar 24 18:08:25 2017
* @author   ���
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�Լ� ����
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
* ���۸޽����� ����.
* @param 
* @return
* @date   Fri Mar 24 18:16:43 2017
*/
void starMsg() {
	printf("��⸦ �����մϴ�. \r\n");
	init();
}

/*
* �ڵ��������� �ݺ��Ѵ�.
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
* 1~10������ �������� ��ȯ�Ѵ�.
* @param
* @return 1~10���� ������
* @date   Fri Mar 24 18:41:34 2017
*/
int randNum() {
	return rand() % 2 + 1;
}

/*
*
* @param disCar1(1���ڵ����Ÿ�), disCar2(2���ڵ����Ÿ�)
* @return
* @date   Fri Mar 24 18:23:00 2017
*/
void isFinsh(int disCar1, int disCar2) {
	int finshLine = 50;
	if (disCar1 > finshLine || disCar2 > finshLine) {
		if (disCar1 > disCar2) {
			printf("\r\n1�� �ڵ����� �¸��߽��ϴ�.\r\n");
		}
		else if (disCar2 > disCar1) {
			printf("\r\n2�� �ڵ����� �¸��߽��ϴ�.\r\n");
		}
		else {
			printf("\r\n���º��Դϴ�.\r\n");
		}
		exit(0);
	}
}

/*
* �ڵ����� �޸� ����Ȳ ���
* @param car_number(����ȣ), distance(�Ÿ�)
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
* �޸��Ÿ��� ���� ǥ��
* @param distance(�Ÿ�)
* @return
* @date   Fri Mar 24 18:21:01 2017
*/
void dispCarRun(int distance) {
	for (int i = 0; i < distance; i++) {
		printf("*");
	}
	printf("\r\n");
}