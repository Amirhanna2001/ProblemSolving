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
}
bool prime(ll n){
    if(n == 2) return 1;
    if(n<2 || n%2 == 0) return 0;
    for(int i = 3 ; i*i <= n; i+=2)
        if(n % i == 0) return 0;
    return 1;
}
const int S = 1e7+5;
vector<bool> isPrime(S,true);
void  siev(){
    isPrime[0] = isPrime[1] = 0;
    for(int i = 2;i*i<=S;i++)
        if(isPrime[i])
            for(int j = i*2 ; j <=S;j+=i)
                isPrime[j] = 0;
}
int main()
{
    Amir
    int numberOfTestCases = 1; ll n,m;
   // cin>>numberOfTestCases;
    bool flg = 1;
    siev();
    while(numberOfTestCases--){
        cin>>n;

        for(ll i = 2;i<=n;i++){
            m = n-i;
            if(isPrime[i]&&isPrime[m]&&i>=2&&m>=2){
                cout<<i<<" "<<m<<'\n';
                flg=0;
                break;
            }
        }

        if(flg) cout<<"-1\n";

    }
       // AmirHanna2001();

    return 0;
}





