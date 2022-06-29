#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// How TO Get  Divisors Of Number
vector<ll> generateDivisors(ll n){
    vector<ll> v;
    ll i;
    for( i = 1;i*i < n ;i++)
        if(n%i == 0)
            v.push_back(i),v.push_back(n/i);

    if(i*i == n)
        v.push_back(i);

    return v;

}
ll fast_pow(ll n,ll m){
    ll ans =1;
    while(m>0){
        if(m%2 != 0) ans*=n;
        m/=2;
        n*=n;
    }
    return ans;

}

int main(){


    /*vector<ll> v = generateDivisors(1000);
    sort(v.begin(),v.end());
    for(int i=0;i<(int)v.size();i++)

    */
    ll n,m;
    cin>>n>>m;
    if(n<=40)
        cout<<m % fast_pow(2,n);
    else
      cout<<m;

    return 0;

}
