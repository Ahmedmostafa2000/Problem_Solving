#include "superc.h"
int armstrong(int x){
    char y[10];
    int sum=0;
    itoa(x,y,10);
    for (int i = 0; i < strlen(y); ++i) {
        sum += pow(((int)y[i]-48),strlen(y));
    }
    if(sum==x)
        return 1;
    else
        return 0;
}
int perfect(int x){
    int sum=0;
    for (int i = 1; i <= x/2; ++i) {
        if((x%i)==0){
            sum += i;
        }
    }
    if(sum==x)
        return 1;
    else
        return 0;
}
int main(void){
    intPrint(armstrong(153));
    Sprint();
    intPrint(perfect(28));
}