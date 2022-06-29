#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

ll greatestCommonDevisor(ll a,ll b){
    ll tmp;
    //(a,b)  = (b,a%b);
    while(b){
        tmp =a;
        a = b;
        b = tmp%b;
    }
    return a;
}

ll greatestCommonDevisor2(ll a,ll b){
    // Not Working :(
    if(!b)
        return a;
    greatestCommonDevisor2(b,a%b);
}
int leatestCommotMultiple(int a,int b){
    int tmp,aa=a,bb=b;
    //(a,b) = (b,a%b)

    while(b){
        tmp = a;
        a = b;
        b = tmp%b;
    }
    return aa/a*bb;
}
int main(){

    string s,t;
    cin>>s>>t;
    int n = t.size(),ctr=0;
    for(int i=0;i<n;i++){
        if(t[i] == s[ctr])
            ctr++;
    }
    cout<<ctr+1;
    return 0;
}














