#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b;
    cin>>b>>n;
    bool con = true;
    pair<int,int> a[n];
    for(int i = 0;i<n;i++)
        cin>>a[i].first>>a[i].second;

    sort(a,a+n);
    for(int i = 0;i<n;i++){
        if(b<=a[i].first){
            con = false;
            break;
        }
        else
            b+=a[i].second;
    }
    if(con)
        cout<<"YES"<<endl;
    else
        cout<<"NO\n";
    return 0;
}
