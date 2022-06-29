/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{

   long long n , t , res ,sum ;
   cin>>t;  
   long long a[32 ];  
   while(t-- )  { 
      sum=0;   
   cin>>n; 
   res = (1+n )*n/2; 
   a[0 ] =1;  
   for(int i=1;i<32;i++ )
     
     { 
         a[i] = a[i-1 ]*2;
     } 
     for(int i=0;i<32;i++)
     {
         if(a[i]<=n)
            sum+=a[i];
     }
     cout<<res-2*sum<<endl;
   }
    return 0;
}
