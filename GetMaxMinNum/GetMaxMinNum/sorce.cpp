/*
* ���� c���α׷��� p260
* ����ڷκ��� 5���� ������ �Է¹޾� �ִ�, �ּڰ�, ������ ����.
* �� �Է��� �Ϸ��� ���¿��� ���.
* @date     Wed Mar 29 17:16:48 2017
* @author   ���
*/

#include<stdio.h>


void main() {
	int num; 
	int arr[5];

	for (int i = 0; i < 5; i++) {
		printf("%i��° ���� �Է����ּ��� : ", i+1);
		scanf("%d", &num);
		arr[i] = num;
	}

	int maxNum = 0; //�ִ�
	int minNum = 999; //�ּڰ�
	int sum = 0; //��
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
		if (maxNum < arr[i]) {
			maxNum = arr[i];
		}
		if (minNum > arr[i]) {
			minNum = arr[i];
		}
	}

	printf("�ִ� : %d\r\n", maxNum);
	printf("�ּڰ� : %d\r\n", minNum);
	printf("���� : %d\r\n", sum);
}
