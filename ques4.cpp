#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int res=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<t)
			res=a[i];
	}
	cout<<res;
}
