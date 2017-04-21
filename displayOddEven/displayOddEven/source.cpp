/*
* 홀수 짝수 출력 프로그램.
* p328 도전1
* @date     Fri Apr 21 14:49:11 2017
* @author   keea
*/

#include<stdio.h>

void DisplayOdd(int* arr);
void DisplayEven(int* arr);

void main() {
	printf("총 10개의 숫자 입력\r\n");
	int saveNum[10];
	
	int i = 0;
	while (i<10)
	{
		printf("입력:");
		scanf("%i", &saveNum[i]);
		i = i + 1;
	}

	DisplayOdd(saveNum);
	DisplayEven(saveNum);
}

/*
* 홀수 값을 출력
* @param  {int*} arr
* @return 
* @date   Fri Apr 21 14:53:36 2017
*/
void DisplayOdd(int* arr) {
	printf("홀수 출력 : ");
	int i = 0;
	while (i < 10)
	{
		if (*(arr + i) % 2 == 1) {
			printf("%i ", *(arr + i));
		}
		i = i + 1;
	}
}

/*
* 짝수 값을 출력
* @param  {int*} arr
* @return
* @date   Fri Apr 21 14:55:31 2017
*/
void DisplayEven(int* arr) {
	printf("\r\n짝수 출력 : ");
	int i = 0;
	while (i < 10)
	{
		if (*(arr + i) % 2 == 0) {
			printf("%i ", *(arr + i));
		}
		i = i + 1;
	}
}