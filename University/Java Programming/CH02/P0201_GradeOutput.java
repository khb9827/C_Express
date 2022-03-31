// Java 언어로 작성한 성적처리 프로그램 1
class Grade{
	int e; // 영어 성적을 위한 변수
	int m; // 수학 성적을 위한 변수
	
	void input_grade(int a, int b) { // 성적을 입력받는 메소드
		e=a;
		m=b;
	}
	
	void output_grade() { // 총점을 출력하는 메소드
		System.out.println(e+m);
	}
}

public class P0201_GradeOutput {
	public static void main(String[] args)
	{
		Grade g1,g2; // 두 명의 성적을 표현하는 객체
		g1=new Grade(); // 객체 생성
		g2=new Grade();
		g1.input_grade(90, 85); // 성적 입력
		g2.input_grade(80, 80);
		
		g1.output_grade();
		g2.output_grade();
	}
}
