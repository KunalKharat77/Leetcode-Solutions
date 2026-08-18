// 0692_Top_K_Frequent_Words.cpp

struct CustomCompare {
    bool operator()(const pair<int, string>& a, const pair<int, string>& b) {
        if (a.first != b.first) {
            return a.first < b.first; 
        }
        return a.second > b.second;
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> map;
        priority_queue<pair<int, string>, vector<pair<int, string>>, CustomCompare> pq;
        vector<string> ans;
        for (string word : words) {
            map[word]++;
        }

        for (auto it : map) {
            pq.emplace(it.second, it.first);
            
        }

        for(int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};