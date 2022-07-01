/*
0706.

앞장에서 간단한 정수 계산기를 만들어본 적이 있다.
이 계산기 프로그램에 메뉴를 추가하도록 한다.
다음과 같은 메뉴를 화면에 출력하고 사용자가 메뉴 중에서 하나를 선택할 때까지 반복을 계속한다.
do...while 반복문을 사용하여 사용자가 적절한 선택을 했는지를 검사하도록 하라.
만약 사용자가 A, S, M, D, Q가 아닌 다른 문자를 입력하면 "연산을 선택하시오:" 메시지를 계속해서 출력한다.
하나의 메뉴가 선택되면 해당되는 연산을 실행하고 다시 메뉴를 선택할 수 있도록 하라.
반복을 종료하는 메뉴인 Q는 break 문을 이용하여 구현하도록 하라.

*/

#include <stdio.h>

int main(void)
{
	char op; // 연산
	int a, b; // 입력받을 두 수
	int result; // 결과값

	printf("********************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("********************\n");

	do
	{
		printf("연산을 선택하시오: ");
		scanf_s(" %c", &op);

		if (op == 'Q') // 종료 조건
			break;

		if (op == 'A' | op == 'S' | op == 'M' | op == 'D')
		{
			printf("두수를 공백으로 분리하여 입력하시오: ");
			scanf_s("%d %d", &a, &b);

			switch (op)
			{
			case 'A':
				result = a + b;
				break;

			case 'S':
				result = a - b;
				break;

			case 'M':
				result = a * b;
				break;

			case 'D':
				result = a / b;
				break;
			}

			printf("연산의 결과는 %d입니다.\n", result);
		}
		else
			continue;

	} while (1);

	return 0;
}