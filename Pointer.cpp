#include<iostream>
#include<conio.h>

using namespace std;

int a[5]={1,2,3,4,5};
int *p[5],i;

int main()
{

    for(i=0;i<5;i++)
    {
        p[i]=&a[i];
        cout<<p[i]<<"\t";
    }
}
