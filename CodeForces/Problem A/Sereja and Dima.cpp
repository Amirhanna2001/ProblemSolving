#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//41
int main(){
    int n;
    cin>>n;

    int a[n];
    fr(i,n) cin>>a[i];

    ll sej=0,dem=0;
    bool s = 0;
    int lef = n-1,r = 0,num;

    fr(i,n){
        if(a[lef]>a[r])
            num = a[lef--];
        else
            num = a[r++];
        if(!s)
        {
            sej+=num;
            s=1;
        }
        else{
            dem+=num;
            s=0;
        }

    }
    cout<<sej<<" "<<dem;

    return 0;

}
