/*
* ������ȣ ����
* @date     Thu Apr  6 13:59:28 2017
* @author   ���
*/


/*
* 1. ���ڸ� �Է¹޴´�.
* 2. �������� �ƴ��� üũ �Ѵ�. �ƴҰ�� ����.
* 3. ������ ��� ���ĺ��� ������ 3ĭ�� �̵�
* 4. ���ĺ��� ����(z)�� ���� ��� a���� �����ؼ� ���� �� ��ŭ �̵�.
* 5. ���
*/


#include <stdio.h>
#include <stdlib.h>  //exit ����
#include <conio.h>   //getch ����

//�Լ� ����
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
		printf("1. ��ȣ�� �����\r\n");
		printf("2. ��ȣ�� �ؼ��ϱ�\r\n");
		printf("0. �����ϱ�\r\n");
		printf("�����Ͻ� �޴��� �������ּ��� : ");
		menu = getch();
		printf("%c\r\n", menu);
		ControlMenu(menu);

	} while (menu != 0);
}



/*
* �޴����ð��� ���� ����� �Լ� ����
* @param  menu �޴����ð�
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
* ������ȣ ����� ����
* @param
* @return
* @date   Thu Apr  6 18:09:43 2017
*/
void InputMakeCeasar() {

	char word[100];
	
	printf("\r\n��ȣ�� ���� ���ڸ� �Է��ϼ���.(��� 100�� ����) : ");

	fgets(word, sizeof(word), stdin);

	if (CheckEng(word)) {
		AlpaToCeasar(word);
	}
	else {
		printf("����Ͻ� �� ���� ���ڰ� �ֽ��ϴ�.\r\n\r\n");
	}
}


/*
* ��ȣ�ؼ��ϱ�
* @param  
* @return
* @date   Fri Apr  7 10:28:40 2017
*/
void InputMakeWord() {

	char word[100];

	printf("\r\n�ؼ��� ��ȣ�� �Է��ϼ���.(��� 100�� ����) : ");

	fgets(word, sizeof(word), stdin);

	if (CheckEng(word)) {
		CeaserToAlpa(word);
	}
	else {
		printf("����Ͻ� �� ���� ���ڰ� �ֽ��ϴ�.\r\n\r\n");
	}
}


/*
* �������� �ƴ��� üũ�ϴ� �Լ�
* @param  word[] - �Է¹��� �ܾ�
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
* ���ڸ� �������� �ƴ��� üũ�ϴ� �Լ�
* @param  ch - ����
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
* ���� ���ĺ����� �ٲٴ� �Լ�
* @param  word[] - �Է¹��� �ܾ�
* @return
* @date   Thu Apr  6 17:23:20 2017
*/
void AlpaToCeasar(char word[]) {
	char * temp = word;

	while (*temp != '\0')
	{
		char last_w = 'Z';
		char first_w = 'A';

		if (*temp > 'Z') { //�빮�� �ҹ��� ����
			last_w += 32;
			first_w += 32;
		}

		if (CheckEng(*temp)) {//������ ��츸
			*temp += 3;

			if (last_w < *temp) {//z���� ���� ��� a�� �Ѿ�� ���.
				int tempNum = (*temp - last_w) - 1;
				*temp = first_w + tempNum;
			}
		}
		temp++;
	}

	printf("��ȣ : %s\r\n\r\n", word);
}

void CeaserToAlpa(char word[]) {
	char * temp = word;

	while (*temp != '\0')
	{
		char last_w = 'A';
		char first_w = 'Z';

		if (*temp > 'Z') { //�빮�� �ҹ��� ����
			last_w += 32;
			first_w += 32;
		}

		if (CheckEng(*temp)) {//������ ��츸
			*temp -= 3;

			if (last_w > *temp) {//z���� ���� ��� a�� �Ѿ�� ���.
				int tempNum = (*temp - last_w) + 1;
				*temp = first_w + tempNum;
			}
		}
		temp++;
	}

	printf("��ȣ : %s\r\n\r\n", word);
}