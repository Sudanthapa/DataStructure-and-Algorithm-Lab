#include<iostream>
#include<conio.h>
#define n 5
using namespace std;

int binarysearch(int a[], int target, int l, int r)
{
    while(r>0)
    {
        int mid=(l+r)/2;
        if(a[mid]==target)
            return mid;
        if(a[mid>target])
            return(binarysearch(a,target,l,mid-1));
        return(binarysearch(a,target,mid+1,r));
    }
    return -1;
}
int main()
{
	int a[5],target,l,r;
	for(int i=0;i<5;i++)
	{
	cout<<"Enter the elements for array:";
	cin>>a[i];
	}
	cout<<"Enter the element in you want to search:";
	cin>>target;

	int index=binarysearch(a,target,l,r);
	if(index==-1)
	{
		cout<<"Element not found";
	}
	else
	cout<<"Elements found at index"<<index<<"\t"<<a[index];

}
