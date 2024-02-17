#include "superc.h"
int dTob(int x){
    if(x/2==0){
        return x;
    }
    else{
        return (x%2) +dTob(x/2)*10;
    }
}
int main(){
        intPrint(dTob(64));
}