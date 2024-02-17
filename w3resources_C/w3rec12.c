#include "superc.h"
#define sqr sqrt(13)
int isPrime(int x){
    static int def = 2;

    if(def>sqr)
        return 1;
    if(x%def==0){
        return 0;
    }
    else{
        ++def;
        return isPrime(x);
    }
}
int main(){
    intPrint(isPrime(10));
}