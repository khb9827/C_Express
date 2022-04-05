// 소스의 유효범위
public class P0224_ScopeTest {
	public static void main(String[] args) {
		int outer=1;
		{
			int inner=2;
			System.out.println("inner = "+inner);
			System.out.println("outer = "+outer);
		}
		int inner=3;
		System.out.println("inner = "+inner);
		System.out.println("outer = "+outer);
	}
}
