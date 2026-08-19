// 0086_Partition_List.cpp

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* curr = head;
        ListNode dummyl(0);
        ListNode dummyh(0);
        
        ListNode* small = &dummyl;
        ListNode* large = &dummyh;
        
        while(curr){
            if(curr->val >= x){
                large->next = curr;
                large = curr;
                curr = curr->next;
            }
            else{
                small->next = curr;
                small = curr;
                curr = curr->next;
            }
        }
        
        large->next = NULL;
        small->next = dummyh.next;
        
        return dummyl.next;
    }
};