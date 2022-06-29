#include <iostream>

using namespace std;

int main()
{
    int a,b,c,n;
    cin>>n>>a>>b>>c;
    int arr[n+1];
    for(int i=0 ;i<=n;i++){
        arr[i] = -984513;

    }
    arr[0] = 0;
    for(int i=1;i<=n;i++){
        if(i>=a) arr[i] = max(arr[i],arr[i-a]+1);
        if(i>=b) arr[i] = max(arr[i],arr[i-b]+1);
        if(i>=c) arr[i] = max(arr[i],arr[i-c]+1);
    }
    cout<<arr[n];


    return 0;
}
