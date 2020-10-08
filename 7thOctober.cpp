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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* a=head;
        if(head==NULL)
            return head;
        int len=1;
        while(a->next!=NULL)
        {
            a=a->next;
            len++;
        }
        k=k%len;
        if(k==0)
            return head;
        ListNode* c=head;
        for(int i=0;i<len-k-1;i++)
        {
            c=c->next;
        }
        ListNode* b=c->next;
        c->next=NULL;
        a->next=head;
        return b;
    }
};
