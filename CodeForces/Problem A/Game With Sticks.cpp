#include <iostream>

using namespace std;

int main()
{
    int n,m,t;
    cin>>n>>m;
    t = n>m?m:n;
    if(t%2 == 0)
        cout<<"Malvika\n";
    else
        cout<<"Akshat\n";


    return 0;
}
