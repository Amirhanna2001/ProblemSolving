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

    return v;//not Sorted

}
// Sorted
vector<int> generateDivisors(int n){
    vector<int> v1,v2,v;
    int i,j;
    for( i = 1,j=0;i*i < n ;i++,j++)
        if(n%i == 0){
            v1.push_back(i);
            v2.push_back(n/i);
        }

    if(i*i == n)
        v1.push_back(i);

        set_union(v1.begin(),v1.end(),v2.rbegin(),v2.rend(),back_inserter(v));
        v1.clear();
        v2.clear();
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
void printVec(vector<ll>v){
    for(int i=0;i<(int)v.size();i++)
        cout<<v[i]<<" ";
}
int main(){
    int n,k=1;
    ll x,ans;
    cin>>n;
    while(1){
            x = (pow(2,k-1))*(pow(2,k)-1);
        if(x>n)
            break;
        else{
            if(n%x == 0)
                ans=x;
        }
        k++;
    }
    cout<<ans;

    return 0;

}
