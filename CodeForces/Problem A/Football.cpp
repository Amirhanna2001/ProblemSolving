#include<bits/stdc++.h>
#define fr(i,n) for(int i=1;i<=n;i++)
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
int greatestCommonDevisor(int a,int b){
    int tmp;
    //(a,b)  = (b,a%b);
    while(b){
        tmp =a;
        a = b;
        b = tmp%b;
    }
    return a;
}


int leatestCommotMultiple(int a,int b){
    int tmp,aa=a,bb=b;
    //(a,b) = (b,a%b)

    while(b){
        tmp = a;
        a = b;
        b = tmp%b;
    }
    return aa/a*bb;
}


const int MAX = 100000;
int fib[MAX]; // any size
void initializeFibb(){
    fr(i,MAX) fib[i] = -1;
    fib[0]=fib[1]=1;
}

int fibonacciReqursion(int n){

    if(n<=1)
        return n;

    if(fib[n] != -1)
        return fib[n];

    fib[n] = fibonacciReqursion(n-1) + fibonacciReqursion(n-2);
    return fib[n];

}
void initialize(){
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2;i<=MAX;i++)
        fib[i] = fib[i-1]+fib[i-2];
}
int fibonacci(int n){


    return fib[n];

}
int binarySearchFindFirst(int ar[],int low,int high,int val){
    int m;
    while(low<high){
        m = low +(high-low)/2;
        if(ar[m]<val) low = m+1;
        else if(ar[m]>val) high = m-1;
        else high = m;
    }

    return low;
}
int binarySearchFindLast(int ar[],int low,int high,int val){
    int m;
    while(low<high){
        m = low +(high-low)/2;
        if(ar[m]<val) low = m+1;
        else if(ar[m]>val) high = m-1;
        else low = m;
    }

    return low;
}
int findFirstElementGTOEToNum(int ar[],int lo,int hi,int val){
    int res = -1;

    int m ;
    while(lo<=hi){
        m = lo + (hi-lo)/2;
        if(ar[m] >= val){
            res = m;
            hi = m-1;
        }
        else
            lo = m+1;
    }
    return res;
}

int main(){
    Amir
    int n;
    cin>>n;
    map<string,int> mp;
    string team;

    fr(i,n){
        cin>>team;
        mp[team]++;
    }
    int best=0;

    map<string,int>::iterator it = mp.begin();
    while(it != mp.end()){
        if(best < it->second)
        {
            best = it->second;
            team = it->first;
        }
        it++;
    }
    cout<<team;
    return 0;
}














