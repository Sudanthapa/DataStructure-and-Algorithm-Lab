#include<iostream>
#include<conio.h>
using namespace std;

struct Node
{
    struct Node *next;
    int data;

};

void insert(int data, int pos)
{
    if(pos==4)
    {
    Node *fifth=new (struct Node);
    fifth->data=10;
    fifth->next=NULL;

    }
}
int main()
{
    int n=4;
    struct Node *head=NULL;
    struct Node *first=new(struct Node);
    struct Node *second=new(struct Node);
    struct Node *third=new(struct Node);
    struct Node *fourth=new(struct Node);
    struct Node *fifth=new(struct Node);

    head=first;

    first->data=5;
    first->next=second;
    second->data=6;
    second->next=third;
    third->data=7;
    third->next=fourth;
    fourth->data=8;
    fourth->next=fifth;


    while(head!=NULL)
    {
        cout<<head->data<<"\n"<<head->next;
        cout<<"------>"<<"\t";
        head=head->next;
    }
}


