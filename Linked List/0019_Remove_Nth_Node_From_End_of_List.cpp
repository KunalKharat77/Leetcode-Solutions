// 0019_Remove_Nth_Node_From_End_of_List.cpp

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* left = &dummy;
        ListNode* right = &dummy;

        while (right->next) {
            right = right->next;
            n--;
            if (n <= 0 && right->next) {
                left = left->next;
            }
        }

        left->next = left->next->next;

        return dummy.next;
    }
};