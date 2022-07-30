/*
0903.

정적 지역 변수가 사용되는 하나의 용도는 함수가 처음 호출될 때 초기화를 딱 한번만 수행하는 것이다.

int get_random(void)
{
	static int inited = 0;
	if (inited == 0) { // 함수를 초기화한다.
		...
		inited = 1;
	}
	...
}

inited는 정적 변수이기 때문에 다음번의 호출에서도 그 값을 유지한다.
따라서 초기화 코드는 함수가 처음 호출될 때 한번만 실행된다.
이러한 구조를 사용하여 맨 처음 호출되는 경우에만 초기화를 수행하는 난수 발생 함수 get_random()을 작성하여 테스트하라.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(void)
{
	static int inited = 0;
	if (inited == 0) { // 함수를 초기화한다.
		inited = 1;
	}
	else
		inited = rand();

	return inited;
}

int main(void)
{
	srand((unsigned)time(NULL));

	printf("초기화는 1\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", get_random());
	}

	return 0;
}