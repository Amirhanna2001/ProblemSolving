#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
ll gcd(ll a,ll b)
{
    //gcd(a,b) = gcd(b,a%b)
    ll tmp ;
    while(b)
    {
        tmp = a;
        a =b;
        b = a%b;
    }
    return a;
}

int main()
{
    Amir
    bool flag ;
    int t;
    cin>>t;
    int n,ctr,j;
    ll sm;
    while(t--)
    {
        sm=0;
        flag = 1;
        cin>>n;
        int ar[n];
        fr(i,n) cin>>ar[i];
        if(n==1){
            cout<<"YES\n";
            continue;
        }
        for(int i=1;i<n;i++)
            sm+=(ar[i]-ar[i-1]);

        if(sm==n||abs(sm-n) == 1)
            cout<<"YES\n";
        else
            cout<<"NO\n";


    }
    return 0;
}
