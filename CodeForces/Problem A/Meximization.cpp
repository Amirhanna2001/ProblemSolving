#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
int main()
{
    Amir

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int b[101] = {0};
        int j=0;
        fr(i,n)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        /*if(n == 1)
        {
            cout<<a[0]<<endl;
            continue;
        }*/
        fr(i,101)
        {
            if(b[i]>0)
            {
                cout<<i<<" ";
                b[i]--;
            }

        }

        fr(i,101)
        {

            fr(j,b[i])
            {
                cout<<i<<" ";
            }
        }

            cout<<endl;
    }

    return 0;

}
