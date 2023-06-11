//Reverse linked list
/*

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *r=NULL,*q=NULL,*p=head;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    return q;

}
*/
//find middle of linked list
/*
Node *findMiddle(Node *head) {
    // Write your code here
    if(!head || !head->next)
    return head;
    Node *slow=head,*fast=head;
    while(fast){
        slow=slow->next;
        fast=fast->next;
        if(fast)
        fast=fast->next;
        if(fast && !fast->next)
        break;
    }
    return slow;
}
*/
//merge two sorted linked list
/*
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* head=new Node<int>(0);
    Node<int> *temp=head,*p=first,*q=second;
    while(p && q){
        if(p->data<q->data){
          temp->next=p;
          p=p->next;
          temp=temp->next;
        } else {
          temp->next = q;
          q = q->next;
          temp = temp->next;
        }
    }
    if(p)
    temp->next=p;
    if(q)
    temp->next=q;
    return head->next;
}
*/
//remove nth node from back of linked list
/*
Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node* dummy=new Node(0,head);
    Node *p=dummy,*q=dummy;
    int n=K;
    while(q->next){
q=q->next;
if(n<=0)
p=p->next;
n--;

    }
    if(p->next==head)
    return head->next;
    p->next=p->next->next;
    return head;
}

*/
//add two number as linked list
/*
Node *addTwoNumbers(Node *l1, Node *l2)
{
Node *p,*q,*r,*head;
        p=l1;
        q=l2;
        int sum=0,c=0,i=0;
        while(p || q || c!=0){
            if(p) sum=p->data;
            if(q) sum=sum+q->data;
            sum=sum+c;
            Node* t= new Node();
            t->data=sum%10;
            t->next=NULL;
            c=sum/10;
            sum=0;
            if(i==0){
                head=t;
                r=t;
                i++;
            }
            else{
                r->next=t;
                r=r->next;
            }
            if(p)
                p=p->next;
            if(q)
                q=q->next;
        }
        return head;
        }
*/
//delete given node
/*
void deleteNode(LinkedListNode<int> * node) {
    // Write your code 
    while(node->next){
            node->data=node->next->data;
            if(node->next->next==NULL){
                node->next=NULL;
                break;
            }

            node=node->next;
        }
}
*/