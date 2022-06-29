#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
int main()
{
   long long l,r;
        cin>>l>>r;
        if (l%2!=0) l++;
        ll a = l, b=l+1, c=l+2;
        if (c<=r) cout<<a<<" "<<b<<" "<<c;
        else   cout<<-1;
    return 0;
}
