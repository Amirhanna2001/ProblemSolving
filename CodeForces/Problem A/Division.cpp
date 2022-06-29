#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
ll gcd(ll a,ll b){
    //gcd(a,b) = gcd(b,a%b)
    ll tmp ;
    while(b){
        tmp = a;
        a =b;
        b = a%b;
    }
    return a;
}
int main(){
    int t;
    cin>>t;
    int rat;
    while(t--){
        cin>>rat;
        if(rat>=1900)
            cout<<"Division 1\n";
        else if(rat >=1600 && rat<=1899)
            cout<<"Division 2\n";
        else if(rat >=1400 && rat<=1599)
            cout<<"Division 3\n";
        else if(rat <=1399 )
            cout<<"Division 4\n";
    }
    return 0;

}
