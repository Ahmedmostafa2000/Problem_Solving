#include "superc.h"
int in(char search,char x[]){
    for (int i = 0; i < strlen(x); ++i) {
        if(x[i]==search)
            return 1;
    }
    return 0;
}
int anagram(char x[],char y[]){
    int flag=0;
    for (int i = 0; i < strlen(x); ++i) {
        if(in(x[i],y))
              flag=1;
        else{
            flag=0;
            break;
        }

    }
    return flag;
}
int main(void){
    intPrint(anagram("ahmed","damha"));
}