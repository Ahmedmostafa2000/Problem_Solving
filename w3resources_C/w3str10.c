#include "superc.h"
int main(void){
    char x[]="Welcome to w3resource.com.";
    strlwr(x);
    int count=0;
    int max = 0;
    char letter;
    for (int i = 0; i < strlen(x); ++i) {
        for (int j = 0; j < strlen(x); ++j) {
            if(x[i]==x[j] && i!=j)
            {
                count++;
            }
        }

        if(count>max){
            max=count;
            letter=x[i];
        }
        count=0;



    }
    printf("%c",letter);
}