#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define fr1(i,n) for(int i=1;i<n;i++)
#define fr2(i,n) for(int i=1;i<n-1;i++)
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
    string s1,s2;
    cin>>s1>>s2;
    if(s1 == s2)
        cout<<-1;
    else{
        int len1,len2;
        len1=s1.size();
        len2=s2.size();

        len1 = len1>len2?len1:len2;
        cout<<len1;
    }
    return 0;
}








