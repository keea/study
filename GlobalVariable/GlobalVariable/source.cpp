/*
* 열혈 C 프로그래밍 p230
* 전역변수의 선언방법과 특징
* @date     Tue Mar 28 11:05:48 2017
* @author   희아
*/

#include<stdio.h>

int num; //전역변수는 기본 0으로 초기화됨

void Add(int val);

void main() {
	printf("num : %d \r\n", num);
	Add(3);
	printf("num : %d \r\n", num);
	num++; //전역변수 num의 값 1증가
	printf("num : %d \r\n", num);
}

void Add(int val) {
	num += val; //전역변수 num의 값 val만큼 증가
}