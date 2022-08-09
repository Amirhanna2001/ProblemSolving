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
void AmirHanna2001(){
   ll n;
    cin >> n;
    ll i = 1, j = n * n, T = j * (j + 1) / 2;
    vector<ll> v;
    while(i < j) {
        v.push_back(i);
        v.push_back(j);
        i++, j--;
    }
    ll sum = 0, ch = T / n;
    for(int i = 0; i < v.size(); i++) {
        if(sum  + v[i] < ch) {
            sum += v[i];
            cout << v[i] << ' ';
        }else if(sum + v[i] == ch) {
            sum = 0;
            cout << v[i] << '\n';
        }
    }


}

int main()
{
    Amir
    int numberOfTestCases = 1;
    //cin>>numberOfTestCases;
    fr(i,0,numberOfTestCases)
       AmirHanna2001();
    return 0;

}





