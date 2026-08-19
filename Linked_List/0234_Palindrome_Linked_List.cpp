// 0234_Palindrome_Linked_List.cpp

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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        if (!head || !head->next)
            return true;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = NULL;

        while (slow) {
            ListNode* next = slow->next;

            slow->next = prev;
            prev = slow;
            slow = next;
        }

        ListNode* Head = head;
        while (prev && Head) {
            if (prev->val != Head->val) {
                return false;
            }
            prev = prev->next;
            Head = Head->next;
        }

        return true;
    }
};