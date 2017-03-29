/*
* 한번에 끝내는 C프로그래밍 200제 56p 94번 문제
* 야구게임
* @date     Fri Mar 24 09:36:34 2017
* @author   희아
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//함수정의
void show(int correct);
int getStrike(int inputNum, int correct);
int getCipher(int num, int cipher);
int getBall(int inputNum, int correct);

void main() {
	srand(time(NULL));

	int correct = rand() % 1000 + 1;

	show(correct);
}

/*
* 게임을 화면에 출력한다.
* @param  inputNum(정답값)
* @return 
* @date   Fri Mar 24 10:13:43 2017
*/
void show(int correct) {
	bool isClear = false;
	for (int i = 10; i > 0; i--) {
		int inputNum; //입력한 값
		printf("%d번의 기회가 남았습니다. 3자리 수를 입력하세요: ", i);
		scanf("%d", &inputNum);

		int nStrike = getStrike(inputNum, correct);
		int nBall = getBall(inputNum, correct);

		printf("%d 스트라이크, %d 볼입니다.\r\n", nStrike, nBall);

		if (nStrike == 3) {
			isClear = true;
			break;
		}	
	}

	printf("\r\n");

	if (isClear) {
		printf("정답은 %d 입니다.\r\n", correct);
		printf("축하합니다. 당신은 정말 천재네요.\r\n");
	}
	else {
		printf("기회를 모두 사용하셨습니다.\r\n");
		printf("정답은 %d 입니다.\r\n", correct);
	}

}

/*
* 볼을 판단하고 볼 갯수를 리턴시킨다.
* @param inputNum(입력값) , correct(정답)
* @return nStrike(볼 갯수)
* @date   Fri Mar 24 14:16:59 2017
*/
int getBall(int inputNum, int correct) {
	int nBall = 0;

	int corr_h = getCipher(correct, 100); //정답의 백의 자리
	int corr_t = getCipher(correct, 10); //정답의 십의 자리
	int corr_o = getCipher(correct, 1); //정답의 일의 자리

	int input_h = getCipher(inputNum, 100); //입력값의 백의자리
	int input_t = getCipher(inputNum, 10); //입력값의 십의자리
	int input_o = getCipher(inputNum, 1); //입력값의 일의자리

	if (input_h == input_t == input_o) {
		nBall++;
	}
	else {

		if (input_h == corr_h || input_h == corr_t || input_h == corr_o) {
			nBall++;
		}

		if (input_t == corr_h || input_t == corr_t || input_t == corr_o) {
			nBall++;
		}

		if (input_o == corr_h || input_o == corr_t || input_o == corr_o) {
			nBall++;
		}
	}


	return nBall;
}

/*
* 스트라이크를 판단하고 스트라이크 갯수를 리턴시킨다.
* @param inputNum(입력값) , correct(정답)
* @return nStrike(스트라이크 갯수)
* @date   Fri Mar 24 10:07:11 2017
*/
int getStrike(int inputNum, int correct) {
	int nStrike = 0;

	if (getCipher(inputNum, 100) == getCipher(correct, 100)) {
		nStrike++;
	}

	if (getCipher(inputNum, 10) == getCipher(correct, 10)) {
		nStrike++;
	}

	if (getCipher(inputNum, 1) == getCipher(correct, 1)) {
		nStrike++;
	}
	

	return nStrike;
}

/*
* 원하는 자릿수의 값을 구한다.
* @param num(숫자), cipher(자릿수 단위)
* @return 자릿수의 값
* @date   Fri Mar 24 10:36:48 2017
*/
int getCipher(int num, int cipher) {
	int tempCipher = num;

	if (cipher == 100) {
		return tempCipher / 100;
	}
	else if (cipher == 10) {
		return (tempCipher % 100) / 10;
	}
	else {
		return tempCipher % 10;
	}

}

