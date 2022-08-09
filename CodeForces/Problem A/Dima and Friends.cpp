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
    int n,sm=0,ans=0;
    cin>>n;
    int x;
    lop(n) cin>>x , sm+=x;
    n++;
    for(int i =1;i<6;++i)
        if((i+sm)%n != 1)ans++;

    cout<<ans;


}

int main()
{
    Amir
    int numberOfTestCases = 1;
    while(numberOfTestCases--)
        AmirHanna2001();

    return 0;
}





