#include<bits/stdc++.h>
#define sc scanf
#define pf printf
typedef long long ll;
using namespace std;
int trailingZeroes (ll n){
    int count = 0;
    for( int i=5; n/i>=1; i*=5 ){
        count += n/i;
    }
    return count;
}
int main(){
    ll n;
    sc("%lld",&n);

    pf("%d",trailingZeroes(n));
return 0;
}
