#include "superc.h"
int main(void){
    char x[]="The string where the word the present more than once. ";
    strlwr(x);
    int count=0;
    for (int i = 0; i < strlen(x); ++i) {
        if(x[i]=='t')
            if(x[i+1]=='h')
                if(x[i+2]=='e')
                    count++;
    }
    intPrint(count);
}