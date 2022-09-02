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
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *prev, *cur;
        cur = head;
        prev = NULL;

        while (cur != NULL)
        {
            if (val == cur->val)
            {
                if (prev != NULL)
                {
                    prev->next = cur->next;
                    delete (cur);
                    cur = prev->next;
                }
                else
                {
                    head = head->next;
                    delete (cur);
                    cur = head;
                }
            }
            else
            {
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};