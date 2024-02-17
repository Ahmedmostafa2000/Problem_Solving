#include "superc.h"
int main(void){
    char x[]="Welcome to w3resource.com ";
    int alpha = 0;
    int digits = 0;
    int special = 0;
    for (int i = 0; i < strlen(x); ++i) {
        if((x[i]>64 && x[i]<91) || (x[i]>96 && x[i]<124) )
            alpha++;
        else if(x[i]>47 && x[i]<58)
            digits++;
        else
            special++;
    }
    intPrint(alpha);Tprint();
    intPrint(digits);Tprint();
    intPrint(special);
}