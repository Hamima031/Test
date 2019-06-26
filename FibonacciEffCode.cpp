
/*Time Complexity: O(1)
Space Complexity: O(1)
this code  perfectly show the result up to the value 10^18*/

#include<bits/stdc++.h>
#define sc scanf
#define pf printf
typedef long long ll;

ll fib ( ll n){
    double base = (1+sqrt(5))/2;
     return round(pow(base,n)/sqrt(5));
}

int main(){
    ll n;
    sc("%lld",&n);
    pf("%lld\n",fib(n));
return 0;
}
