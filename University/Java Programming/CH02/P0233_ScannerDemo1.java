import java.util.Scanner;

// Scanner 클래스를 이용한 문자열 입출력 예제
public class P0233_ScannerDemo1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextLine()) {
			System.out.println(sc.nextLine());
		}
	}
}
