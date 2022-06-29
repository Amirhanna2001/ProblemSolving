#include<bits/stdc++.h>
#define fr(i,n) for(ll i=1;i<=n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

ll greatestCommonDevisor(ll a,ll b){
    ll tmp;
    //(a,b)  = (b,a%b);
    while(b){
        tmp =a;
        a = b;
        b = a%b;
    }
    return a;
}

ll greatestCommonDevisor2(ll a,ll b){
    // Not Working :(
    if(!b)
        return a;
    greatestCommonDevisor2(b,a%b);
}
int main(){

    ll a,b,mn,aa=1;
    cin>>a>>b;
    mn = min(a,b);
    fr(i,mn)
        aa*=i;


     cout<<aa;
    return 0;
}














