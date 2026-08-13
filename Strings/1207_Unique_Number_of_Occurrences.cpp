// 1207_Unique_Number_of_Occurrences.cpp

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_set<int> set;
        unordered_map<int, int> mp;

        for (int num : arr)
        {
            mp[num]++;
        }
    
        for (auto it : mp)
        {
            int i = it.second;
            if (set.find(i) == set.end())
            {
                set.insert(i);
            }
            else
            {
                return false;
            }
        }
    
        return true;
    }
};