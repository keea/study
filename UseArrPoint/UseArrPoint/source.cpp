#include <stdio.h>
/*
* ���� C���α׷��� p299 ����1
* ������ ������ ����� ���� ������Ѱ��鼭 �迭��ҿ� ����.
* @date     Wed Apr  5 18:52:33 2017
* @author   ���
*/
void main() {
	//���̰� 5�� int�� �迭 arr����
	//1,2,3,4,5�� �ʱ�ȭ
	int arr[] = {1,2,3,4,5};

	//�迭�� ù��° ��Ҹ� ����Ű�� ������ ���� ptr����
	int * ptr = arr;

	//������ ���� ptr�� ����� ���� ������Ű�� ������ ������ ������� �迭��ҿ� �����ϸ鼭
	//��� �迭����� ���� 2�� ����
	int length = sizeof(arr) / sizeof(int);
	for (int i = 0; i < length; i++) {
		*(ptr + i) += 2;
	}

	for (int j = 0; j < length; j++) {
		printf("%d ", arr[j]);
	}
}