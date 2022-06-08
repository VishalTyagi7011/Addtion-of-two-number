#include <iostream>
#include<cstring>
using namespace std;
int main() {
	string a=" ";
	int temp=0;
	string arrange=" ";
	string mix=" ";
	
	string merge=" ";
	cout<<"Enter the string:";
	cin>>a;
	cout<<"Enter the  number wali string:";
	cin>>mix;
	int len=a.length();
	for(int i=0; i<len; i++) {
		if(a[i]=='*') {
			temp=i;
			for(int j=0; j<temp; j++) {
				arrange+=a[j];
				arrange+=a[j+temp+1];
			}
			for(int k=2*temp+1; k<len; k++) {
				arrange+=a[k];
			}
		}
	}
	cout<<arrange;
	for(int i=0; i<len; i++) {
		merge+=arrange[i];
		merge+=mix[i];
	}
	cout<<merge;



}
