// 0021_Merge_Two_Sorted_Lists.cpp

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tail;
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        if (curr1->val > curr2->val) {
            tail = curr2;
            curr2 = curr2->next;
        } else {
            tail = curr1;
            curr1 = curr1->next;
        }

        ListNode* myHead = tail;

        while (curr1 && curr2) {
            if (curr1->val < curr2->val) {
                ListNode* next = curr1->next;
                tail->next = curr1;
                tail = curr1;
                curr1 = next;

            } else {
                ListNode* next = curr2->next;
                tail->next = curr2;
                tail = curr2;
                curr2 = next;
            }
        }

        if (curr1)
            tail->next = curr1;

        if (curr2)
            tail->next = curr2;

        return myHead;
    }
};