#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

#define TRUE    1
#define FALSE   0

int main(){
    //���ڸ� 1������ 3������ ���ϰ� ��뿡�� �ѱ�.
    //�����ϴٰ� ������ ���� 31�� ���ϸ� ��.
    //��ǻ�Ͱ� ���� ����

    printf("���� ���ϱ� : g ���ʳѱ�� : p\n");

    int turn = 0;
    int myTurn = FALSE; //���� �� ����.
    do
    {
        if (myTurn == FALSE){
            int tryNum = (rand() % 3) + 1;
            while (tryNum != 0)
            {
                turn++;
                printf("��ǻ��(%d) : %d\n", tryNum, turn);
                tryNum--;
                if (turn == 31){
                    break;
                    myTurn = TRUE;
                }
                    
            }
            myTurn = TRUE;
        }
        else{
            int myTryNum = 0;
            while (myTryNum < 3)
            {
                char ch = getch();
                if (ch == 'g'){
                    turn++;
                    printf("�� : %d\n", turn);
                    if (turn == 31){
                        myTurn = FALSE;
                        break;
                    }
                    myTryNum++;
                }
                else if (ch == 'p'){
                    if (myTryNum == 0)
                        printf("���� �Է����ּ���.\n");
                    else{
                        break;
                    }
                }
            }
            myTurn = FALSE;
            printf("������ ������.\n");
            getch();
        }

    } while (turn < 31);

    return 0;
}