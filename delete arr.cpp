#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int size , element ;
	int delet;
	cout<<"Enter the size of array:\n";
	cin>>size;
	cout<<"Enter the element of array:";
	for(int i=0;i<size;i++)
	{
	cin>>element;
	cout<<endl;
     }
     cout<<"Enter the element you want to delete:";
     cin>>delet;
     for(int i=0;i<size;i++)
     {
     	if(arr[i]==delet)
     	{
     		cout<<"delete";
     		
     		
		 }
		 else
		 {
		 	cout<<arr[i]<<"\t";
		 }
	 }
     
     
     return 0;
}






