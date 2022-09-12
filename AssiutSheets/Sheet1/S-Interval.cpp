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
   float d;
   cin>>d;
   if(d>=0 && d<=25) cout<<"Interval [0,25]";
   else if(d>25 && d<=50) cout<<"Interval (25,50]";
   else if(d>50 && d<=75) cout<<"Interval (50,75]";
   else if(d>75 && d<=100) cout<<"Interval (75,100]"; 
   else cout<<"Out of Intervals";
    
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






