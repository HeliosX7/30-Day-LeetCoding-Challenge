/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode *middleNode(ListNode *head)
{
    ListNode *slow, *fast;
    slow = fast = head;

    while (fast->next)
    {
        slow = slow->next;
        if (fast->next->next)
            fast = fast->next->next;
        else
            return slow;
    }

    return slow;
}