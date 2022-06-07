#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void trans(Node *temp)
{
    if(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
        trans(temp);
    }
    
    
}
int main()
{
Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
    Node *temp= head;
    trans(temp);
    return 0;
}