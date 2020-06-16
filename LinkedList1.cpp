#include<iostream>
#include<conio.h>

using namespace std;

struct Node
{
    struct Node *next;
    int data;
};
struct Node *head=NULL;

void insert(int data, int pos)
{

    Node *temp1=new (struct Node);
    temp1->data=data;
    temp1->next=NULL;

    if(pos==1)
    {
      temp1->next=head;
      head=temp1;
      return;
    }
    else{
    Node *temp2=head;

    for(int i=0;i<pos-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
}

void display()
{
   struct Node *temp=head;
   while(temp!=NULL)
    {
        cout<<temp->data<<"--->";
        temp=temp->next;
    }
}

int main()
{
        int choice,data,pos;

    do{
            cout<<"\n\nEnter Your Choices::\n\n 1:INSERT\n 2:DISPLAY\n 3:EXIT\n\n\n";
            cin>>choice;
            cout<<"You have Select options "<<choice<<"\n";

        switch(choice)
    {
    case 1:
        {
            cout<<"\n\nEnter the Data to be insert";
            cin>>data;
            cout<<"Enter the position";
            cin>>pos;
            insert(data,pos);
            break;
        }
        case 2:
        {
            display();
            break;
        }
        default:
            cout<<"Invalid! Invalid! Invalid! Invalid! Invalid!\n";
}
    }

        while(choice!=3);


}
