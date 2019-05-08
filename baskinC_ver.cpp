#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

#define TRUE    1
#define FALSE   0

int main(){
    //숫자를 1개에서 3개까지 말하고 상대에게 넘김.
    //진행하다가 마지막 숫자 31을 말하면 짐.
    //컴퓨터가 먼저 진행

    printf("숫자 말하기 : g 차례넘기기 : p\n");

    int turn = 0;
    int myTurn = FALSE; //내가 할 차례.
    do
    {
        if (myTurn == FALSE){
            int tryNum = (rand() % 3) + 1;
            while (tryNum != 0)
            {
                turn++;
                printf("컴퓨터(%d) : %d\n", tryNum, turn);
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
                    printf("나 : %d\n", turn);
                    if (turn == 31){
                        myTurn = FALSE;
                        break;
                    }
                    myTryNum++;
                }
                else if (ch == 'p'){
                    if (myTryNum == 0)
                        printf("값을 입력해주세요.\n");
                    else{
                        break;
                    }
                }
            }
            myTurn = FALSE;
            printf("내턴이 끝났다.\n");
            getch();
        }

    } while (turn < 31);

    return 0;
}