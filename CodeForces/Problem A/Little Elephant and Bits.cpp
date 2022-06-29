#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
int main()

{
    Amir
    string s;
    cin>>s;
    int n = s.size();
    int cur=0;
    bool flag = 0 ;
    fr(i,n)
        if(s[i] == '0'){
            flag = 1;
            break;
        }
        if(flag){
        fr(i,n)
        {
            if(s[i] == '0')
            {

                break;
            }
            else
                cout<<s[i];
            cur = i+1;
        }
        cur++;
        for(; cur<n; cur++)
            cout<<s[cur];
        }
        else
        {
            for(int i=1;i<n;i++)
                cout<<s[i];
        }

    return 0;
}
