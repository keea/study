/*
* ���� C���α׷��� p300 ����3
* �迭�� ����� ���� ������ �ݴ�� ��µǵ��� ����. �� ������ ���.
* @date     Thu Apr  6 12:03:15 2017
* @author   ���
*/

#include <stdio.h>

void main() {
	int arr[] = { 1,2,3,4,5,6 };

	int length = sizeof(arr) / sizeof(int);

	int * firstNum = arr; //�迭�� ù��° ���� �ּҸ� ����
	int * lastNum = &arr[length - 1]; //�迭�� ������ ���� �ּҸ� ����

	for (int i = 0; i < length / 2; i++) { //�յڷ� �ٲٴ� ���� ������ �ϸ� �ȴ�.

		int temp = *(firstNum + i); // �ӽ÷� �� ����
		*(firstNum + i) = *(lastNum - i); 
		*(lastNum-i) = temp;
	}

	for (int j = 0; j < length; j++) {
		printf("%d ", arr[j]);
	}
}