#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data    ;
    Node* next;
    Node(int data) {
        this.data=data;
    }

}
int main()
{
Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
    Node *temp3=new Node(40);
	head.next=temp1;
	temp1.next=temp2;
    temp2.next=temp3;
    Node temp= head;
    cout<<temp.data<<endl;
    while(temp.next!= NULL)
    {
        cout<<temp.next.data<<endl;
        temp=temp.next;
    }
    return 0;
}