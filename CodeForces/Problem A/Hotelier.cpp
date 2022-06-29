#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
int main()
{
    Amir
    int n,num;
    cin>>n;
    string s;
    cin>>s;
    char ch[10] ;
    fr(i,10)
        ch[i] = '0';
    fr(i,n)
    {
        if(s[i] == 'L')
        {
            fr(j,10)
            {
                if(ch[j] == '0')
                {
                    ch[j] = '1';
                    break;
                }
            }
        }
        else if(s[i] == 'R')
        {
            for(int j=9;j>=0;j--)
            {
                if(ch[j] == '0')
                {
                    ch[j] = '1';
                    break;
                }
            }
        }
        else
        {
            num = ((int)s[i]) - 48;
            ch[num] = '0';
        }

    }
    fr(i,10)
        cout<<ch[i];
    return 0;

}
