#include<bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

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
int ar[101];
pair<int,int> prar[101];
int main(){
    Amir

    int l,r,n,m;
        cin>>n;
        fr(i,n) cin>>ar[i];
        cin>>m;
        fr(i,m){
            cin>>prar[i].first;
            cin>>prar[i].second;
        }
        fr(i,m){

                l = prar[i].first;
                r = prar[i].second;
                l--;
                if(l != 0)
                    ar[l-1]+=r-1;
                if(l != n-1)
                    ar[l+1] +=ar[l]-r;
                ar[l]=0;

        }
        fr(i,n) cout<<ar[i]<<endl;


    return 0;
}














