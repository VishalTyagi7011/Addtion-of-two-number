#include<iostream>
using namespace std;
int array(int arr[100],int size) {
	for(int i=0; i<size; i++) {
		for(int j=i+1; j<size; j++) {
			if(arr[i]==arr[j]) {
				cout<<arr[i];
			}
		}
	}


}
int main() {
	int arr[100],size,element;
	cout<<"enter the size of array:";
	cin>>size;
	cout<<"enter the element of array";
	for(int i=0; i<size; i++) {
		cin>>arr[i];
	}
	array(arr,size);
	return 0;
}