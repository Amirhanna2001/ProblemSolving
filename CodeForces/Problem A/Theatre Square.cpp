#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double n , m ,a;
    cin>>n>>m>>a;
    long long x ,y;
    x = ceil(n/a);
    y = ceil(m/a);
    cout<<x*y<<endl;
    return 0;
}
