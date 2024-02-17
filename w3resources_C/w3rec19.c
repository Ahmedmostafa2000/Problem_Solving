#include "superc.h"
void copy(char x[] ,char y[],int n){
    if(n<0)
        return;
    y[n]=x[n];
    copy(x,y,--n);

}
int main(){
    char x[20] = "ahmad is fankosha";
    char y[20];
    copy(x,y,strlen(x));
    printf("%s",y);
}