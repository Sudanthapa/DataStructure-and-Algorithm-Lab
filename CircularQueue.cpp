#include<iostream>
#include<conio.h>
using namespace std;

#define size 5
int a[size];
int rear=-1;
int front1=-1;
void enqueue(int value)
{
    if((front1==0 && rear==size-1)||(front1==rear+1))
    {
        cout<<"Queue is FULL";
    }
    else
        {
            if(front1==-1)
            front1++;
            rear=(rear+1)%size;
            a[rear]=value;
            cout<<"Value enqueued is "<<value;
        }
}
void dequeue()
{
    if(front1==-1)
    {
        cout<<"Queue is EMPTY";
    }
    else
    {
            front1=(front1+1)%size;
            cout<<"Value dequeued";
    }

}
void Front()
{
    if(front1==-1)
     {
        cout<<"Queue is EMPTY";
     }
    else
    {
            cout<<"Front item is"<<a[front1];
    }
}

void display()
{
    int i,j;
    int r=rear;
    int f=front1;
    if(front1==-1)
     {
        cout<<"Queue is EMPTY";
     }


         if(r>f)
         {
            for(i=f;i<=r;i++)
            {
                cout<<"\t"<<a[i];
            }
         }
        else
        {
            for(i=f;i<=size-1;i++)
            {
                cout<<"\t"<<a[i];
            }
            for(j=0;j<=r;j++)
            {
                cout<<"\t"<<a[i];
            }
        }

}

int main()
{
    int b,value;


    do{
            cout<<"\n\nEnter::\n\n 1:ENQUEQUE\n 2:DEQUEUE\n 3:FRONT\n 4:DISPLAY\n 5:EXIT\n\n\n";
            cin>>b;
            cout<<"You have selected options "<<b<<"\n";
    switch(b)
    {
    case 1:
        {
            cout<<"\n\nEnter the value to be ENQUEUED\n\n";
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



