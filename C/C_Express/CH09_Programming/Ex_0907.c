/*
0907.

이항 계수(binomial coefficient)를 계산하는 순환 함수를 작성하라.
이항 계수는 다음과 같이 순환적으로 정의된다.
반복 함수로도 구현해보라.

if(0 < k < n) nCk = (n-1)C(k-1) + (n-1)Ck
if(k=0 or k=n) nCk = 1

*/

#include <stdio.h>

int recursive(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	else if (k > 0 && n > 0 && n > k)
		return recursive(n - 1, k - 1) + recursive(n - 1, k);
	else
		return 0;
}

int main(void)
{
	int k, n;
	printf("정수 n,k값 입력: ");
	scanf_s("%d %d", &n, &k);

	printf("이항계수(n,k) nCk 값 %dC%d = %d\n", n, k, recursive(n, k));

	return 0;
}