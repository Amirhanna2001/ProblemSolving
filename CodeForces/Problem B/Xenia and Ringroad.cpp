#include <iostream>

using namespace std;

int main()
{
    long long  n,m,x;
    cin>>n>>m;
    long long c=0;
    long  curr = 1;

    for(int i=0; i<m; i++)
    {
        cin>>x;
        if(x>=curr)
        {
            c += x-curr;
        }
        else
        {
            c+=n-curr;
            c+=x;
        }
        curr = x;
    }
    cout<<c<<endl;

    return 0;
}
