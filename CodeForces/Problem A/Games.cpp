#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    int n,ctr=0;
    cin>>n;
    pair<int,int> pr[n];
    fr(i,n){
        cin>>pr[i].first;
        cin>>pr[i].second;
        }

    fr(i,n)
        fr(j,n)
            if(pr[i].first == pr[j].second)
                ctr++;

    cout<<ctr;
    return 0;

}
