/*
0509.

그리스 최초의 수학자이자 천문학자인 탈레스(Thaies)는 지팡이 하나로 피라미드의 높이를 재었다고 한다.
탈레스는 지팡이를 독바로 땅에 세우고 지팡이를 움직여서 지팡이의 그림자와 피라미드의 그림자를 일치시켰다.
삼각형 ABC와 삼각형 ADE는 닮음꼴이므로 다음의 수식이 성립한다.

AC : AE = BC : DE

따라서 AC와 AE, BC를 안다면 DE를 계산할 수 있다.
AC와 AE, BC를 입력하여서 DE를 구하는 프로그램을 작성하라.
입력되는 수치는 모두 실수로 한다.

*/

#include <stdio.h>

int main(void)
{
	double AC, AE, BC; // 입력받을 정수
	double DE; // 구할 값

	printf("AC, AE, BC의 길이 입력: ");
	scanf_s("%lf %lf %lf", &AC, &AE, &BC);

	DE = AE * BC / AC;
	printf("DE의 길이: %lf\n", DE);

	return 0;
}