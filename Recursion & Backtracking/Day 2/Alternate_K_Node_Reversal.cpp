#include<bits/stdc++.h>
using namespace std;
class Node
	{
	public:
	    int data;
	    Node *next;
	    Node(int data)
	    {
	        this->data = data;
	        this->next = NULL;
	    }
	};
Node* reversek(Node* &head,int k){
    Node* ptr=head;
    if(k==1||ptr->next->data==-1)
    {
        return ptr;
    }
    head=ptr->next;
    Node* temp=reversek(head,k-1);
    ptr->next=temp->next;
    temp->next=ptr;
    return ptr;
}
Node* reverseAlternateKNodes(Node* head, int k)
{
    if(head->next==NULL){return head;}
    Node* temp=reversek(head,k);
    for(int i=0;i<k&&temp->next->data!=-1;i++)
    {
        temp=temp->next;
    }
    temp->next=reverseAlternateKNodes(temp->next,k);
    return head;
}
int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    head->next->next->next->next->next=new Node(6);
    head->next->next->next->next->next->next=new Node(7);
    head->next->next->next->next->next->next->next=new Node(-1);
    head=reverseAlternateKNodes(head,2);
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    
    return 0;
}