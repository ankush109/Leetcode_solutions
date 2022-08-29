

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next() {}
};

class Solution
{
public:
    int length(ListNode *a)
    {
        int count = 0;
        ListNode *temp = a;
        while (temp)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *h1 = headA;
        ListNode *h2 = headB;

        int l1;
        int l2;
        int c = 0;

        if (l1 > l2)
        {
            int d = l1 - l2;
            while (headA && c < d)
            {
                headA = headA->next;
                c++;
            }
            while (headA != headB)
            {
                headB = headB->next;
                headA = headA->next;
            }
            if (headA && headB)
            {
                return headA;
            }
            else
            {
                // return NULL;
            }
        }
        else
        {
            int d = l2 - l1;
            while (headB && c < d)
            {
                headB = headB->next;
                c++;
            }
            while (headA != headB)
            {
                headA = headA->next;
                headB = headB->next;
            }
            if (headB && headA)
            {
                return headB;
            }
            else
            {
                // return NULL;
            }
        }
    }
};