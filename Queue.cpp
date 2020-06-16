#include<iostream>
#include<conio.h>
using namespace std;

#define size 5
int a[size];
int rear=-1;
int front1=-1;

void enqueue(int value)
{
    if(rear==size-1)
    {
        cout<<"Queue overflow";
    }
    else
        {
            if(front1==-1)
            front1++;
            rear++;
            a[rear]=value;
            cout<<"Value enqueued is "<<value;
        }
}

void dequeue()
{
    if(front1==-1)
    {
        cout<<"Queue underflow";
    }
    else
    {
            front1++;
            cout<<"Value dequeued";
    }

}

void Front()
{
    if(front1==-1)
     {
        cout<<"Queue underflow";
     }
    else
    {
            cout<<"Front item is"<<a[front1];
    }
}

void display()
{
    int i;
    for(i=front1;i<=rear;i++)
    {
        cout<<"\t"<<a[i];
    }
}

int main()
{
    int i,b,value;

    do{
            cout<<"\n\nEnter::\n\n 1:ENQUEQUE\n 2:DEQUEUE\n 3:FRONT\n 4:DISPLAY\n 5:EXIT\n\n\n";
            cin>>b;
            cout<<"You have Select options "<<b<<"\n";
    switch(b)
    {
    case 1:
        {
            cout<<"\n\nEnter the value to be ENQUEUED";
            cin>>value;
            enqueue(value);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            Front();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            exit(0);
            break;
        }
        default:
            cout<<"Invalid\n";
    }
}
        while(b!=5);
        return 0;
}
