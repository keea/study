/*
* Ȧ�� ¦�� ��� ���α׷�.
* p328 ����1
* @date     Fri Apr 21 14:49:11 2017
* @author   keea
*/

#include<stdio.h>

void DisplayOdd(int* arr);
void DisplayEven(int* arr);

void main() {
	printf("�� 10���� ���� �Է�\r\n");
	int saveNum[10];
	
	int i = 0;
	while (i<10)
	{
		printf("�Է�:");
		scanf("%i", &saveNum[i]);
		i = i + 1;
	}

	DisplayOdd(saveNum);
	DisplayEven(saveNum);
}

/*
* Ȧ�� ���� ���
* @param  {int*} arr
* @return 
* @date   Fri Apr 21 14:53:36 2017
*/
void DisplayOdd(int* arr) {
	printf("Ȧ�� ��� : ");
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
* ¦�� ���� ���
* @param  {int*} arr
* @return
* @date   Fri Apr 21 14:55:31 2017
*/
void DisplayEven(int* arr) {
	printf("\r\n¦�� ��� : ");
	int i = 0;
	while (i < 10)
	{
		if (*(arr + i) % 2 == 0) {
			printf("%i ", *(arr + i));
		}
		i = i + 1;
	}
}