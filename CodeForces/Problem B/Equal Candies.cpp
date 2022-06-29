#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
/*  Constant Algorithms
    complexity           Max n
    o(log(n))            10 ^ 18
    o(n)                 100 000 000
    o(n log(n))          40 000 000
    o(n^2)               10 000
    o(n^3)               500
    o(n^4)               90
    o(2^n)               20
    o(N!)                10

*/
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
int countOccurance(){
    int n,cnt,mx=0,num,nn;
    cin>>n;
    int ar[n];
    fr(i,n) cin>>ar[i];
    fr(i,n){
        cnt=0;
        for(int j=i;j<n&&ar[i] == ar[j];j++){
            cnt++;
            num = ar[i];
        }
         if(mx<cnt){
        mx = cnt;
        nn = num;
        }
        i = i+cnt-1;
    }

    return mx;
}
ll fastPower(ll x, ll n){
    ll res = 1;
    while(n){
        if (n%2!=0) res *=x;
        x=x*x;
        n/=n;
    }
    return res;
}
int main()
{

    Amir
    int t;
    cin>>t;
    string s;
    //int ar[6];
    int n;
    int l,r,flg,mn,sm;
    while(t--){
    sm = 0;
       cin>>n;
       int ar[n];
       fr(i,n) cin>>ar[i];
       flg = 1;
       for(int i=1;i<n;i++)
        if(ar[i] != ar[i-1]){
            flg = 0;
            break;
        }
        if(flg){
            cout<<"0\n";
            continue;
        }
        mn = ar[0];
        fr(i,n){
            if(mn >ar[i])
                mn = ar[i];
        }
        fr(i,n){
            sm+=(ar[i]-mn);
        }

        cout<<sm<<endl;

    }
   // cout<<(int)'0';


    return 0;
}








