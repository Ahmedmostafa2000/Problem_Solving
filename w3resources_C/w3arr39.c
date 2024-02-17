#include "stdio.h"
#include "willuse.h"
int main(void){
    int arr[11]={0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
    int newArr[11],p=4;
    for (int i = p; i < 11; ++i) {
        newArr[i-p]=arr[i];
    }

    for (int i = 11-p; i < 11; ++i) {
        newArr[i]=arr[i-7];
    }
    arrPrint(newArr,11);
}