#include <iostream>

using namespace std;

int main()
{

    int n,k,total = 240;
    cin>>n>>k;
    total-=k;
    total -= total%5;
    int i=1,c=0;
    while(total && c<n){
            if(total < (i*5))
            break;
        total-= i*5;
        c++;
        i++;
    }
    cout<<c<<endl;
    return 0;
}
