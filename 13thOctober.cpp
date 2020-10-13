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
    vector<int> arr;
    ListNode* insert(ListNode* head,int val)
    {
        ListNode* newnode=new ListNode;
        newnode->val=val;
        ListNode *a=head;
        if(head==NULL)
            head=newnode;
        else
        {
            while(a->next!=NULL)
            {
                a=a->next;
            }
            a->next=newnode;
        }
        return head;
    }
    ListNode* sortList(ListNode* head) {
        ListNode* a=head;
        while(a!=NULL)
        {
            arr.push_back(a->val);
            a=a->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* head1=NULL;
        for(int i=0;i<arr.size();i++)
        {
            head1=insert(head1,arr[i]);
        }
        return head1;
    }
};
