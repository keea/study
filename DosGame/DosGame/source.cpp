/*
* ��������
* @date     Mon Mar 27 18:53:51 2017
* @author   �����
*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

//�Լ�����
void init(); //���ӵ���(���ѹݺ�)
int MonInfo(int atk); //���� ����
int RandAtk(); //���� �÷��̾� ���� ���ݷ�
void atkPlayer(); //�÷��̾� ���ݽ�
void DisplayHp(int hp, int flag); //hp�ٸ� �����ش�
int PlayerInfo(int atk); //�÷��̾� ����
void atkMon(); //���� ���ݽ�
void HealPlayer(); //�÷��̾� ȸ��


void main() {
	srand(time(NULL));
	printf("���� ����(Q)\r\n");
	printf("���͸� �������ϴ�.\r\n");
	DisplayHp(MonInfo(0), 1);
	DisplayHp(PlayerInfo(0), 0);
	init();
}

/*
* ���ӵ���(���ѹݺ�)
* @param 
* @return
* @date   Mon Mar 27 18:56:00 2017
*/
void init() {
	char commend;
	while (true)
	{
		printf("1 - ���� 2 - HPȸ�� : \r\n");
		scanf(" %c", &commend);
		if (commend == '1') { 
			atkPlayer();
			printf("\r\n");
			atkMon();
		}
		else if (commend == '2') {
			HealPlayer();
			printf("\r\n");
			atkMon();
		}
		else if (commend == 'Q') //q�Է½� ����
		{
			exit(0);
		}
	}
} 

/*
* �÷��̾ ���� ���ݽ� ����
* @param
* @return
* @date   Mon Mar 27 19:12:05 2017
*/
void atkPlayer() {
	int atk = RandAtk();
	printf("�÷��̾ ������ �߽��ϴ�.\r\n%d �������� �־����ϴ�.\r\n", atk);
	int monHP= MonInfo(atk);
	DisplayHp(monHP, 1);
	if (monHP <= 0) {
		printf("����� ���Ϳ� �ο� �¸��� �߽��ϴ�.\r\n\r\n");
		exit(0);
	}
}

/*
* �÷��̾� HP ȸ��
* @param
* @return
* @date   Mon Mar 27 19:54:02 2017
*/
void HealPlayer() {
	int heal = 3;
	printf("�÷��̾�� ȸ���� ����߽��ϴ�. \r\nHP %d�� ȸ���Ǿ����ϴ�.\r\n", heal);
	int playerHp = PlayerInfo(heal);
	DisplayHp(playerHp, 0);
}


/*
* ���Ͱ� �÷��̾� ����
* @param
* @return
* @date   Mon Mar 27 19:31:04 2017
*/
void atkMon() {
	printf("���Ͱ� ������ �õ��߽��ϴ�.\r\n");
	int isDef = rand() % 7;
	if (isDef == 0) {//����
		printf("�÷��̾�� ���������� ����߽��ϴ�.\r\n");
		int playerHp = PlayerInfo(0);
		DisplayHp(playerHp, 0);
	}
	else {//������
		int damage = RandAtk();
		int atk = RandAtk();
		int playerHp = PlayerInfo(atk);

		printf("�� �����߽��ϴ�.\r\n%d �������� �޾ҽ��ϴ�..\r\n", atk);
		DisplayHp(playerHp, 0);

		if (playerHp <= 0) {
			printf("����� ���Ϳ��� �й��߽��ϴ�.\r\n");
			exit(0);
		}
	}
}

/*
* ������ ������ ��ȯ�Ѵ�.
* @param  ��ȭ��
* @return ���� hp
* @date   Mon Mar 27 19:05:41 2017
*/
int MonInfo(int atk) {
	static int monsterHp = 30;
	monsterHp += atk;
	return monsterHp;
}

/*
* �÷��̾��� ������ ��ȯ�Ѵ�.
* @param  ��ȭ��
* @return �÷��̾� hp
* @date   Mon Mar 27 19:05:41 2017
*/
int PlayerInfo(int atk) {
	static int playerHp = 10;
	int maxHP = 10;
	playerHp += atk;
	if (playerHp > maxHP)
		playerHp = maxHP;
	return playerHp;
}

/*
* HP�� ȭ��� �����ش�.
* @param  hp(������ hp), flag(0=�÷��̾�, 1=����)
* @return 
* @date   Mon Mar 27 19:29:11 2017
*/
void DisplayHp(int hp, int flag) {
	if (flag == 0) 
		printf("======== PlayerHp ========\r\n");

	if(flag==1)
		printf("======== MonsterHp ========\r\n");

	for (int i = 0; i < hp; i++) {
		printf("*");
	}
	printf("\r\n");
	printf("===========================\r\n");

}


/*
* ���ݷ��� ��ȯ�Ѵ�.
* @param
* @return ���ݰ� ��ȯ
* @date   Mon Mar 27 18:58:32 2017
*/
int RandAtk() {
	int atk = rand() % 5;
	atk = ~atk + 1;
	return atk;
}

