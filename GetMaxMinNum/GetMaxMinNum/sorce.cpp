/*
* 열혈 c프로그래밍 p260
* 사용자로부터 5개의 정수를 입력받아 최댓값, 최솟값, 총합을 구함.
* 단 입력이 완료한 상태에서 계산.
* @date     Wed Mar 29 17:16:48 2017
* @author   희아
*/

#include<stdio.h>


void main() {
	int num; 
	int arr[5];

	for (int i = 0; i < 5; i++) {
		printf("%i번째 값을 입력해주세요 : ", i+1);
		scanf("%d", &num);
		arr[i] = num;
	}

	int maxNum = 0; //최댓값
	int minNum = 999; //최솟값
	int sum = 0; //합
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
		if (maxNum < arr[i]) {
			maxNum = arr[i];
		}
		if (minNum > arr[i]) {
			minNum = arr[i];
		}
	}

	printf("최댓값 : %d\r\n", maxNum);
	printf("최솟값 : %d\r\n", minNum);
	printf("총합 : %d\r\n", sum);
}
