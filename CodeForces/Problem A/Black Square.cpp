#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string ch;
    cin>>ch;
    ll res=0;
    fr(i,ch.size())
    {
        if(ch[i] == '1')
            res+=a;
        else if(ch[i] == '2')
            res+=b;
        else if(ch[i] == '3')
            res+=c;
        else
            res+=d;
    }
    cout<<res<<endl;
}
