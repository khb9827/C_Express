// continue문의 예
public class P0222_ContinueTest {
	public static void main(String[] args) {
		int nSum=0;
		for(int i=1;i<=100;i++) {
			if (i%2==0)
			continue;
			nSum+=i;
		}
	}
}
