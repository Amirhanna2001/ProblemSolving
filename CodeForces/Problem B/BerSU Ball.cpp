#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c=0;


    cin>>n;
    int b[n];
    for(int i=0; i<n; i++)
        cin>>b[i];
    cin>>m;
    int g[m];
    for(int i=0; i<m; i++)
        cin>>g[i];

    sort(b,b+n);
    sort(g,g+m);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(abs(b[i]-g[j])<=1)
            {
                c++;
                g[j] = 10000;
                break;
            }

        }

    }
    cout<<c;
    return 0;
}
