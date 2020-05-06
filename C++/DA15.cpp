#include<iostream>
using namespace std;

int main()
{
	int n,a[20][20];
	cout<<"Enter number of terms to display\n";
	cin>>n;
	cout<<"\n";
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
		{
			if(j==1||j==i)
			{
				a[i][j]=1;
				cout<<a[i][j]<<"\t";
			}
			else
			{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
				cout<<a[i][j]<<"\t";
			}
		}
		cout<"\n";
}



