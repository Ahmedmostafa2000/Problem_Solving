#include "superc.h"
int fib();
int main(void){
    fib(0,1,0,20);
}
int fib(int a,int b,int counter,int n){

    intPrint(b);Tprint();
    b=a+b;
    counter++;
    a = b-a;
    if(counter<=n){
        fib(a,b,counter,n);
    }
    else
        return 0;
}