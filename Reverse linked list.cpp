/*Reverse a linked list. Do it in-place and in one-pass.

For example:
Given 1->2->3->4->5->NULL,

return 5->4->3->2->1->NULL.

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* head) {
    ListNode *temp,*prev,*next;
    temp=head;
    prev=NULL;
    while(temp!=NULL){
        next=temp->next ;//200
        temp->next=prev; //
        prev=temp;
        temp=next;
        
    }
    head=prev;
    return head;
}
