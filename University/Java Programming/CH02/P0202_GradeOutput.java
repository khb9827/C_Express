
public class P0202_GradeOutput {
	int e; // 영어 성적을 위한 변수
	int m; // 수학 성적을 위ㅏㅎㄴ 변수
	
	void input_grade(int a,int b) { // 성적을 입력하기 위한 메소드
		e=a;
		m=b;
	}
	
	void output_grade() { // 성적의 합을 구하는 메소드
		System.out.println(e+m);
	}
	
	public static void main(String[] args)
	{
		P0202_GradeOutput g1,g2; // 2명의 성적을 표현하기 위한 객체
		g1= new P0202_GradeOutput(); // 객체 생성
		g2=new P0202_GradeOutput();
		g1.input_grade(90, 85); // 점수 입력
		g2.input_grade(80,80); 
		
		g1.output_grade(); // 점수 출력
		g2.output_grade();
	}
}
