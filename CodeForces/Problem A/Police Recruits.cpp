#include <iostream>

using namespace std;

int main()
{
    int res = 0,police=0,n,ele;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>ele;
        if(ele <=-1 && police >= -ele){
            police += ele;

        }
        else if(ele <=-1 && police < -ele){
                ele+=police;
                police = 0;
                res += -ele;
        }
        else if(ele>0)
            police+=ele;
    }
    cout<<res;
    return 0;
}
