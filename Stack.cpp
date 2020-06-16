#include<iostream>
#include<conio.h>
using namespace std;

#define size 5
int a[size];
int top= -1;

void push(int value)
{

    if(top== size-1)
    {
        cout<<"Stack overflow\n";
    }
    else
        {
            top++;
            a[top]=value;
            cout<<"Value Pushed is "<<value;
        }
}
void pop()
{

    if(top== -1)
    {
        cout<<"Stack underflow\n";
    }
    else
        {
            top--;
            cout<<"Value popped out successfully\n";
        }
}
void peek()
{

    if(top== -1)
    {
        cout<<"Stack underflow\n";
    }
    else
        {
            cout<<"Top of the stack is\n"<<a[top];
        }
}
void display(int a[],int n)
{
    int i;

    for(i=0;i<=top;i++)
    {
        cout<<a[i];
    }
}

int main()
{
    int i,b,value;

    do{
            cout<<"\n\nEnter::\n 1:PUSH\n 2:POP\n 3:PEEK\n 4:DISPLAY\n 5:EXIT\n";
            cin>>b;
    switch(b)
    {
    case 1:
        {
            cout<<"Enter the value to be pushed\n\n";
            cin>>value;
            push(value);

            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peek();
            break;
        }
        case 4:
        {
            display(a,size);
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
