#include<iostream>
using namespace std;

int main()
{
	int a[10][10],r,c,i,j;
	cout<<"Enter number of rows and columns: ";
	cin>>r>>c;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>a[i][j];
	for(j=0;j<c;j++)
	{
		cout<<a[0][j]<<"-->";
	}
	for(j=1;j<r;j++)
	{
		cout<<a[j][c-1]<<"-->";
	}
	for(j=r-2;j>=0;j--)
	{
		cout<<a[r-1][j]<<"-->";	
	}
	/*for(j=c-2;j>=0;j--)
	{
		cout<<a[j][c-1]<<"-->";	
	}
		
		
for j in range(0,c):
	print("%d ->"%arr[0][j])
for j in range(0,r):
	print("%d ->"%arr[j][c])
for j in range(r,0,-1):
	print("%d"%arr[r][j])
for j in range(c,0,-1):
	print("%d"%arr[j][c])*/

}
