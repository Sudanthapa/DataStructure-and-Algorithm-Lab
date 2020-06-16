#include<iostream>
#include<conio.h>
using namespace std;

void insertionsort(int a[], int n)
{
    int i,temp,j;
    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i;
        while(j>0 && temp<a[j-1])
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;
    }
        for(i=0;i<n;i++)
        {
        cout<<"\t"<<a[i];
        }
}

/*void display(int a[], int n)
{
    int i;
    for(i=0;i<0;i++)
    {
        cout<<"\n"<<a[i];
    }

}*/
int main()
{
    int a[6],i;
        cout<<"Enter the array=\n";
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
    insertionsort(a,6);

}
