#include<iostream>
#include<conio.h>
using namespace std;
void selectionsort(int a[], int n)
{
    int i,j,small,temp;
    for(i=0;i<n;i++)
    {
        small=i;

    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[small])
            small=j;
    }
   temp=a[i];
   a[i]=a[small];
   a[small]=temp;
    //cout<<"\t"<<a[i];

    }
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
}
int main()
{
    int a[6],i;
    cout<<"Enter the array\n";
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
    selectionsort(a,6);
}
