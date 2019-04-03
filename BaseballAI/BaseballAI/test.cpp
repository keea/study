#include<stdio.h>

#include<stdlib.h>

#include<time.h>





void main()

{

	int x, y, z, ran;

	int tmp;

	srand((int)time(NULL));

	while (1) {

		ran = rand() % 1000 + 1;

		x = ran / 100;

		tmp = ran % 100;

		y = tmp / 10;

		z = tmp % 10;

		if ((x == y) || (x == z) || (y == z))

			continue;

		else

			break;

	}

	printf("%d%d%d", x, y, z);



}