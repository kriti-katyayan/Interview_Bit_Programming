
/*Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively.

Notes:

Expected solution is linear in time and constant in space.
For example,

List 1-->2-->1 is a palindrome.
List 1-->2-->3 is not a palindrome.
=======================================================================================================================================
*/

int Solution::lPalin(ListNode* A) {
ListNode *temp=A;
stack<ListNode*> s;
while(temp!=NULL)
{
    s.push(temp);
    temp=temp->next;
}

while(!s.empty())
{
    if(s.top()->val!=A->val)
    {
        return 0;
    }
    s.pop();
    A=A->next;
}
return 1;
}
