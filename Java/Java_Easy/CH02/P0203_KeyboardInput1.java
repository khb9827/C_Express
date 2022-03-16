
import java.util.Scanner; // 라이브러리 클래스 포함
public class P0203_KeyboardInput1 {
	public static void main(String[] args)
	{
		Scanner stdIn = new Scanner(System.in); // 키보드 입력을 위해 Scanner 객체 생성
		System.out.print("몇 번째 프로그램인지 입력하세요 : ");
		String s = stdIn.next(); // 사용자의 입력을 문자열로 받음
		System.out.println(s + " 번째로 작성해 보는 자바 프로그램 입니다");
	}
}
