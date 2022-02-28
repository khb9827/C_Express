/*
0604.

컴퓨터와 가위, 바위, 보 게임을 하는 프로그램을 작성하라.
컴퓨터는 사용자에게 알리지 않고 가위, 바위, 보 중에서 임의로 하나를 선택한다.
사용자는 프로그램의 입력 안내 메시지에 따라서, 3개 중에서 하나를 선택하게 된다.
사용자의 선택이 끝나면 컴퓨터는 누가가 무엇을 선택하였고 누가 이겼는지, 비겼는지를 알려준다.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int player , com; // 사용자, 컴퓨터

	srand((unsigned)time(NULL)); // 난수 시드 생성
	com = rand() % 3 + 1; // 컴퓨터 난수 생성

	printf("선택하시오(1: 가위 2: 바위 3: 보) ");
	scanf_s("%d", &player);

	if (player == com)
		printf("비겼음\n");
	else if (player == 1)
	{
		if (com == 2)
			printf("컴퓨터 승\n");
		else
			printf("사용자 승\n");
	}
	else if (player == 2)
	{
		if (com == 1)
			printf("사용자 승\n");
		else
			printf("컴퓨터 승\n");
	}
	else if (player == 3)
	{
		if (com == 1)
			printf("컴퓨터 승\n");
		else
			printf("사용자 승\n");
	}

	return 0;
}