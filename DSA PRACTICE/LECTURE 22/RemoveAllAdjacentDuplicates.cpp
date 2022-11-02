//PROGRAM 11: Remove All Adjacent Duplicates In String (leetcode 1047)

//SOLUTION01: TLE
class Solution {
public:
    string removeDuplicates(string s) 
    {
        
        int i=0;
        int j=i+1;
        while(i<j && j<s.size() && s.size()>0)
        {
            if(s[i]==s[j])
            {
                s.replace(i,2,"");
                i=0;
                j=i+1;
            }
            else
            {
                i++;
                j++; 
            } 
        }        
        return s;
    }
};


/*
SOLUTION02: Without using Using Stack
Time Complexity :- O(N)
Space Complexity :- O(N)
*/

class Solution {
public:
    string removeDuplicates(string s) 
    {
    
        int i = 0, n = s.length();
        for (int j = 0; j < n; ++j, ++i) 
        {
            s[i] = s[j];
            // count = 2
            if (i > 0 && s[i - 1] == s[i]) 
            {
                  i -= 2; //i=0
            }
              
        }
        return s.substr(0, i);
    }
};



/*
SOLUTION03: Using Stack FILO
Time Complexity :- O(N)
Space Complexity :- O(N)
*/
class Solution {
public:
    string removeDuplicates(string str) 
    {
        
        int n = str.size();
        
        string ans = "";
        
        for(int i = 0; i < n; i++)
        {
            if(ans.size() > 0 && str[i] == ans.back())
            {
                ans.pop_back();
            }
            else 
            {
                ans.push_back(str[i]);
            }
        }
        
        return ans;
    }
};

