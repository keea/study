/*
* 시저암호 구현
* @date     Thu Apr  6 13:59:28 2017
* @author   희아
*/


/*
* 1. 글자를 입력받는다.
* 2. 영어인지 아닌지 체크 한다. 아닐경우 종료.
* 3. 영어일 경우 알파벳을 오른쪽 3칸씩 이동
* 4. 알파벳의 범위(z)가 넘을 경우 a부터 시작해서 남은 수 만큼 이동.
* 5. 출력
*/


#include <stdio.h>
#include <stdlib.h>  //exit 사용시
#include <conio.h>   //getch 사용시

//함수 선언
bool CheckEng(char word[]);
void AlpaToCeasar(char word[]);
void Init();
void ControlMenu(int menu);
void InputMakeCeasar();
void CeaserToAlpa(char word[]);
void InputMakeWord();
bool CheckEng(char word);

void main() {
	Init();
}

void Init() {
	int menu;
	do
	{
		printf("1. 암호문 만들기\r\n");
		printf("2. 암호문 해석하기\r\n");
		printf("0. 종료하기\r\n");
		printf("실행하실 메뉴를 선택해주세요 : ");
		menu = getch();
		printf("%c\r\n", menu);
		ControlMenu(menu);

	} while (menu != 0);
}



/*
* 메뉴선택값에 따라 사용할 함수 구별
* @param  menu 메뉴선택값
* @return
* @date   Thu Apr  6 18:03:28 2017
*/
void ControlMenu(int menu) {
	switch (menu)
	{
	case '1':
		InputMakeCeasar();
		break;
	case '2':
		InputMakeWord();
		break;
	case '0':
		exit(0);
		break;
	default:
		break;
	}
}

/*
* 시저암호 만들기 실행
* @param
* @return
* @date   Thu Apr  6 18:09:43 2017
*/
void InputMakeCeasar() {

	char word[100];
	
	printf("\r\n암호로 만들 글자를 입력하세요.(영어만 100자 이하) : ");

	fgets(word, sizeof(word), stdin);

	if (CheckEng(word)) {
		AlpaToCeasar(word);
	}
	else {
		printf("사용하실 수 없는 문자가 있습니다.\r\n\r\n");
	}
}


/*
* 암호해석하기
* @param  
* @return
* @date   Fri Apr  7 10:28:40 2017
*/
void InputMakeWord() {

	char word[100];

	printf("\r\n해석할 암호를 입력하세요.(영어만 100자 이하) : ");

	fgets(word, sizeof(word), stdin);

	if (CheckEng(word)) {
		CeaserToAlpa(word);
	}
	else {
		printf("사용하실 수 없는 문자가 있습니다.\r\n\r\n");
	}
}


/*
* 영어인지 아닌지 체크하는 함수
* @param  word[] - 입력받은 단어
* @return true, false
* @date   Thu Apr  6 17:06:05 2017
*/
bool CheckEng(char word[]) {
	char * temp = word;
	while (*temp != '\0')
	{
		if (*temp < 0) {
			return false;
		}
		temp++;
	}
	return true;
}

/*
* 문자를 영어인지 아닌지 체크하는 함수
* @param  ch - 문자
* @return true, false
* @date   Mon Apr 10 10:28:21 2017
*/
bool CheckEng(char ch) {
	if ('A' <= ch && ch <= 'z') {
		return true;
	}

	return false;
}

/*
* 시저 알파벳으로 바꾸는 함수
* @param  word[] - 입력받은 단어
* @return
* @date   Thu Apr  6 17:23:20 2017
*/
void AlpaToCeasar(char word[]) {
	char * temp = word;

	while (*temp != '\0')
	{
		char last_w = 'Z';
		char first_w = 'A';

		if (*temp > 'Z') { //대문사 소문자 구분
			last_w += 32;
			first_w += 32;
		}

		if (CheckEng(*temp)) {//영어일 경우만
			*temp += 3;

			if (last_w < *temp) {//z값을 넘을 경우 a로 넘어가서 계산.
				int tempNum = (*temp - last_w) - 1;
				*temp = first_w + tempNum;
			}
		}
		temp++;
	}

	printf("암호 : %s\r\n\r\n", word);
}

void CeaserToAlpa(char word[]) {
	char * temp = word;

	while (*temp != '\0')
	{
		char last_w = 'A';
		char first_w = 'Z';

		if (*temp > 'Z') { //대문사 소문자 구분
			last_w += 32;
			first_w += 32;
		}

		if (CheckEng(*temp)) {//영어일 경우만
			*temp -= 3;

			if (last_w > *temp) {//z값을 넘을 경우 a로 넘어가서 계산.
				int tempNum = (*temp - last_w) + 1;
				*temp = first_w + tempNum;
			}
		}
		temp++;
	}

	printf("암호 : %s\r\n\r\n", word);
}