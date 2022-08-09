#include<bits/stdc++.h>
#define fr(i,j,n)            for(int i=j;i<n;i++)
#define fr0(i,n)             for(int i=0;i<n-1;i++)
#define lop(n)               for(int i=0;i<n;i++)
#define readAr(ar,n);        for(int i=0;i<n;i++) cin>>ar[i];
#define ll                   long long
#define vi                   vector<int>
#define all(v)               v.begin(), v.end()
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void  AmirHanna2001()
{
    string s[3];
    getline(cin,s[0]);
    getline(cin,s[1]);
    getline(cin,s[2]);
    int n,a=0,b=0,c=0;
    n = s[0].size();
    lop(n)
        if(s[0][i] == 'a'||s[0][i] == 'e'||s[0][i] == 'i'||s[0][i] == 'o'||s[0][i] == 'u') a++;
    n = s[1].size();
    lop(n)
        if(s[1][i] == 'a'||s[1][i] == 'e'||s[1][i] == 'i'||s[1][i] == 'o'||s[1][i] == 'u') b++;
    n = s[2].size();
    lop(n)
        if(s[2][i] == 'a'||s[2][i] == 'e'||s[2][i] == 'i'||s[2][i] == 'o'||s[2][i] == 'u') c++;

    if(a == 5 && b == 7 && c==5)cout<<"YES";
    else cout<<"NO";
}

int main()
{
    Amir
    int numberOfTestCases = 1;
   // cin>>numberOfTestCases;
    while(numberOfTestCases--)
         AmirHanna2001();

    return 0;
}





