#include<iostream>
using namespace std;
void push()
{
	int size,top;
	if(top>size)
	{
		cout<<"stack overflow";
	}
	else
	{
		top=top+1;
		cout<<top;
		
	}
}
void pop()
{
	int top;
	if(top<0)
	{
		cout<<"there is no element in stack";
	}
	else
	{
		top=top-1;
		cout<<top;
	}
}


int main()
{
	int size, limit, arr[100],top ,action;
	cout<<"enter the size of stack:";
	cin>>size;
	cout<<"How much element you want to put down into stack:";
	cin>>limit;
	for(int i=0;i<limit;i++)
	{
		cout<<"enter element :";
		cin>>arr[i];
	}
	top=limit-1;
	cout<<"Press 1 :- for push\n";
	cout<<"Press 2:- for pop";
	cin>>action;
	if(action=1)
	{
		push();
	}
	else
	{
		pop();
	}
	
	
	
	return 0;
}