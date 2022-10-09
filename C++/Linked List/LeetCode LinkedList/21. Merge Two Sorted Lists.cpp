class Solution {
public:
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        
        ListNode *fh,*ft;
        if(h1==NULL && h2==NULL)
        {
            return h1;
        }
        if(h1==NULL)
        {
            return h2;
        }
        else if(h2==NULL)
        {
            return h1;
        }
        
        
        if(h1->val<h2->val)
        {
            fh=h1;
            ft=h1;
            h1=h1->next;
        }
        else
        {
            fh=h2;
            ft=h2;
            h2=h2->next;
        }
        while(h1!=NULL && h2!=NULL)
        {
            if(h1->val<h2->val)
            {
                ft->next=h1;
                h1=h1->next;
                ft=ft->next;
                
            }
            else
            {
                ft->next=h2;
                h2=h2->next;
                ft=ft->next;
                
            }
        }
        
        if(h2==NULL)
        {
            ft->next=h1;
        }
        else
        {
            ft->next=h2;
        }
        
        return fh;
        
        
    }
};
