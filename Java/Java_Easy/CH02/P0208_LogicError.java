
public class P0208_LogicError {
	public static void main(String[] args)
	{
		int i=300;
		int j=500;
		j+=i+j; // 의도는 j = i + j였음
		System.out.println("합계는 = "+j);
	}
}
