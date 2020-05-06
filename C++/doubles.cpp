#include<iostream>
using namespace std;

int main()
{
	int a[15],n;
	cout<<"Enter N:";
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
		
	for(int i=0;i<n-1;i++){
		for(int j =i+i;j<n;j++){
			if(2*a[i] == a[j]){
				cout<<a[i]<<"\t";
			}
		}
	}

}