
public class P0306_CharacterTypeTest {
	public static void main(String[] args) {
		char c1 = '한'; // 한글을 저장
		char c2 = '국';
		char c3 = '韓'; // 한자를 저장
		char c4 = '國';
		char c5 = 'K'; // 영문자를 저장
		char c6 = '\u004f'; // O
		char c7 = 'R';
		char c8 = '\u0045'; // E
		char c9 = 'A';

		System.out.println("출력 결과 : " + c1 + c2 + "(" + c3 + c4 + ")" + " = " + c5 + c6 + c7 + c8 + c9);
	}
}
