#include<iostream>
#include<conio.h>

using namespace std;

int product(int n)
{
	if(n == 1)
		return 1;
	else//else (n % 2 == 0)
		return n*product(n-1);

}

int main()
{
	int num,p;
		cout<<"Please enter the number of sum of even numbers you want.\n";
		cin>>num;
		p = product(num);
		cout<<"The result is: "<<p<<"\n";

}
