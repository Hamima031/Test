/*This is an inefficient code for finding the factorial value of a number.
Time complexity is O(n).
This code is perfect for the range 0<=n<=10^6*/

#include<bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;

int main(){
    int t;
    sc("%d",&t);
    for( int i=0; i<t; i++){
    int n;
    sc("%d",&n);
    //if( n==0 || n==1)
        //pf("1\n");
    //else{
    int fact = 1;
    for( int i=1; i<=n; i++ )
        fact *=i;
        pf("%d\n",fact);
    }
   // }

return 0;
}
