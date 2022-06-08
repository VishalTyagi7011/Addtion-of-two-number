#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,5,4,6,8,7,1};
	int min=arr[0];
	for(int i=0;i<7;i++){
		if(arr[i]>min)
		{
			cout<<arr[i]<<"\t";
			
		}
		else
		{
			cout<<min;
		}
	}
	return 0;
}