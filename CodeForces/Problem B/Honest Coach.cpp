#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,mn,res;
    int arr[1000];
    cin>>t;
    while(t--)
    {

        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);

        res = mn = arr[n-1]-arr[0];
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
        {
            res = min(res,arr[j] -arr[i]);

        }

        cout<<res<<endl;

    }

    return 0;
}
