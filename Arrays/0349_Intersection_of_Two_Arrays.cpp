// 0349_Intersection_of_Two_Arrays.cpp

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set;
        vector<int> arr;

        for (int num : nums1) {
            set.insert(num);
        }

        for (int num : nums2) {
            if (set.find(num) != set.end()) {
                arr.push_back(num);
                set.erase(num);
            }
        }

        return arr;
    }
};