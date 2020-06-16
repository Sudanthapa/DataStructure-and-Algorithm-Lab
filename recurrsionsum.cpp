#include<iostream>
#include<conio.h>

using namespace std;

int sumN(int n)
{
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else if(n % 2 == 0)
		return n+sumN(n-2);
	else
		return sumN(n-1);
}

int main()
{
	int num, sum;
        cout<<"Please enter the number of sum of even numbers you want.\n";
		cin>>num;
		sum = sumN(num);
		cout<<"The result is: "<<sum<<"\n";

}
