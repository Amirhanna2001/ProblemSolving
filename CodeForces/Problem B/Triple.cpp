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
    bool flag ;
    cin>>t;
    int n,tmp;
    while(t--){
            flag = 1;
        cin>>n;
        int ar [n];
        fr(i,n)
            cin>>ar[i];
        sort(ar,ar+n);
        for(int i=1;i<n-1;i++){
            if(ar[i-1] == ar[i] && ar[i] == ar[i+1])
            {
                cout<<ar[i]<<endl;
                flag = 0;
                break;
            }
        }
        if(flag)
            cout<<-1<<endl;


    }
    return 0;

}
