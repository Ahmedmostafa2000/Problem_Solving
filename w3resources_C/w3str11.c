#include "superc.h"
int main(void){
    char x[]="w3resource";
    char temp;
    for (int i = 0; i < strlen(x)-1; ++i) {
        for (int j = i+1; j < strlen(x); ++j) {
            if(x[i]>x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    puts(x);
}