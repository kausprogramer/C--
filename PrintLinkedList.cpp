#include<iostream>
using namespace std;

class node
{   public:
        int data;
        node* next;
        node(int data) 
        {
            this->data=data;
            this->next = NULL;
        };

};


void print(node* head)
{
    node* temp = head;

    while(temp!=NULL)
    {
        cout<< temp-> data<<endl;
        temp=temp->next;
    }
}

int main()
{
//static allocation of linked list

    node n1(10);
    node* head=&n1;
    
    node n2(20);
    node n3(30);
    node n4(40);


    n1.next= &n2;
    n2.next= &n3;
    n3.next= &n4;


/*
dynamic allocation of nodes

    node* n1= new node(50);
    node* head= n3;

    node* n2= new node(60);
    n2->next=n1;

*/
    print(head);
return 0;
}