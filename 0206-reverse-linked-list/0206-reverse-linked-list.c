struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev=NULL;
    struct ListNode *newnode=NULL;
    struct ListNode *current=head;

    while(current!=NULL){
        newnode=current->next;
        current->next=prev;
        prev=current;
        current=newnode;
    }

    head=prev;
    return head;   
}