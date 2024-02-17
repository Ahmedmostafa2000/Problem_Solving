#include "superc.h"
int po(char x[],int start,int end){
    if(end<start || start+2==end){
        return 1;
    }
    if(x[start]==x[end]){
        start++;
        end--;
        po(x,start,end);
    } else
        return 0;
}
int main(){
    char x[50]="papa";
    intPrint(po(x,0,3));
}