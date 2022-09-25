#include<bits/stdc++.h>
#define FR(i,j,n)            for(int i=j;i<n;i++)
#define lop(n)               for(int i=0;i<n;i++)
#define readAr(ar,n);        for(int i=0;i<n;i++) cin>>ar[i];
#define ll                   long long
#define vi                   vector<int>
#define all(v)               v.begin(), v.end()
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using   namespace std;
string alpha = "abcdefghijklmnopqrstuvwxyz";

void AmirHanna2001(){
    int n;
    cin>>n;
    int n1 = n%10;
    int n2 = n/10;

    if(n1%n2 == 0 || n2%n1 == 0) cout<<"YES";
    else cout<<"NO";
}
int main()
{
    Amir
    int numberOfTestCases = 1;
    //cin>>numberOfTestCases;
    while(numberOfTestCases--){
        AmirHanna2001();
    }
    return 0;
    
        
}






