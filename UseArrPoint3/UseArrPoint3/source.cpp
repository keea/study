/*
* �ѹ��� ������ C���α׷��� 200��
* ������ ������ ����� ���� ������Ѱ��鼭 �迭��ҿ� �����Ͽ� �迭�� ����� ��� ������ ��.
* @date     Thu Apr  6 11:51:46 2017
* @author   ���
*/

#include <stdio.h>

void main() {
	//���̰� 5�� int�� �迭 arr����
	//1,2,3,4,5�� �ʱ�ȭ
	int arr[] = { 1,2,3,4,5 };

	//�� �迭�� ������ ��Ҹ� ����Ű�� ������ ���� ptr ����
	int length = sizeof(arr) / sizeof(int); //�迭�� ������ ���ϱ�
	int * ptr = &arr[length - 1];

	int tempSum = 0; //�迭�� ����� ������ ��

	//ptr�� ����� ���� ���ҽ�Ű�� ������ ������ �������
	//��� �迭��ҿ� ����, �迭�� ����� ��� ������ ����.
	for (int i = 0; i < length; i++) {
		tempSum += *(ptr--);
	}

	//�� ����� ���
	printf("%d", tempSum);

}