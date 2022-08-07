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
int a[101];
void  AmirHanna2001()
{
    int n;
    cin>>n;
    if(n == 1) cout<<n;
    else{
        for(int i=n;i>0;--i){
            int tmp = i;
            while(1){
                if(tmp%2 != 0) break;
                if(tmp%2 == 0){
                    a[i]++;
                    tmp/=2;
                }
            }
        }
        int ans=0,mx=0;
        lop(n+1){
            if(a[i] > mx)
            {
                mx=a[i];
                ans=i;
            }
        }
        cout<<ans;
    }


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





