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
    bool flag ;
    int t;
    cin>>t;
    int n,tmp,ctr,j;
    string str;
    while(t--)
    {
        ctr=0;
        flag =1;
        cin>>str;
        n = str.size();
        for(int i=0; i<n; i++)
        {
            ctr=0;

            for( j=i+1;j<n;j++){
                if(str[i]!=str[j])
                    break;
                else
                    ctr++;
            }
            if( ctr==0){
                flag = 0;
                break;
            }
            i=j-1;
            if(!flag)
                break;

        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";


    }
    return 0;
}
