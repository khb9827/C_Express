/*
0817.

간단한 메뉴 시스템을 작성하여 보자.
다음과 같은 메뉴를 선택하고 사용자로부터 입력을 받아서 입력이 올바른지를 검사한다.
메뉴를 실제로 실행할 필요는 없다.
다만 메뉴의 이름을 화면에 출력하고 다시 반복한다.

*/

#include <stdio.h>

void print_menu();
int check_menu_number(int n);
void print_menu_number(int n);

int main(void)
{
	int n;

	while (1)
	{
		print_menu();
		scanf_s("%d", &n);
		
		if (!check_menu_number(n)) // 범위 밖일 경우
		{
			printf("\n\n");
			continue;
		}
		else // 범위 내 입력한 경우
			print_menu_number(n);

		if (n == 4) // 종료조건
			break;
	}

	return 0;
}

// (a) 메뉴 출력
void print_menu()
{
	printf("1. 햄버거\n");
	printf("2. 치즈버거\n");
	printf("3. 샌드위치\n");
	printf("4. 종료\n");
	printf("원하는 메뉴를 선택하시오: ");

}

// (b) 메뉴 번호 검사
int check_menu_number(int n)
{
	if (n >= 1 && n <= 4)
		return n;
	else
		return 0;
}

// (C) 입력된 메뉴 출력
void print_menu_number(int n)
{
	printf("%d번 메뉴가 출력되었습니다.\n\n", n);
}