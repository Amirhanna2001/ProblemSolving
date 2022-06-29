#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//41
int main(){
    string s;
    cin>>s;
    int arow = (int)'a',cur,tmp;
    int n = s.size(),ans=0;
    fr(i,n){
        cur = (int)s[i];
        tmp = abs(cur-arow);
        if(tmp>13)
            tmp=26-tmp;
        else if(tmp == 25)
            tmp = 1;
        ans +=tmp;
        arow = cur;
    }
    cout<<ans;

    return 0;

}
