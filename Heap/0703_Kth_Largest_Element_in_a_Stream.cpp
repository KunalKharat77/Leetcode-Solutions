// 0703_Kth_Largest_Element_in_a_Stream.cpp

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int gk;
    KthLargest(int k, vector<int>& nums) {
        gk = k;
        for (int num : nums) {
            pq.push(num);
            if (pq.size() > gk) {
                pq.pop();
            }
        }
    }

    int add(int val) {
        pq.push(val);
        if (pq.size() > gk) {
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */