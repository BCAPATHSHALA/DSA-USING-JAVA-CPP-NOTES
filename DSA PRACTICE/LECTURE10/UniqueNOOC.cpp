//3: (1207.) Unique Number of Occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int i = 0;
        sort(arr.begin(),arr.end());
        vector<int> ans;
        while (i < arr.size()){
            int count = 1;
            for (int j = i+1; j< arr.size(); j++){
                if (arr[i] == arr[j])
                    count++;
            }
            ans.push_back(count);
            i = i + count;
        }
        sort(ans.begin(),ans.end());
        for (int i = 0; i < ans.size() - 1; i++){
            if (ans[i] == ans [i+1])
                return false;
        }
        return true;
    }
};

/*
INPUT: arr=[1,2,2,1,1,3]
OUTPUT: true

explanation: 1 is 3 times
			 2 is 2 times
			 3 is 1 times

INPUT: arr=[1,2]
OUTPUT: false

explanation: 1 is 1 time
			 2 is 1 time
*/