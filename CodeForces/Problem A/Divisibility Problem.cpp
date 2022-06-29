#include <iostream>

using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b == 0)
            cout<<0<<endl;
        else{
             c = a%b;
             cout<<b-c<<endl;
        }

    }
    return 0;
}
