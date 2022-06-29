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
    int t,a,b,c,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>x>>y;
        if(a>=x&&b>=y)
            cout<<"YES\n";
        else{
            x-=a;
            y-=b;
            if(x>0)
                c-=x;
            if(y>0)
                c-=y;
            if(c>=0)
                cout<<"YES\n";

           else
            cout<<"NO\n";

        }

    }

    return 0;
}








