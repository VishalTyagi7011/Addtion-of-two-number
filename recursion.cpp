#include<iostream>
#include<math.h>
using namespace std;
int sum(int n);
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	int b=sum(n);
	cout <<b;
	return 0;
	
}
int sum(int n)
{
	int a=0;
	if(n!=0)
	{
	return n+ sum(n-1);
    }
	else
	{
		return n;
	   }   

	
	 
}
