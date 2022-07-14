// 난수 발생 함수
#define SEED 17
#define MULT 25173
#define INC 13849
#define MOD 65536

unsigned int call_count = 0; // 함수 호출 횟수
static unsigned seed = SEED; // 난수 생성 시드값

// 정수 난수 생성 함수
unsigned random_i(void)
{
	seed = (MULT*seed + INC) % MOD; // 난수의 시드값 설정
	call_count++;

	return seed;
}

// 실수 난수 생성 함수
double random_f(void)
{
	seed = (MULT*seed + INC) % MOD; // 난수의 시드값 설정
	call_count++; // 호출 횟수 증가

	return seed / (double)MOD; // 0.0에서 1.0 사이로 제한
}