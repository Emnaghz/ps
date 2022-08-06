/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //-----problem link: https://leetcode.com/problems/linked-list-cycle-ii/ ------
 //-------video youtube explaining link: https://www.youtube.com/watch?v=PvrxZaH_eZ4 -------
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                {
                    fast = head;
                    while(fast != slow)
                    {
                        slow = slow->next;
                        fast = fast->next;
                    }
                    return fast;
            }
        }
        return NULL;
    }
};