#include "superc.h"
int main(void){
    char x[]="Be glad to see the back of Input replace character : * ";
    for (int i = 0; i < strlen(x); ++i) {
        if(x[i]==' ')
            printf("*");
        else
            printf("%c",x[i]);
    }
}