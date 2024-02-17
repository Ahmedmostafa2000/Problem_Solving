#include "superc.h"
int count(int x);
int main(void){
    count(1);
}
int count(int x){
    intPrint(x);Tprint();
    if (x==50)
        return 0;
    count(++x);
}