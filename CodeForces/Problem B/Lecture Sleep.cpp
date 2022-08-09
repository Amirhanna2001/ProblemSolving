#include<bits/stdc++.h>
#define fr(i,j,n)            for(int i=j;i<n;i++)
#define fr0(i,n)             for(int i=0;i<n-1;i++)
#define lop(n)               for(int i=0;i<n;i++)
#define readAr(ar,n);        for(int i=0;i<n;i++) cin>>ar[i];
#define ll                   long long
#define vi                   vector<int>
#define all(v)               v.begin(), v.end()
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int AmirHanna2001()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    bool vis[n];
    readAr(ar,n);
    readAr(vis,n);
    int sm=0,mx=-1e5,tmp;
    lop(n)
        if(vis[i]){
            sm+=ar[i];
            ar[i]=0;
        }
    lop(n-1)
        ar[i+1] +=ar[i];
    lop(n-k+1){
        if(i)
            mx=max(mx,ar[i+k-1]-ar[i-1]);
        else
            mx = max(mx,ar[i+k-1]);

    }
    cout<<mx+sm;
     //0 0 5 0 5 4
     //1 1 0 1 0 0
    return 0;
}

int main()
{
    Amir
     int numberOfTestCases = 1;
   // cin>>numberOfTestCases;
    //  fr(i,0,numberOfTestCases)
    while(numberOfTestCases--)
        AmirHanna2001();





}





