#include<bits/stdc++.h>
#define FR(i,j,n)            for(int i=j;i<n;i++)
#define lop(n)               for(int i=1;i<=n;i++)
#define readAr(ar,n);        for(int i=0;i<n;i++) cin>>ar[i];
#define ll                   long long
#define vi                   vector<int>
#define all(v)               v.begin(), v.end()
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using   namespace std;
string alpha = "abcdefghijklmnopqrstuvwxyz";

void AmirHanna2001(){
    int n;
    cin>>n;
    int ar[n];
    readAr(ar,n);
    int e,o,ne,po;
    e = o = ne = po =0;
    FR(i,0,n){
        if(ar[i] >0) ++po;
        if(ar[i] <0) ++ne;

        if(ar[i] %2 == 0) ++e;
        else ++o;
    }
    cout<<"Even: "<<e<<'\n';
    cout<<"Odd: "<<o<<'\n';
    cout<<"Positive: "<<po<<'\n';
    cout<<"Negative: "<<ne<<'\n';
}
int main()
{
    Amir
    int numberOfTestCases = 1;
    //cin>>numberOfTestCases;
    while(numberOfTestCases--){
        AmirHanna2001();
    }
    return 0;
    
        
}






