/*
* ¿­Ç÷ C ÇÁ·Î±×·¡¹Ö p240
* Àç±ÍÇÔ¼ö
* @date     Tue Mar 28 11:53:18 2017
* @author   Èñ¾Æ
*/

#include<stdio.h>
void Recursive(int num);


void main() {
	Recursive(3);
}

void Recursive(int num) {
	if (num <= 0) //Àç±Í Å»Ãâ Á¶°Ç
		return; //Àç±ÍÀÇ Å»Ãâ

	printf("Recursive call %d \r\n", num);
	Recursive(num - 1);
}