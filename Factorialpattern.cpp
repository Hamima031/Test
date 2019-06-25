
#include<bits/stdc++.h>
#define sc scanf
#define pf printf
typedef long long ll;
using namespace std;
int main(){
    int t;
    ll n;
    sc("%d",&t);
    for( int i=0; i<t; i++){
    sc("%lld",&n);
    ll fact =0;
    ll fact1 = 1;
    if ( n==0 || n==1)
        pf("1\n");
//if n is an even number
else if( n%2 == 0){
    for( int i=n; i>=2; i=i-2){
        fact = fact+i;
        fact1 = fact1*fact;
    }
    pf("%d\n",fact1);
}
//if n is an odd number
else{
        int sum=0;
    for( int i=n; i>=1; i=i-2){
      fact = fact+i;
      sum++;
        if( i==1 ){
            fact =sum;
        }

     fact1 = fact1*fact;

    }
    pf("%d\n",fact1);
}


    }

return 0;
}
