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
    int n;
    cin>>n;
    int mn = n/7;
    mn*=2;
    n%=7;
    int mx = mn;
    if(n == 6) mn++,mx+=2;
    else if(n == 5 || n == 4||n == 3||n==2) mx+=2;
    else if(n == 1) mx++;

    cout<<mn<<" "<<mx;
}

int main()
{
    Amir
    int numberOfTestCases = 1;
   // cin>>numberOfTestCases;
    while(numberOfTestCases--)
         AmirHanna2001();

    return 0;
}





