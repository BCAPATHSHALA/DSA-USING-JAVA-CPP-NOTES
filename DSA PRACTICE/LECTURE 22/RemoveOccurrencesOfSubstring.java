// PROGRAM 09: Remove all occurrences of substring (1910 Leetcode)


/*
step01: find substring part from string s
step02: replace substring part with null until s contains the part
step03: return string s
*/
class Solution {
    public String removeOccurrences(String s, String part) {
        
        // step01 and 02
        while(s.contains(part))
        {
            s = s.replaceFirst(part,"");
        }
            //step03
            return s;        
    }
}


/*
Example 1:
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".

Example 2:
Input: s = "axxxxyyyyb", part = "xy"
Output: "ab"
Explanation: The following operations are done:
- s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
- s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
- s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
- s = "axyb", remove "xy" starting at index 1 so s = "ab".
Now s has no occurrences of "xy".
*/