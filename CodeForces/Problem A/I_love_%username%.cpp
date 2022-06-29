#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int mx,mn,num,couter=0;
    cin>>num;
    mn = mx = num;
    tc--;
    while(tc--){
        cin>>num;
        if(num>mx){
            mx = num;
            couter++;
        }
        if(num<mn){
            mn = num;
            couter++;
        }
    }
    cout<<couter<<endl;
    return 0;
}
