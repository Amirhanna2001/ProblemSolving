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
    int t,sm,b,c,x,n,flg,ctr;
    cin>>t;
    string s;

    while(t--){
        cin>>s;
        n = s.size();
        ctr=0;
        fr(i,n){
            if(s[i] == '?') ctr++;
            else if(s[i] == '1')
                ctr=1;
            else {
                ctr++;
                break;

            }


        }
        cout<<ctr<<endl;
    }

    return 0;
}







 