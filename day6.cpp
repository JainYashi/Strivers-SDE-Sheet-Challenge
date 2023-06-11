//find intersection of y linkedlist
/*
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node *p=firstHead;
        Node *q=secondHead;
        while(p || q){
            if(p==NULL)
            p=secondHead;
            else if(q==NULL)
            q=firstHead;
            else if(p==q)
            return p;
            else{
                p=p->next;
                q=q->next;
            }
        }
        return NULL;
}
*/

//detect cycle in linked list
/*
bool detectCycle(Node *head)
{
if(head==NULL)
            return false;
        Node *p,*q;
        p=q=head;
        do{
            p=p->next;
            q=q->next;
            if(q)
                q=q->next;
        }while(p && q && p!=q);
        if(p && q && p==q)
            return true;
        return false;
        }
*/
//reverse a linked list in group of size k
/*
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
	stack<int>s;
    Node* ptr=head;
    Node* dummy=new Node(-1);
    Node* temp=dummy;
    for(int i=0;i<n;i++)
    {
        while(b[i]!=0 && ptr!=NULL)
        {
           s.push(ptr->data);
           ptr=ptr->next;
           b[i]--;
        }
        while(!s.empty())
        {
           Node* x=new Node(s.top());
           s.pop();
           temp->next=x;
           temp=temp->next;
        }
    }
    while(ptr!=NULL)
    {
temp->next=ptr;
		        ptr=ptr->next;
 temp=temp->next;
    }
return dummy->next;
}
*/
//check if linked list is palindrome or not
/*
LinkedListNode<int>* rev(LinkedListNode<int>* h){
    LinkedListNode<int>* r= NULL;
    LinkedListNode<int>* q= NULL;
    LinkedListNode<int>* p= h;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    return q;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL)
    return true;
    LinkedListNode<int> *p=head;
       LinkedListNode<int> *q=head;
        while(p->next && p->next->next){
            p=p->next->next;
            q=q->next;
        }
LinkedListNode<int>* second=rev(q->next);
p=head;
while(second){
    if(p->data!=second->data)
    return false;
    second=second->next;
    p=p->next;
}
     return true; 

}
*/
//find starting point of loop
/*
Node *firstNode(Node *head)
{
    //    Write your code here.
    if(head==NULL || head->next==NULL)
            return NULL;
        Node* p=head;
        Node* q=head;
        Node* entry=head;
       /* do{
            q=q->next;
            p=p->next;
            if(p)
            p=p->next;

        }while(p && p!=q);
        
        if(p==NULL)
        return NULL;
while(q!=entry){
    q=q->next;
    entry=entry->next;
}
return entry;*/
/*while(p->next && p->next->next){
    q=q->next;
    p=p->next->next;
    if(p==q){
        while(entry!=q){
            q=q->next;
            entry=entry->next;
        }
        return entry;
    }
}
return NULL;
}
*/
//flattening of linked list
/*
Node *mergeLists(Node *a,Node *b){
    Node *temp= new Node(0);
    Node *res=temp;
    while(a && b){
        if(a->data<b->data){
            temp->child=a;
            temp=temp->child;
            a=a->child;
        }
        else{
            temp->child=b;
            temp=temp->child;
            b=b->child;
        }
    }
        if(a){
            temp->child=a;
        }
        else{
            temp->child=b;
        }
        return res->child;
}

 Node* flattenLinkedList(Node* head) 
{
    if(!head->next){
        return head;
    }
    Node *down= head;
    Node *right = head->next;
    right= flattenLinkedList(right);
    down->next= NULL;
    Node *ans=mergeLists(down,right);
    return ans;
}

*/