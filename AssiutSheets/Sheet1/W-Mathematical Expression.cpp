#include<bits/stdc++.h>
#define FR(i,j,n)            for(int i=j;i<n;i++)
#define lop(n)               for(int i=0;i<n;i++)
#define readAr(ar,n);        for(int i=0;i<n;i++) cin>>ar[i];
#define ll                   long long
#define vi                   vector<int>
#define all(v)               v.begin(), v.end()
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using   namespace std;
const double PI =  3.141592653;
void  AmirHanna2001()
{
   float x,y,z;
   char ch,c;
   cin>>x>>ch>>y>>c>>z;
   if(ch == '+'){
        if(x+y == z) cout<<"Yes";
        else cout<<x+y;
   }
   else if(ch == '-'){
        if(x- y == z) cout<<"Yes";
        else cout<<x-y;
   }
   else if(ch == '*'){
        if(x * y == z) cout<<"Yes";
        else cout<<x*y;
   }

    
    
}
int main()
{
    /*#ifndef ONLINE_JUDGE
        freopen("input.in","r",stdin);
        //freopen("output.out","w",stdin);
    #endif // ONLINE_JUDGE*/
    Amir
    int numberOfTestCases = 1;
   // cin>>numberOfTestCases;
    while(numberOfTestCases--)
        AmirHanna2001();
    return 0;
    
        
}






