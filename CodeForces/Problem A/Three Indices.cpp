#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
//const int N = 1000;
int a[1000];
void solve()
{
    int n;
    cin>>n;
    fr(i,n)
        cin>>a[i];
    for(int i = 1;i<n-1;i++)
    {
        if(a[i]>a[i-1] && a[i]>a[i+1])
        {
            cout<<"YES\n";
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"NO\n";
}
int main()
{
   int T;
   cin>>T;
   while(T--)
    solve();
}
