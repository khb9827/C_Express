/*
0906.

오른쪽과 같은 n번째 삼각수를 계산하는 하수 get_tri_number(int n)을 순환호출을 이용하여 작성하여 보자.

1 = 1
1+2 = 3
1+2+3 = 6
1+2+3+4 = 10

*/

#include <stdio.h>

int get_tri_number(int n)
{
	if (n == 1)
		return 1;
	else
		return n + get_tri_number(n - 1);
}

int main(void)
{
	int n;
	printf("몇번째 삼각수? ");
	scanf_s("%d", &n);

	printf("%d번째 삼각수 : %d\n", n, get_tri_number(n));

	return 0;
}