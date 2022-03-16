import java.util.Scanner;

public class P0204_KeyboardInput2 {
	public static void main(String[] args)
	{
		Scanner stdIn = new Scanner(System.in);
		System.out.print("이름과 나이, 몸무게를 공간(space)으로 구분하여 입력 : ");
		String name = stdIn.next(); // 키보드로부터 이름을 문자열로 입력
		int i=stdIn.nextInt(); // 키보드로부터 나이를 정수로 입력
		double d = stdIn.nextDouble(); // 키보드로부터 몸무게를 실수로 입력
		System.out.println(name+"씨의 나이는 "+i+"세이고");
		System.out.println("몸무게는 "+d+"Kg 입니다");
	}
}
