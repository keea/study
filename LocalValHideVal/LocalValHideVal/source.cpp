/*
* 열혈 C프로그래밍 p228
* main 함수내, if문 내부에 동일한 이름의 변수가 있을 경우
* @date     Tue Mar 28 10:52:17 2017
* @author   희아
*/

#include <stdio.h>
void main() {
	int num = 1;

	if (num == 1) {
		//int num = 7; //이 행을 주석처리 하고 실행결과 확인하자!
		num += 10; 
		printf("if문 내 지역변수 num : %d \r\n", num);
	}
	printf("main 함수 내 지역변수 num: %d \r\n", num);
 }