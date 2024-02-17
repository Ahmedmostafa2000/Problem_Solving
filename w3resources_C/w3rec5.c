#include "superc.h"
int count(float x){
    static int counter=0;
    x /= 10;
    counter++;
    if((int)x)
        count(x);
    else
        return counter;
}
int main(void){
    intPrint(count(50));
}