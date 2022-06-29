#include <iostream>

using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==0)
            cout<<1<<endl;

        else
          cout<<a+b*2+1<<endl;
    }
    return 0;
}
