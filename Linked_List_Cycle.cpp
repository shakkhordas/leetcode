/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
//    unordered_set<ListNode*> visited;
//    bool hasCycle(ListNode *head) {
//        if (head == NULL || head->next == NULL)
//            return false;
//        visited.insert(head);
//        if (visited.find(head->next)!=visited.end())
//            return true;
//        return hasCycle(head->next);
//    }
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast!=NULL && fast->next!=NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) return true;
        }

        return false;
    }

};
