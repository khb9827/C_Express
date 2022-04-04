// break문의 예 1
public class P0220_BreeakTest1 {
	public static void main(String args[]) {
		int nSum=0;
		int i=1;
		while(true) {
			nSum+=i;
			i++;
			if(i>10)
				break;
		}
	}
}
