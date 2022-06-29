#include<bits/stdc++.h>
#define all(v)   ((v.begin()),(v.end()))


using namespace std;
int main()
{
    
    int n,num;
    cin>>n;
    int arr[n];
    int a[3] = {0};
    for(int i=0;i<n;i++)
    {
        cin>>num;
        a[num-1]++;
    }
    sort(a,a+3);
    cout<<a[0]+a[1];

    return 0;

}