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
    int n,b,d,x;
    cin>>n>>b>>d;
    //int ar[n];
    //fr(i,n) cin>>ar[i];
    int ctr=0,sum=0;
    fr(i,n){
        cin>>x;
        if(x<=b)
            sum+=x;
        if(sum>d){
            ctr++;
            sum=0;
        }

    }
    cout<<ctr;
    return 0;
}








