/*
Ex_0806.

난수(random number)는 컴퓨터를 이용한 문제 해결에서 많이 사용된다.
특히 수학적인 분석이 너무 복잡한 경우에 시뮬레이션을 사용하면 실제로 제품을 제작하지 않고서도 많은 실험을 할 수 있다.
Visual Studio의 경우, rand()가 한번 호출될 때마다 0에서 32767까지의 정수를 같은 확률로 선택하여 반환한다.
rand() 함수를 이용하여 0 또는 1값을 무작위로 반환하는 함수 b_rand()를 작성하고 5번 호출하여 보자.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main(void)
{
	srand((unsigned)time(NULL));
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", b_rand());
	}
	printf("\n");

	return 0;
}

int b_rand()
{
	int num = rand() % 2;

	return num;
}