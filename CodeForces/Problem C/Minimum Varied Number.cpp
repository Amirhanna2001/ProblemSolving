#include<bits/stdc++.h>
#define fr(i,j,n)            for(int i=j;i<n;i++)
#define fr0(i,n)             for(int i=0;i<n-1;i++)
#define lop(n)               for(int i=0;i<n;i++)
#define readAr(ar,n);        for(int i=0;i<n;i++) cin>>ar[i];
#define ll                   long long
#define vi                   vector<int>
#define all(v) v.begin(), v.end()
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
/*
    Bits:
    n>>k    = n/2^k
    n<<k    = n*2^k
    (x%2^n) = x&(2^n -1)
*/
int greatestCommonDevisor(int a,int b)
{
    int tmp;//(a,b)  = (b,a%b);
    while(b)
    {
        tmp =a;
        a = b;
        b = tmp%b;
    }
    return a;
}
int leatestCommotMultiple(int a,int b)
{
    int tmp,aa=a,bb=b;//(a,b) = (b,a%b)
    while(b)
    {
        tmp = a;
        a = b;
        b = tmp%b;
    }
    return aa/a*bb;
}
ll extendedEclid(ll a, ll b, ll &x, ll &y)
{
    if(!b)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1,y1;
    ll d = extendedEclid(b,a%b,x1,y1);
    x = y1;
    y = x1-y1*(a/b);
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
    while(lo<=hi)
    {
        m = lo + (hi-lo)/2;
        if(ar[m] >= val)
        {
            res = m;
            hi = m-1;
        }
        else
            lo = m+1;
    }
    return res;
}/*
vi adj[1000];
bool vis[1000];
void DFS(int node){
    cout<<node<<" ";
   // int child;
    for(int child:adj[node])
        if(!vis[child]){
            vis[child] = 1;
            DFS(child);
        }

}
void AmirHanna2001(){
    int n,m,u,v;
    cin>>n>>m;
    fr(i,0,m){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    fr(i,0,n)
        if(!vis[i]){
            vis[i] = 1;
            DFS(i);
        }

}*/
void AmirHanna2001(){
    int n,h,m,hh,mm,mx = -2e5;
    cin>>n>>h>>m;
    pair<int,int> ar[n];
    lop(n) cin>>ar[i].first>>ar[i].second;
    int tot = h*60 + m;
    int tmp,tmp2;
    lop(n){
        tmp = ar[i].first*60+ar[i].second;
        tmp2 = tmp-tot;
        if(tmp2 == 0){
            cout<<"0 0\n";
            return;
        }
        if(mx<tmp2)
            mx = tmp2;
    }
    cout<<mx/60 <<" "<<mx%60<<'\n';




}
void b(){
    int n;
        cin >> n;
        vector < int > v;
        if(n >= 1 && n <= 9) { cout << n << '\n'; return;}
        int ans = 9;
        while(n) {
            if(n - ans >= 0) { n-= ans; v.push_back(ans);ans--; }
            else {
                ans--;
            }
        }
        //reverse(all(v));
        int s = v.size();
        for(int i=s-1;i>=0;--i) cout<<v[i];
        cout << '\n';
}
int main()
{
    Amir
    int numberOfTestCases = 1;
    cin>>numberOfTestCases;
    fr(i,0,numberOfTestCases)
       b();
    return 0;

}




