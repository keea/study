/*
* ���� c���α׷��� p256
* �迭�� �����ϰ� �迭��ҿ� ����
* @date     Wed Mar 29 16:29:04 2017
* @author   ���
*/

#include<stdio.h>

void main() {
	int arr[5]; //���̰� 5�� int�� 1���� �迭 arr
	int sum = 0, i;

	arr[0] = 10; //�迭�� ��ġ ������ ����ϴ� �ε��� ���� 0�������� �����Ѵ�.
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}

	printf("�迭��ҿ� ����� ���� ��: %d \r\n", sum);
}