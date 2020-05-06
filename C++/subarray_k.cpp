#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector <int> v= {5,4,1,3,5,3,6,8};
	make_heap(v.begin(),v.end());
	cout<<v.front();
	return 0;
}