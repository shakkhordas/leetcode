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
        if (head == NULL) return NULL;
        if (head->next == NULL) return head;

        ListNode* current = head;
        ListNode* front = head->next;

        while (front != NULL) {
            if (current->val == front->val) {
                current->next = front->next;
                front = current->next;
            }
            else {
                current = current->next;
                front = front->next;
            }
        }

        return head;
    }
};
