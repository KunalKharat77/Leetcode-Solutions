// 0082_Remove_Duplicates_from_Sorted_List_II.cpp

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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode dummy(0);
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr && curr->next) {
            if (curr->val == curr->next->val) {
                while (curr->next && curr->val == curr->next->val) {
                    curr = curr->next;
                }
                prev->next = curr->next;
                curr = curr->next;
            } else {
                prev->next = curr;
                prev = curr;
                curr = curr->next;
            }
        }
        if (curr) {
            prev->next = curr;
        } else {
            prev->next = nullptr;
        }
        return dummy.next;
    }
};