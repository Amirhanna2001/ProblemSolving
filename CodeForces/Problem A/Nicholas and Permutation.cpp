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
    int n,x,ans=0,p2,p1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x == 1) p1=i;
        if(x == n) p2=i;
    }
    cout<<max(n-p1,max(n-p2,max(p1-1,p2-1)));
}
int main()
{
    Amir
    int numberOfTestCases = 1;
    while(numberOfTestCases--)
        AmirHanna2001();

    return 0;
}





