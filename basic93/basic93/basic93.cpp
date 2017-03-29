/*
* �ѹ��� ������ C���α׷��� 200�� 55p 93�� ����
* ���� n�� �Է¹ް�, 1~n���� ���ڸ� ����ϰ�, 369�� �� ��� ������ŭ * ���
* @date     Thu Mar 23 19:34:08 2017
* @author   �����
*/

#include <stdio.h>

//�Լ� ����
bool checkSSN(int num);
void printSSN(int num);
int isAddStar(int num, int cStar);
int checkChange(int checkNum, int space);
int countStar(int num);

void main() {
	int num;
	printf("������ �Է��ϼ��� : ");
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
* 369�� ������ ����Ѵ�.
* @param i(����)
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
* ���� ������ ���� ��ȯ�Ѵ�.
* @param num(�񱳰�)
* @return showStar(������ ���� ����)
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
* �ش� �ڸ��� ���� ���ϰ� ������ ���� ������ ���� ��ȯ�Ѵ�.
* @param checkNum(�񱳰�), space(���� �ڸ�), showStar(������ ���� ����)
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
* ���� �߰����� ������ �����Ѵ�.
* @param num(�Ǵܰ�), cStar(�������� ����)
* @return star(������ ���� ����)
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
* 3,6,9 ���� ���Ѵ�.
* @param num(���� ����)
* @return 1(true) 0(false)
* @date   Thu Mar 23 19:46:22 2017
*/
bool checkSSN(int num) {
	if (num == 3 || num == 6 || num == 9)
		return true;
	else
		return false;
}

