#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(f+1>=a[i])
            f+=a[i];
        else
            break;
    }
    cout<<f+1;
}
