#include "superc.h"
int main(void){
    char x[]="this is test string";
    int pos=9;
    int length = 4;
    for (int i = pos-1; i < pos+length; ++i) {
        printf("%c",x[i]);
    }
}