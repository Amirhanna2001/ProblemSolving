#include<bits/stdc++.h>
#define fr(i,n)           for(int i=0;i<n;i++)
#define fr1(i,n)          for(int i=1;i<=n;i++)
#define fr0n(n)           for(int i=0;i<n-1;i++)
#define lop(n)            for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
/*  Constant Algorithms
    complexity           Max n
    o(log(n))            10 ^ 18
    o(n)                 100 000 000
    o(n log(n))          40 000 000
    o(n^2)               10 000
    o(n^3)               500
    o(n^4)               90
    o(2^n)               20
    o(N!)                10

*/
//a%b = a - b*floor(a/b);
int greatestCommonDevisor(int a,int b)
{
    int tmp;//(a,b)  = (b,a%b);
    while(b){
        tmp =a;
        a = b;
        b = tmp%b;
    }
    return a;
}
int leatestCommotMultiple(int a,int b)
{
    int tmp,aa=a,bb=b;//(a,b) = (b,a%b)
    while(b){
        tmp = a;
        a = b;
        b = tmp%b;
    }
    return aa/a*bb;
}
ll extendedEclid(ll a, ll b, ll &x, ll &y){
    if(!b){
        x = 1; y = 0;
        return a;
    }
    ll x1,y1;
    ll d = extendedEclid(b,a%b,x1,y1);
    x = y1; y = x1-y1*(a/b);
    return d;

}

const int MAX = 2;
int fib[MAX]; // any size
void initializeFib()
{

    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<=MAX; i++)
        fib[i] = fib[i-1]+fib[i-2];
}
int fibonacci(int n)
{
    return fib[n];
}
int binarySearchFindFirst(int ar[],int low,int high,int val)
{
    int m;
    while(low<high)
    {
        m = low +(high-low)/2;
        if(ar[m]<val) low = m+1;
        else if(ar[m]>val) high = m-1;
        else high = m;
    }

    return low;
}
int binarySearchFindLast(int ar[],int low,int high,int val)
{
    int m;
    while(low<high)
    {
        m = low +(high-low)/2;
        if(ar[m]<val) low = m+1;
        else if(ar[m]>val) high = m-1;
        else low = m;
    }

    return low;
}
int findFirstElementGTOEToNum(int ar[],int lo,int hi,int val)
{
    int res = -1,m;
    while(lo<=hi){
        m = lo + (hi-lo)/2;
        if(ar[m] >= val){
            res = m;
            hi = m-1;
        }else
            lo = m+1;}
    return res;
}

int main()
{
    Amir
    string s1,s2;
    cin>>s1;
    int ind = s1.find('|');
    string left  = s1.substr(0,ind);
    string right = s1.substr(ind+1);
    cin>>s2;
    int n = s2.size();
    for(int i=0;i<n;i++){
        if(left.size() >= right.size()) right+=s2[i];
        else left+=s2[i];
    }
    cout<<(left.size() == right.size()?left+'|'+right:"Impossible");

    return 0;
}














