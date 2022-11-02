/* PROGRAM 06: Reverse words (151 Leetcode)❤️
APPROACH :
Step 1 : Trim Original String and Split into substring
Step 2 : Make a String Array , put words of string in String Array using split method.
Step 3 : reverse String Array
Step 4 : Return a string of the words in reverse order concatenated by a single space. 
            Convert String Array back to string using Join Operator
*/

class TrimAndSplitString
{
  public static void main(String[] args) 
  {
    String s = " Java is a fun programming    language ";

    String result=reverseWords(s);
    
    System.out.print(result);
  }

  public static String reverseWords(String s) 
   {
      // Trim Original String and Split into substring and stored in array
      String[] arr = s.trim().split("\\s+");
      
            
      // Reverse the order of the words in array
      int start =0;
      int end=(arr.length)-1;
        
      while(start<=end)
      {
          String temp=arr[start];
          arr[start]=arr[end];
          arr[end]=temp;
            
          start++;
          end--;
      }
     
      // convert to string 
      return String.join(" ", arr);  
        
    }    
}

/* Output: "language programming fun a is Java"

Example 1:
Input: s = "the sky is blue"
Output: "blue is sky the"

Example 2:
Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

Example 3:
Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
*/