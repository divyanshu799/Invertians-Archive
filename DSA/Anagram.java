//Java Code to check wheather two given strings are Anagram or Not.

import java.util.*;

public class Anagrams {
	 
	    //Function is to check whether two strings are anagram of each other or not.
	    public static boolean isAnagram(String a,String b)
	    {
	       
	        a = a.toLowerCase();
            b = b.toLowerCase();

	        char c[] = a.toCharArray();
	        char d[] = b.toCharArray();
	        
	        Arrays.sort(c);
	        Arrays.sort(d);
	        
	        if(Arrays.equals(c,d))
	        return true;
	        return false;
		}
	

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );

	}

}