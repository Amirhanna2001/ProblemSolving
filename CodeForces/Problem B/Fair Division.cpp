#include <iostream>

using namespace std;

int main()
{
    int t,n,s;
    int res[2];
    cin>>t;
    int a[100];
    while(t--)
    {
        res[0] = res[1] =s=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
            res[a[i]-1]++;
        }
        if(s%2 ==0 )
        {
            if(res[0]  >= 2)
              cout<<"YES\n";
            else if(res[1] %2 == 0)
               cout<<"YES\n";
            else
                cout<<"NO\n";
        }

        else
            cout<<"NO\n";
    }
    return 0;
}
