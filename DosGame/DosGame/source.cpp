/*
* 도스게임
* @date     Mon Mar 27 18:53:51 2017
* @author   희아
*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

//함수선언
void init(); //게임동작(무한반복)
int MonInfo(int atk); //몬스터 정보
int RandAtk(); //몬스터 플레이어 랜덤 공격력
void atkPlayer(); //플레이어 공격시
void DisplayHp(int hp, int flag); //hp바를 보여준다
int PlayerInfo(int atk); //플레이어 정보
void atkMon(); //몬스터 공격시
void HealPlayer(); //플레이어 회복


void main() {
	srand(time(NULL));
	printf("게임 종료(Q)\r\n");
	printf("몬스터를 만났습니다.\r\n");
	DisplayHp(MonInfo(0), 1);
	DisplayHp(PlayerInfo(0), 0);
	init();
}

/*
* 게임동작(무한반복)
* @param 
* @return
* @date   Mon Mar 27 18:56:00 2017
*/
void init() {
	char commend;
	while (true)
	{
		printf("1 - 공격 2 - HP회복 : \r\n");
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
		else if (commend == 'Q') //q입력시 종료
		{
			exit(0);
		}
	}
} 

/*
* 플레이어가 몬스터 공격시 동작
* @param
* @return
* @date   Mon Mar 27 19:12:05 2017
*/
void atkPlayer() {
	int atk = RandAtk();
	printf("플레이어가 공격을 했습니다.\r\n%d 데미지를 주었습니다.\r\n", atk);
	int monHP= MonInfo(atk);
	DisplayHp(monHP, 1);
	if (monHP <= 0) {
		printf("당신은 몬스터와 싸워 승리를 했습니다.\r\n\r\n");
		exit(0);
	}
}

/*
* 플레이어 HP 회복
* @param
* @return
* @date   Mon Mar 27 19:54:02 2017
*/
void HealPlayer() {
	int heal = 3;
	printf("플레이어는 회복을 사용했습니다. \r\nHP %d이 회복되었습니다.\r\n", heal);
	int playerHp = PlayerInfo(heal);
	DisplayHp(playerHp, 0);
}


/*
* 몬스터가 플레이어 공격
* @param
* @return
* @date   Mon Mar 27 19:31:04 2017
*/
void atkMon() {
	printf("몬스터가 공격을 시도했습니다.\r\n");
	int isDef = rand() % 7;
	if (isDef == 0) {//방어시
		printf("플레이어는 성공적으로 방어했습니다.\r\n");
		int playerHp = PlayerInfo(0);
		DisplayHp(playerHp, 0);
	}
	else {//방어실패
		int damage = RandAtk();
		int atk = RandAtk();
		int playerHp = PlayerInfo(atk);

		printf("방어에 실패했습니다.\r\n%d 데미지를 받았습니다..\r\n", atk);
		DisplayHp(playerHp, 0);

		if (playerHp <= 0) {
			printf("당신은 몬스터에게 패배했습니다.\r\n");
			exit(0);
		}
	}
}

/*
* 몬스터의 정보를 반환한다.
* @param  변화값
* @return 몬스터 hp
* @date   Mon Mar 27 19:05:41 2017
*/
int MonInfo(int atk) {
	static int monsterHp = 30;
	monsterHp += atk;
	return monsterHp;
}

/*
* 플레이어의 정보를 반환한다.
* @param  변화값
* @return 플레이어 hp
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
* HP를 화면상에 보여준다.
* @param  hp(보여줄 hp), flag(0=플레이어, 1=몬스터)
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
* 공격력을 반환한다.
* @param
* @return 공격값 반환
* @date   Mon Mar 27 18:58:32 2017
*/
int RandAtk() {
	int atk = rand() % 5;
	atk = ~atk + 1;
	return atk;
}

