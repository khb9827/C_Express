/*
실습. 이차방정식

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, dis;
	printf("계수 a를 입력하시오: ");
	scanf_s("%lf", &a);
	printf("계수 b를 입력하시오: ");
	scanf_s("%lf", &b);
	printf("계수 c를 입력하시오: ");
	scanf_s("%lf", &c);
	
	if (a == 0)
		printf("방정식의 근은 %lf입니다.\n", -c / b);
	else
	{
		dis = b * b - 4.0*a*c;
		if (dis >= 0)
		{
			printf("방정식의 근은 %lf입니다.\n", (-b + sqrt(dis)) / (2.0*a));
			printf("방정식의 근은 %lf입니다.\n", (-b - sqrt(dis)) / (2.0*a));
		}
		else
			printf("실근이 존재하지 않습니다.\n");
	}

	return 0;
}