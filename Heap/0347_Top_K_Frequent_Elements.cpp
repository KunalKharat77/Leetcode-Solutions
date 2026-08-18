// 0347_Top_K_Frequent_Elements.cpp

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        priority_queue<pair<int, int>> pq;
        vector<int> ans;
        for (int num : nums) {
            map[num]++;
        }
        for (auto it : map) {
            pq.push({it.second, it.first});
        }

        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};