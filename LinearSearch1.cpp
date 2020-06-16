#include<iostream>
#include<conio.h>
#define n 5
using namespace std;

int linearsearch(int a[], int target)
{
	int i;
	for(i=0;i<n;i++)
	if(a[i]==target)
	return i;

	return -1;
}
int main()
{
	int i,a[5],target;
	for(int i=0;i<5;i++)
	{
	cout<<"Enter the elements for array:";
	cin>>a[i];
	}
	cout<<"Enter the element in you want to search:";
	cin>>target;

	int index=linearsearch(a,target);
	if(index==-1)
	{
		cout<<"Element not found";
	}
	else
	cout<<"Elements found at index"<<index;

}

