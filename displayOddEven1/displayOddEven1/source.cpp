/*
* ���̰� 10�� �迭�� �����ϰ� �� 10���� ������ �Է¹޴´�.
* �Է� ���� ���ڰ� Ȧ���̸� �迭�� �տ������� ä��������
* ¦���̸� �ڿ������� ä��������.
* @date     Fri Apr 21 16:44:16 2017
* @author   keea
*/
#include <stdio.h>

void SaveSpace(int arr[], int num);

void main() {
	int arr[10];

	printf("�� 10���� ���� �Է�\r\n");

	int i = 0;
	int inputnum;

	while (i < 10)
	{
		printf("�Է� : ");

		scanf("%d", &inputnum);
		SaveSpace(arr, inputnum);
		i = i + 1;
	}

	int count = 0;
	printf("�迭 ��� ��� : ");
	while (count < 10)
	{
		printf("%d ", arr[count]);
		count = count + 1;
	}

}

void SaveSpace(int arr[], int num) {

	static int oddCunt = 0;
	static int evenCunt = 9;

	if (num % 2 == 0) {
		arr[evenCunt] = num;
		evenCunt = evenCunt - 1;
	}
	else {
		arr[oddCunt] = num;
		oddCunt = oddCunt + 1;
	}
}