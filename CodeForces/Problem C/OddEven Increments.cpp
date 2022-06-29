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
    int t,ev,od,ev2,od2;
    bool flag ;
    cin>>t;
    int n,tmp;
    while(t--)
    {
        ev=od=0;
        flag = 1;
        cin>>n;
        int ar [n];
        fr(i,n) cin>>ar[i];
        if(ar[0]%2 == 0)
        {
            fr(i,n)
            if(ar[i]%2 == 1)
            {
                flag = 0;
                break;
            }
        }

        else
        {
            fr(i,n)
            if(ar[i]%2 == 0)
            {
                flag = 0;
                break;
            }
        }


        if(flag)
        {
            cout<<"YES\n";
            continue;
        }
        if(ar[0]%2 == 0)
        {
            for(int i=0; i<n; i+=2)
            {
                if(ar[i]%2 == 0)
                    ev++;
            }


            for(int i=1; i<n; i+=2)
            {
                if(ar[i]%2 == 1)
                    od++;
            }

        }
        else
        {
            for(int i=1; i<n; i+=2)
            {
                if(ar[i]%2 == 0)
                    ev++;
            }


            for(int i=0; i<n; i+=2)
            {
                if(ar[i]%2 == 1)
                    od++;
            }
        }


        if(ev+od != n)
            cout<<"NO\n";
        else if(abs(ev-od) == 0 || abs(ev-od) == 1 )
            cout<<"YES\n";
        else
            cout<<"NO\n";


    }
    return 0;
}
