// PROGRAM 02: Reverse of String (344 leetcode)

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int start =0;
        int end=s.size()-1;
        while(start<=end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};

/*
Enter Your Name: MANOJ
Your Name is : JONAM
*/