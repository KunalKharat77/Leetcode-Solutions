// 1046_Last_Stone_Weight.cpp

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxpq;

        for (int x : stones) {
            maxpq.push(x);
        }

        while (maxpq.size() > 1) {
            int x = maxpq.top();
            maxpq.pop();
            int y = maxpq.top();
            maxpq.pop();

            maxpq.push(x - y);
        }

        return maxpq.top();
    }
};