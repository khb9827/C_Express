// 레이블이 붙은 continue문의 예
public class P0223_LabeledContinueTest {
	public static void main(String[] args) {
		int nSum=0;
		my_loop:
			for(int i=1;i<=100;i++) {
				if(i%2==0)
					continue my_loop;
				nSum+=i;
			}
	}
}
