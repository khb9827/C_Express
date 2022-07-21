#include <stdio.h>
#include <stdlib.h>	
#define SIZE 5 // 배열 크기를 나타내는 기호상수 SIZE 정의

int main(void)
{
	int i;
	int grade[SIZE]; // 배열 선언

	for (i = 0; i < SIZE; i++)
		grade[i] = rand() % 100; // 배열 원소에 난수를 채운다.

	for (i = 0; i < SIZE; i++)
		printf("grade[%d] = %d\n", i, grade[i]);

	return 0;
}