



     /*Given an array of strings patterns and a string word, return the number of 
             strings in patterns that exist as a substring in word.
  
A substring is a contiguous sequence of characters within a string.
 */


public class NumberOfStringsThatAppearAsSubstringsInWord {

	public static void main(String[] args) {
		
		
    // Lets Take an Example String Array & word
		
    String[] patterns= {"a","abc","bc","d"};
       String word = "abc";
		
       int count=0;
       for(int i=0;i<patterns.length;i++){
           if(word.contains(patterns[i]))
               count++;
       }
        
       System.out.println(count);
       
		
		

	}

}
