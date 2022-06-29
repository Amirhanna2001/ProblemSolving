#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> ss;
    int n;
    cin>>n;
    bool con = true;
    char ch[n][n];
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cin>>ch[i][j];
            ss.insert(ch[i][j]);
        }
    }
    if(ss.size() !=2){
        cout<<"NO"<<endl;
        return 0;
    }
    char c = ch[0][0];
    char y = ch[0][1];
    for (int i = 0; i < n; i++) {
             if(ch[i][i] != c){
                 con = false;
                 break;
             }
         }

    for (int i = 0 ; i <n; i++) {
             if(ch[i][i] != c || ch[i][n-(i+1)] != c || ch[i][i] == y || ch[i][n-(i+1)] == y  ){
                 con = false;
                 break;
             }
             for(int j = 0; j < n; j++){
            if(i != j && j != (n - (i + 1)))
            {
                if(ch[i][j] != y){
                    con = false;
                    break;
                }
            }
        }
         }



    if(con)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
