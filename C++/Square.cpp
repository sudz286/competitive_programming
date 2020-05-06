#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int sumofsq,sqofsum,diff,n;
    cin>>n;
    sqofsum=0;
    for(int i=1;i<=n;i++)
    {
        sumofsq+=i*i;
        cout<<sumofsq<<"\n";
    }
    for(int i=1;i<=n;i++)
    {
    	sqofsum+=i;
    	cout<<sqofsum<<"\n";
	}
    sqofsum=pow(sqofsum,2.0);
    cout<<sqofsum<<"\n";
    cout<<sumofsq;
    diff=sqofsum-sumofsq;
    cout<<diff;
}
