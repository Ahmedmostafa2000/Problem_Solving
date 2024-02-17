#include "superc.h"
int main(void){
    char x[]="this is test string";
    char search[]="test";
    int flag = 0;
    for (int i = 0; i < strlen(x); ++i) {
        if(x[i]==search[0]){
            for (int j = i; j < strlen(search); ++j) {
                if(x[j]!=search[j]){
                    flag = 0;
                    break;
                }
                else {
                    flag = 1;
                }

            }
            if(flag)
                goto a;
        }
    }
    if(1==0){
        a:
        intPrint(1);
    }
    else
        intPrint(0);
}