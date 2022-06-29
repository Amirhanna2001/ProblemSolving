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
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int numOfTimes = (n+k-1)/k;
    int o1=0,o2=d;
    for(int i=0;i<numOfTimes;i++){
        if(o1<=o2)
            o1+=t;
        else
            o2+=t;
    }
    if(max(o1,o2)< numOfTimes*t)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}








