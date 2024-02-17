#include "superc.h"
int differentProd(int x[],int n){
    int cannot=0;
    int prod=1;
    for (int i = 0; i < n; ++i) {
        if(x[i]!=cannot){
            prod*=x[i];
            cannot=x[i];
        }
    }
    return prod;
}/*
int lcm(int x, int y,int co[]){
    static int j=0;
    intPrint(y);
    if(y>x){
        swap(&x,&y);
    }
    if(y==0){
        arrBubbleSort(co,j);
        return differentProd(co,j);
    }

    int breakFlag=0;
    for (int i = 1; i <= y/2; ++i) {
        if (x % i == 0 && x!=0) {
            co[j] = i;
            x /= i;
            ++j;
            breakFlag ++;
        }
        if (y % i == 0) {
            co[j] = i;
            y /= i;
            ++j;
            breakFlag ++;
        }
        if(breakFlag==2){
            break;
        }
    }

    lcm(x,y,co);
}*/
int main(void){
    int co[200];
    intPrint(lcm(130,15,co));
}