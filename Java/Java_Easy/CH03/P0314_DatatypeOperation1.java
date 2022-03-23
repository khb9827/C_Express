import java.util.Scanner;

public class P0314_DatatypeOperation1 {
	public static void main(String[] args) {
		Scanner stdin = new Scanner(System.in);
		System.out.print("첫 번째 정수를 입력 : ");
		int first = stdin.nextInt(); // 첫번째 입력된 정수 저장
		System.out.print("두 번째 정수를 입력 : ");
		int second = stdin.nextInt(); // 두번째 입력된 정수 저장
		double avg1 = (first + second) / 2; // 정수로 평균 구하는 연산 수행
		System.out.println("정수 연산 : 평균은(" + first + "+" + second + ")/2 = " + avg1 + "입니다");
		double avg2 = (first + second) / 2.0; // 실수로 평균 구하는 연산 수행
		System.out.println("정수 연산 : 평균은(" + first + "+" + second + ")/2.0 = " + avg2 + "입니다");
	}
}
