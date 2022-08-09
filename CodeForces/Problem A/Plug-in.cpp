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
    stack<char> st;
    string str;
    cin>>str;
    int n = str.size();
    lop(n){
        if(st.empty()) st.push(str[i]);
        else{
            if(st.top() == str[i]) st.pop();
            else st.push(str[i]);
        }
    }
    n = st.size();
    str="";
    lop(n) {str+=st.top(); st.pop();}
    for(int i=n-1;i>=0;--i )
      cout<<str[i];
}

int main()
{
    /*
    #ifdef ONLINE_JUDGE
        freopen("input.in","r",stdin);
    #endif // ONLINE_JUDGE*/
    Amir
    int numberOfTestCases = 1;
   // cin>>numberOfTestCases;
    while(numberOfTestCases--)
         AmirHanna2001();

    return 0;
}





