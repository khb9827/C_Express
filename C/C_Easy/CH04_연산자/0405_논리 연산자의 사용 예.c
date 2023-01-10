/* Ex 04_05.c */
#include <stdio.h>

int main(void)
{
	int score = 95;

	printf("90점 이상 100점 이하인가? : %d\n",
		score >= 90 && score <= 100); // 논리 연산자

	printf("0점 또는 100점인가? : %d\n",
		score == 0 || score == 100); // 논리 연산자

	printf("0점인가? : %d\n", !score); // 논리 연산자

	return 0;
}