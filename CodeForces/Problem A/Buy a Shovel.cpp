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
int main(){


    /*vector<ll> v = generateDivisors(1000);
    sort(v.begin(),v.end());
    for(int i=0;i<(int)v.size();i++)

    */
    int k,r,ans=1;
    cin>>k>>r;
    if (k%10 == 0) ;
    else if((k-r) % 10 == 0);
    else{
        while(1){
                ans++;
            if((ans*k-r)%10 == 0)
                break;
            else if(ans*k %10 == 0)
                break;
        }
    }


    cout<<ans;

    return 0;

}
