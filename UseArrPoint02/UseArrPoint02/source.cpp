/*
* ���� C���α׷��� p300 ����2
* ������ ������ ����� ���� �����Ű�� �ʰ� �迭��ҿ� ����.
* @date     Thu Apr  6 11:12:15 2017
* @author   ���
*/
#include <stdio.h>

void main() {
	//���̰� 5�� int�� �迭 arr����
	//1,2,3,4,5�� �ʱ�ȭ
	int arr[] = { 1,2,3,4,5 };

	//�迭�� ù��° ��Ҹ� ����Ű�� ������ ���� ptr����
	int * ptr = arr;


	//������ ���� ptr�� ����� ���� �����Ű�� �ʰ�, ptr�� ������� ���������� �Ͽ�,
	//�� ����� ��ȯ�Ǵ� �ּ� ���� ���ؼ� ��� �迭��ҿ� �����Ͽ� ���� 2�� ����
	int length = sizeof(arr) / sizeof(int);
	for (int i = 0; i < length; i++) {
		*(ptr + i) += 2;
	}


	for (int j = 0; j < length; j++) {
		printf("%d ", arr[j]);
	}
}