

#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
typedef long long ll;

int main(){
   ll n;
   sc("%lld",&n);
   ll sum=1,sum1;
   for( int i=0; i<n; i++){
      sum1 = 15%100;
      sum = sum*sum1;
      if(sum>100)
        sum = sum%100;
   }
   pf("%lld\n",sum);

    return 0;
}
