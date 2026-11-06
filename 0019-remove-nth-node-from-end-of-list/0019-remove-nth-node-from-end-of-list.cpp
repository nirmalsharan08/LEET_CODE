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
        if (!head || !head->next && n > 1)
            return head;
        ListNode* tail = head;
        int count = 1;
        while (tail->next) {
            tail = tail->next;
            count++;
        }
        if (count < n)
            return head;
        if (count == n)
            return head->next;
        ListNode* temp=head;
        int size=count-n-1;
        for(int i=0;i<size;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};