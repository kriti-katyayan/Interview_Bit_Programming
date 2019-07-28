//least optimal solution

/*
Write a program to find the node at which the intersection of two singly linked lists begins.

For example, the following two linked lists:


A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗
B:     b1 → b2 → b3

begin to intersect at node c1.

 Notes:
If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Your code should preferably run in O(n) time and use only O(1) memory.

*/

//SOLUTION 1

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
//finds the length of list
int  length(struct ListNode *head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    
    int l1=length(A);
    int l2=length(B);
    struct ListNode* head2=B;
    for(int i=0;i<l1;i++){
        B=head2;
        for(int j=0;j<l2;j++){
            if(A==B)
            return A;
            B=B->next;
        }
        A=A->next;
    }
    return NULL;
}


//BEST SOLUTION

ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    
if(A==NULL || B==NULL)
  return NULL;
  ListNode *s=A; //head of A
  ListNode *t=B;  //head of B
  while(s!=t){
              if(s==NULL){
                  s=B;
              }
              else
                s=s->next;
            
            if(t==NULL)
                t=A;
            else
                t=t->next;
  }
  return s;

}
