// 0160_Intersection_of_Two_Linked_Lists.cpp

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;
        
        // If they don't intersect, they will both hit NULL at the same time and break the loop.
        while (ptrA != ptrB) {
            // If ptrA reaches the end, teleport it to the start of List B
            ptrA = (ptrA != NULL) ? ptrA->next : headB;
            
            // If ptrB reaches the end, teleport it to the start of List A
            ptrB = (ptrB != NULL) ? ptrB->next : headA;
        }
        
        return ptrA;
    }
};