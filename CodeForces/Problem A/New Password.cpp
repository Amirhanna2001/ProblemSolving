#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
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

ll greatestCommonDevisor2(ll a,ll b){
    // Not Working :(
    if(!b)
        return a;
    greatestCommonDevisor2(b,a%b);
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
void initializeReq(){
    fr(i,MAX) fib[i] = -1;
    fib[0]=fib[1]=1;
}

int fibonacciReq(int n){

    if(n<=1)
        return n;

    if(fib[n] != -1)
        return fib[n];

    fib[n] = fibonacciReq(n-1) + fibonacciReq(n-2);
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

int main(){
    Amir
    int n,k;
    cin>>n>>k;
    char ch[k];
    int a = 97;
    fr(i,k)
        ch[i] = (char)a++;
    int j;
    fr(i,n){
        j = i%k;
        cout<<ch[j];
    }


    return 0;
}














