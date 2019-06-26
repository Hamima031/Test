#include<bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;
typedef long long ll;
int main(){
int n;
sc("%d",&n);
 int i;
if( n==2 )
    pf("2 is a prime number\n");

else{
    for( i=2; i<n; i++ ){
        if( n%i == 0){
            pf("%d is not a prime number\n",n);
            break;
            }
    }

}
 if( i== n)
       pf("%d is a prime number\n",n);


return 0;
}
