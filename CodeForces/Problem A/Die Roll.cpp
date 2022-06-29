#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int greatestCommonDevisor(int a,int b){
    int tmp;
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

    int a,b;
    cin>>a>>b;
    int mx = max(a,b);
    mx=6-mx;
    if(mx == 0)
        cout<<"1/6";
    else if(mx == 5)
        cout<<"1/1";
    else{
        mx++;
        int gcd = greatestCommonDevisor(mx,6);
        cout<<mx/gcd<<"/"<<6/gcd;
    }
    return 0;
}














