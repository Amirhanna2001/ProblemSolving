#include<bits/stdc++.h>
#define fr(i,n) for(int i=1;i<n;i++)
#define ll  long long
#define Amir				 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
int main()

{
    Amir
    int n,k;
    cin>>n>>k;
    int arr[n];
    cin>>arr[0];
    fr(i,n)
    {
        cin>>arr[i];
        arr[i] +=arr[i-1];
    }
    //k--;
    int mn =1e9,ind=0,l,r,tmp;

    //6 2
   // 10 9 7 5 1 70
    for(int i=k-1;i<n;i++){
        r = i;
        l = r-k+1;
        tmp = arr[r];
        if(l)
            tmp -= arr[l-1];
        if(mn>tmp){
            mn  = tmp;
            ind = l;
        }
        //k++;

    }
    cout<<ind+1;
    return 0;


}
