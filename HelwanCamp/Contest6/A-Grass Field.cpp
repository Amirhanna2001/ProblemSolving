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
void  AmirHanna2001()
{
    int n,x,sm=0;
    //cin>>n;
    lop(4) cin>>x , sm+=x;
    if(sm == 0)cout<<0;
    else if(sm <= 3)cout<<1;
    else cout<<2;

    cout<<'\n';
}
int main()
{
    Amir
    int numberOfTestCases = 1;
    cin>>numberOfTestCases;
    while(numberOfTestCases--)
        AmirHanna2001();

    return 0;
}




 