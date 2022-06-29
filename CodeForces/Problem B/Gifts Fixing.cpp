#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
using namespace std;
int main()
{
    ll t,n,mna,mnb,res;
    cin>>t;
    ll a[50];
    ll b[50];

    while(t--)
    {
        res = 0;
        cin>>n;
        fr(i,n)
          cin>>a[i];
        fr(i,n)
            cin>>b[i];

        mna = a[0];
        mnb = b[0];
        fr(i,n)
        {
            if(a[i]<mna)
                mna = a[i];
            if(b[i]<mnb)
                mnb = b[i];
        }
        fr(i,n)
        {
            res+=max(a[i]-mna,b[i]-mnb);
        }

       cout<<res<<endl;

    }
}
