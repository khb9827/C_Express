
public class P0311_TestInteger {
	public static void main(String[] args) {
		// 정수 변수를 선언하고 초기화
		int u_price = -300;
		int count = 9;

		System.out.printf("%d원짜리 %d개를 사면 %d입니다.\n", 300, 9, 300 * 9); // %d를 사용하여 정수 리터럴 출력
		System.out.printf("%10d원짜리 %+10d개를 사면 %10d입니다\n", u_price, count, u_price * count); // %10d를 사용하여 변수 값을 출력. +를 붙이면 기호 출력
		System.out.printf("10진수 15를 16진수로 출력하면 : %x, 8진수로 출력하면 %o\n",15,15); // 리터럴(10진수) 15를 %x와 %o를 사용하여 16진수와 8진수로 출력
		System.out.printf("음수값 -10을 %%d로 출력하면 %d\n", -10); // %d를 사용하여 -10을 출력. %를 출력하기 위해 %% 지정자를 사용
	}
}
