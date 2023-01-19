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
    int i=0;
    bool flg;
    for(int i=2;i<=n;++i){
        flg = 1;
        if(i == 4) continue;
        for(int j = 2;j<i/2;++j){
            if(i%j == 0) {
                flg=0;
                break;
            }
              
        }
        if(flg) cout<<i<<' ';  
    }
    
    
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






