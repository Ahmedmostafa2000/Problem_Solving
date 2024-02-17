#include "superc.h"
int summer(float x){
    static int sum = 0;
    x = x/10;
    int y =(x-(int)x)*10;
    sum+=y;
    if((int)x)
        summer(x);
    else
        return sum;
}
int main(void){
    intPrint(summer(123));
}//
// Created by Mm on 1/11/2020.
//

