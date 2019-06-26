
#include<bits/stdc++.h>
#include<math.h>
#define sc scanf
#define pf printf
using namespace std;

int main(){

    int num,x,remainder;
    sc("%d",&num);
    int originalNum = num;
    int reverseNum = 0;
    while( num!=0){
          remainder = num%10;
          reverseNum = reverseNum*10+remainder;
          num /= 10;
          }
    if( originalNum == reverseNum )
        pf("The number %d is palindrome\n",originalNum);
    else
        pf("The number %d is not a palindrome number\n",originalNum);

    return 0;
}
