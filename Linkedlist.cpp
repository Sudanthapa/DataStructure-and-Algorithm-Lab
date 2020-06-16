#include<iostream>
#include<conio.h>

using namespace std;

struct Node
{
    struct Node *next;
    int data;
};
int main()
{
    struct Node *head=NULL;
    struct Node *first=NULL;
    struct Node *second=NULL;
    struct Node *third=NULL;

    first=new(struct Node);
    second=new(struct Node);
    third=new(struct Node);
    head=first;

    first->data=10;
    first->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;

    while(head!=NULL)
    {
        cout<<head->data<<"\t"<<head->next;
        cout<<"------>"<<"\t";
        head=head->next;
    }
}
