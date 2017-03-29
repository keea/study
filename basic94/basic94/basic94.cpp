/*
* �ѹ��� ������ C���α׷��� 200�� 56p 94�� ����
* �߱�����
* @date     Fri Mar 24 09:36:34 2017
* @author   ���
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�Լ�����
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
* ������ ȭ�鿡 ����Ѵ�.
* @param  inputNum(���䰪)
* @return 
* @date   Fri Mar 24 10:13:43 2017
*/
void show(int correct) {
	bool isClear = false;
	for (int i = 10; i > 0; i--) {
		int inputNum; //�Է��� ��
		printf("%d���� ��ȸ�� ���ҽ��ϴ�. 3�ڸ� ���� �Է��ϼ���: ", i);
		scanf("%d", &inputNum);

		int nStrike = getStrike(inputNum, correct);
		int nBall = getBall(inputNum, correct);

		printf("%d ��Ʈ����ũ, %d ���Դϴ�.\r\n", nStrike, nBall);

		if (nStrike == 3) {
			isClear = true;
			break;
		}	
	}

	printf("\r\n");

	if (isClear) {
		printf("������ %d �Դϴ�.\r\n", correct);
		printf("�����մϴ�. ����� ���� õ��׿�.\r\n");
	}
	else {
		printf("��ȸ�� ��� ����ϼ̽��ϴ�.\r\n");
		printf("������ %d �Դϴ�.\r\n", correct);
	}

}

/*
* ���� �Ǵ��ϰ� �� ������ ���Ͻ�Ų��.
* @param inputNum(�Է°�) , correct(����)
* @return nStrike(�� ����)
* @date   Fri Mar 24 14:16:59 2017
*/
int getBall(int inputNum, int correct) {
	int nBall = 0;

	int corr_h = getCipher(correct, 100); //������ ���� �ڸ�
	int corr_t = getCipher(correct, 10); //������ ���� �ڸ�
	int corr_o = getCipher(correct, 1); //������ ���� �ڸ�

	int input_h = getCipher(inputNum, 100); //�Է°��� �����ڸ�
	int input_t = getCipher(inputNum, 10); //�Է°��� �����ڸ�
	int input_o = getCipher(inputNum, 1); //�Է°��� �����ڸ�

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
* ��Ʈ����ũ�� �Ǵ��ϰ� ��Ʈ����ũ ������ ���Ͻ�Ų��.
* @param inputNum(�Է°�) , correct(����)
* @return nStrike(��Ʈ����ũ ����)
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
* ���ϴ� �ڸ����� ���� ���Ѵ�.
* @param num(����), cipher(�ڸ��� ����)
* @return �ڸ����� ��
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

