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
    int x,y,t;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(y%x == 0)
            cout<<"1 "<<y/x<<endl;
        else
            cout<<"0 0\n";
    }
    return 0;
}








