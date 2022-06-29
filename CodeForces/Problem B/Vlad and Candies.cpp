#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        if(n==1){
            if(a[0] == 1)
                cout<<"YES\n";
          else
            cout<<"NO\n";
            continue;
        }
        else
        {
           sort(a,a+n);
           int m = a[n-1] - a[n-2];
           if(m<=1)
            cout<<"YES\n";
           else
            cout<<"NO\n";

        }




    }
    return 0;
}
