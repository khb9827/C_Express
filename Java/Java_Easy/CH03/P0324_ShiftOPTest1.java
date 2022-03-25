
import java.util.Scanner;

public class P0324_ShiftOPTest1 {
	public static void main(String[] args) {
		Scanner stdin = new Scanner(System.in);
		System.out.print("두 개의 숫자를 입력 : ");
		// 키보드로부터 두 개의 정수를 입력
		int a = stdin.nextInt();
		int b = stdin.nextInt();
		System.out.println("a = " + a + "(" + Integer.toBinaryString(a) + ")");
		System.out.println("b = " + b + "(" + Integer.toBinaryString(b) + ")");
		// 왼쪽으로 2비트 시프트한결과 출력
		System.out.println("a << 2 = " + (a << 2) + "(" + Integer.toBinaryString(a << 2) + ")");
		// 오른족으로 2비트 시프트한 결과 출력
		System.out.println("a >> 2 = " + (a >> 2) + "(" + Integer.toBinaryString(a >> 2) + ")");
		System.out.println("b << 2 = " + (b << 2) + "(" + Integer.toBinaryString(b << 2) + ")");
		System.out.println("b >> 2 = " + (b >> 2) + "(" + Integer.toBinaryString(b >> 2) + ")");
		// 오른쪽으로 2비트시프트하면서 빈 곳을 0으로 채운 결과 출력
		System.out.println("b >>> 2 = " + (b >>> 2) + "(" + Integer.toBinaryString(b >>> 2) + ")");

	}
}
