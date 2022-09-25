#include<bits/stdc++.h>
#define FR(i,j,n)            for(int i=j;i<n;i++)
#define lop(n)               for(int i=0;i<n;i++)
#define readAr(ar,n);        for(int i=0;i<n;i++) cin>>ar[i];
#define ll                   long long
#define vi                   vector<int>
#define all(v)               v.begin(), v.end()
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using   namespace std;
string alpha = "abcdefghijklmnopqrstuvwxyz";
const int N = 100;
vector<int> graph[N];
bool vis[N];
int level[N];

void AmirHanna2001(){
    ll a,b,k;
    cin>>a>>b>>k;
    if(a%k == 0 && b %k == 0)cout<<"Both";
    else if(a%k == 0 && b%k)cout<<"Memo";
    else if(b%k == 0 && a%k)cout<<"Momo";
    else cout<<"No One";
    
    
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






