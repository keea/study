#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>

#define MAX_NUM 504

struct Number
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
};

enum STATE { STRIKE, BALL, OUT};

//숫자제거
void RemoveNumber(Number list[][MAX_NUM], int* count, int n1, int n2, int n3, int * state) {
	int frountCount = MAX_NUM - (*count); 
	for (int i = frountCount; i < MAX_NUM; i++) {
		Number temp = (*list)[i];

		bool same = false;

		if (state[STRIKE] ==  1) {//1스트라이크인 경우
			if (state[BALL] == 0) {
				same = ((n1 == temp.num1) && (n2 != temp.num2) && (n3 != temp.num3))
					|| ((n2 == temp.num2) && (n1 != temp.num1) && (n3 != temp.num3))
					|| ((n3 == temp.num3) && (n1 != temp.num1) && (n2 != temp.num2));
			}
			else {
				if (state[BALL] == 1) {
					same = ((n1 == temp.num1) && (n2 == temp.num3))
						|| ((n1 == temp.num1) && (n3 == temp.num2))
						|| ((n2 == temp.num2) && (n1 == temp.num3))
						|| ((n2 == temp.num2) && (n3 == temp.num1))
						|| ((n3 == temp.num3) && (n1 == temp.num2))
						|| ((n3 == temp.num3) && (n2 == temp.num1));
				}
				else { //2볼일 경우
					same = ((n1 == temp.num1) && (n2 == temp.num3) && (n3 == temp.num2))
						|| ((n2 == temp.num2) && (n1 == temp.num3) && (n3 == temp.num2))
						|| ((n3 == temp.num3) && (n1 == temp.num2) && (n2 == temp.num1));
				}
			}
		}
		else if (state[STRIKE] == 2) { //2스트라이크인 경우
			same = ((n1 == temp.num1) && (n2 == temp.num2) && (n3 != temp.num3)) 
				|| ((n1 == temp.num1) && (n3 == temp.num3) && (n2 != temp.num2)) 
				|| ((n2 == temp.num2) && (n3 == temp.num3) && (n1 != temp.num1));
		}
		else if (state[BALL] == 3) { // 3볼 경우
			same = ((n1 == temp.num2) && (n2 == temp.num3) && (n3 == temp.num1)) || ((n1 == temp.num3) && (n2 == temp.num1) && (n3 == temp.num2));
		}
		else {
			same = (n1 == temp.num2) || (n1 == temp.num3) || (n2 == temp.num1) || (n2 == temp.num3) || (n3 == temp.num1) || (n3 == temp.num2);

			if (state[OUT] != 0) {
				same = same || (n1 == temp.num1) || (n2 == temp.num2) || (n3 == temp.num3);
				same = !same;
			}
		}

		if (!same || ((temp.num1 == n1) && (temp.num2 == n2) && (temp.num3 == n3))) {
			Number frountNumber = (*list)[frountCount++];
			(*list)[i] = frountNumber;
			(*count) -= 1;
		}
	}	
}

int main()
{
	srand(time(NULL));
	int guess[3] = { 0, };
	int check[6] = {};
	int state[3] = { 0, }; //0, strike, ball, out

	Number enableList[MAX_NUM];

	int count = 0;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			for (int k = 1; k <= 9; k++) {
				if (i != j && i != k && j != k) {
					Number n = { i, j, k };
					enableList[count++] = n;
				}
			}
		}
	}


	while (true)
	{
		if (count == 0) {
			printf("숫자를 찾을 수 없습니다.");
			break;
		}

		int randNum = (rand() % count) + (MAX_NUM - count);

		guess[0] = enableList[randNum].num1;
		guess[1] = enableList[randNum].num2;
		guess[2] = enableList[randNum].num3;

		printf("%d %d %d : ", guess[STRIKE], guess[BALL], guess[OUT]);

		printf("스트라이크, ball, out 개수를 입력하세요. ex(1,1,0)\r\n");
		scanf_s(" %d,%d,%d", &state[STRIKE], &state[BALL], &state[OUT]);
		printf("%d스트라이크 %d볼 %d아웃\r\n", state[STRIKE], state[BALL], state[OUT]);

		if (state[STRIKE] + state[BALL] > 3 || ((state[STRIKE] != 0 && state[BALL] != 0) && (state[OUT] != 0))) {
			printf("잘못 입력하셨습니다.\r\n");
			continue;
		}else if (state[STRIKE] == 3)
			break;
		else {
			RemoveNumber(&enableList, &count, guess[0], guess[1], guess[2], state);
		}
	}
}

