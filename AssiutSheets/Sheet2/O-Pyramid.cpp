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
int gcd(int a,int b){
    //gcd(a,b) = gcd(b,a%b)
   if(!b) return a;
   
    return gcd(b,a%b);
}
int cnt;
bool isLuck(int n){
    int t;
    while(n){
        t = n%10;
        if(t == 4 || t==7) ;
        else return 0;
        n/=10;
    }
    ++cnt;
    return 1;
}
void AmirHanna2001(){
    int n;
    cin>>n;
    FR(i,0,n){
        FR(j,0,i+1){
            if(i < j) break;
            else cout<<'*';
        }
        cout<<'\n';
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






