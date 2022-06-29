#include <bits/stdc++.h>

using namespace std;

int main()
{
    //retch to m
    int n,m,steps = 0;
    cin>>n>>m;
    while(n != m)
    {
        if(n>m)
        {
            m++;
            steps++;
        }
        else{
            if(m %2 ==0)
            {
                m/=2;
                steps++;
            }
            else
            {
                m++;
                steps++;
            }
        }
    }
    cout<<steps;

    return 0;
}
