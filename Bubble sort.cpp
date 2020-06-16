#include<iostream>
#include<conio.h>
using namespace std;

void bubblesort(int a[], int n)
{
    int p,i,temp;
    for(p=1;p<n;p++)
    {
        for(i=0;i<n-p;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;

            }

        }
    }
for(i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }


}
int main()
{
    int i,a[5];
        cout<<"Enter the array=\n";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,5);

}
