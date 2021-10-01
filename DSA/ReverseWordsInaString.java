


         /*Given an input string s, reverse the order of the words.
     A word is defined as a sequence of non-space characters.
         The words in s will be separated by at least one space.
          Print a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words.
 The returned string should only have a single space separating the words. 
 Do not include any extra spaces.*/


public class ReverseWordsInaString {

	public static void main(String[] args) {
    //	Lets take a String
		
		String s="I love Opensource and i like Hacktoberfest";
		
	     s=s.trim();
	       s=s.replaceAll("\\s+"," ");
	    String ar[]=s.split(" ");
	        String res="";
	    for(int i=ar.length-1;i>=0;i--)
	        res+=ar[i]+" ";
	        

	      System.out.println(res.trim());
		

	}

}
