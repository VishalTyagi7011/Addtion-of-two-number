#include<iostream>
using namespace std;
int main()
{
	
	int arr[]={23,45,34,12,56,32};
	int max= arr[0];
	for(int i=0;i<6;i++)
      {
      	if(max<arr[i])
      	{
      		max=arr[i];
      		cout<<max<<endl;
		  }
		  else
		  {
		  	cout<<arr[i]<<endl;
		  }
      	
	  }
	  //cout<<max;
	  return 0;
}