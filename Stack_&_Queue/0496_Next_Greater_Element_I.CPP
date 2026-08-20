// 0496_Next_Greater_Element_I.CPP

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> map;

        for (int i = 0; i < nums2.size(); i++) {
            for (int j = i; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    map[nums2[i]] = nums2[j];
                    break;
                } else {
                    map[nums2[i]] = -1;
                }
            }
        }

        for(int n : nums1){
            ans.push_back(map[n]);
        }
        return ans;
    }
};