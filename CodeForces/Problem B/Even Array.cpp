#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t,n,even=0,odd=0,res;
    cin>>t;
    while(t--)
    {
        even = odd = 0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i%2 == 0 && a[i]%2 == 1)
                even++;
            else if(i%2 == 1 &&a[i]%2 == 0)
                odd++;
        }
        if(even == odd)
            cout<<even<<endl;

        else
        {
            cout<<-1<<endl;
        }
    }


    return 0;
}
