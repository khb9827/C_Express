/*
Ex_0808.

0.0부터 1.0까지의 난수를 반환하는 함수 f_rand()를 작성하고 5번 호출하여 본다.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double f_rand();

int main(void)
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++)
		printf("%lf ", f_rand());
	printf("\n");

	return 0;
}

double f_rand()
{
	return rand() / (double)RAND_MAX;
}