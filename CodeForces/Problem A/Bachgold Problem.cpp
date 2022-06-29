#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
//#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    
    
    int n;
    cin>>n;
    if(n %2 == 0)
    {
        cout<<n/2<<endl;
        fr(i,n/2)
            cout<<2<<" ";
    }
    else
    {
        cout<<n/2<<endl;
        fr(i,n/2-1)
            cout<<2<<" ";
        cout<<3<<endl;
    }

}

