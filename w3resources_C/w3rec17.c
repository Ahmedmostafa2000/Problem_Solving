#include "superc.h"
int power(int x,int y){
    if(y==0)
        return 1;

    return x*(power(x,--y));
}
int main(void){
    intPrint(power(2,10));
}