/*
* 한번에 끝내는 C프로그래밍 200제 55p 93번 문제
* 정수 n을 입력받고, 1~n까지 숫자를 출력하고, 369가 들어갈 경우 개수만큼 * 출력
* @date     Thu Mar 23 19:34:08 2017
* @author   강희아
*/

#include <stdio.h>

//함수 정의
bool checkSSN(int num);
void printSSN(int num);
int isAddStar(int num, int cStar);
int checkChange(int checkNum, int space);
int countStar(int num);

void main() {
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		
		printSSN(i);

		if (i % 5 == 0) {
			printf("\r\n");
		}
	}
	printf("\r\n");
}


/*
* 369의 형식을 출력한다.
* @param i(정수)
* @return
* @date   Thu Mar 23 19:45:02 2017
*/
void printSSN(int num) {
	int showStar = countStar(num);

	if (showStar == 0) {
		printf("%d\t", num);
	}
	else {
		for (int i = 0; i < showStar; i++) {
			printf("*");
		}
		printf("\t");
	}
}


/*
* 별의 갯수를 세서 반환한다.
* @param num(비교관)
* @return showStar(보여질 별의 갯수)
* @date   Thu Mar 23 20:35:39 2017
*/

int countStar(int num) {
	int checkNum = num;
	int showStar = 0;

	if (checkNum > 1000) {
		showStar = isAddStar(checkNum/1000, showStar);
		checkNum = checkChange(checkNum, 1000);
	}

	if (checkNum > 100) {
		showStar = isAddStar(checkNum / 100, showStar);
		checkNum = checkChange(checkNum, 100);
	}

	if (checkNum > 10) {
		showStar = isAddStar(checkNum / 10, showStar);
		checkNum = checkChange(checkNum, 10);
	}

	showStar = isAddStar(checkNum, showStar);

	return showStar;
}

/*
* 해당 자리의 값을 비교하고 다음에 비교할 단위의 값을 반환한다.
* @param checkNum(비교값), space(비교할 자리), showStar(보여줄 별의 갯수)
* @return 
* @date   Thu Mar 23 20:29:16 2017
*/
int checkChange(int checkNum, int space) {
	int num = checkNum;
	int t = checkNum / space;

	
	num %= space;

	return num;
}

/*
* 별을 추가할지 안할지 결정한다.
* @param num(판단값), cStar(기존별의 갯수)
* @return star(보여줄 별의 갯수)
* @date   Thu Mar 23 20:15:31 2017
*/
int isAddStar(int num, int cStar) {
	int star = cStar;
	if (checkSSN(num)) {
		star++;
	}
	return star;
}

/*
* 3,6,9 인지 비교한다.
* @param num(비교할 정수)
* @return 1(true) 0(false)
* @date   Thu Mar 23 19:46:22 2017
*/
bool checkSSN(int num) {
	if (num == 3 || num == 6 || num == 9)
		return true;
	else
		return false;
}

