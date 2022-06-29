#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a ,b;
    cin>>a>>b;
    int mn = min(a,b);
    cout<<mn;
    int mx = max(a,b);
    mx -=mn;
    cout<<" "<<mx/2;
    return 0;
}
