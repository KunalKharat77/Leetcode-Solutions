// 0328_Odd_Even_Linked_List.cpp

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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenhead = even;
        
        while(odd && odd->next && even && even->next){
            ListNode* nextodd = odd->next->next;
            ListNode* nexteven = even->next->next;
            
            odd->next = nextodd;
            even->next = nexteven;
            
            odd = odd->next;
            even = even->next;
        }
        
        odd->next = evenhead;
        
        return head;
        
    }
};