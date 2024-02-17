#include "superc.h"
int calc();
int main(void){
    intPrint(calc(1,5));
}
int calc(int start,int end){
    static int sum = 0;
    sum += start;
    if(start==end)
        return sum;
    calc(++start,end);
}