//3: (1207.) Unique Number of Occurrences:01

class Solution {
    public boolean uniqueOccurrences(int[] arr) 
    {
        int[] table = new int[2000];
        for(int i = 0; i < arr.length; i++)
        {
            table[arr[i]+1000] += 1;
        }
       
        for(int i = 0; i < table.length; i++)
        {
            if(table[i] != 0)
            {
                for(int j = table.length - 1; j > i; j--)
                {
                    if(table[j] != 0 && table[j] == table[i]) return false;
                }
            }
        }
        return true;
    }
}

//3: (1207.) Unique Number of Occurrences:02

class Solution {
    public boolean uniqueOccurrences(int[] arr) {
       Map<Integer, Integer> map = new HashMap();
        for(int num : arr) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        Set<Integer> set = new HashSet(map.values());
        return map.size() == set.size(); 
    }
}


// solution:03 in cPP

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp; //to store frequencies of each number
        set<int>ans; // to store the frequencies in the set
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }

        for(auto i=mp.begin();i!=mp.end();i++){
            ans.insert(i->second);
        }
        return ans.size()==mp.size() ?true:false;
        // if array and map size is equal means each element has unique occurrence and hence we return true
    }
};
