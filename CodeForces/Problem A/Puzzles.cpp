#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i =0; i<m; i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int res = a[n-1] - a[0];
    for(int i=1;i<=m-n;i++)
        res = min(res,a[n+i-1] - a[i]);


        cout<<res;

    return 0;
}
