#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m=2;
	cin>>n;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int res=a[0][0],t=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>=res)
			{
				res=a[i][j];
			}
			else{
				t=1;
				break;
			}
		}
	}
	if(t==0)
		cout<<"True";
	else
		cout<<"False";
}
