/*
* 길이가 10인 배열을 선언하고 총 10개의 정수를 입력받는다.
* 입력 받은 숫자가 홀수이면 배열의 앞에서부터 채워나가고
* 짝수이면 뒤에서부터 채워나간다.
* @date     Fri Apr 21 16:44:16 2017
* @author   keea
*/
#include <stdio.h>

void SaveSpace(int arr[], int num);

void main() {
	int arr[10];

	printf("총 10개의 숫자 입력\r\n");

	int i = 0;
	int inputnum;

	while (i < 10)
	{
		printf("입력 : ");

		scanf("%d", &inputnum);
		SaveSpace(arr, inputnum);
		i = i + 1;
	}

	int count = 0;
	printf("배열 요소 출력 : ");
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