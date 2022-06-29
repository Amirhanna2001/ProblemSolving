#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,tmp,s;
    cin>>t;
    int a[31];
    int b[31];
    while(t--)
    {
        s=0;
        cin>>n>>k;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);

        for(int i=0; i<k; i++)
        {
            if(a[i]<b[n-i-1])
            {
                tmp = a[i];
                a[i] = b[n-i-1];
                b[n-i ] = tmp;

            }
            else
                break;

        }
        for(int i=0; i<n; i++)
            s+=a[i];
        cout<<s<<endl;


    }
    return 0;
}
