

/*Given an integer n, print true if it is a power of four. Otherwise, print false.
An integer n is a power of four, if there exists an integer x such that n == 4x.
*/
public class PowerOfFour {

	public static void main(String[] args) {
		
		// Lets take a number 
		
		int x=256;
		
		while(x%4==0) {
			x/=4;
		}
		System.out.println(x==1?true:false);

	}

}
