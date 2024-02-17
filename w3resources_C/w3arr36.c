#include "stdio.h"
#include "willuse.h"
int main(void){
    int arr[]={1, 3, 4, 2, 5, 6, 9, 8 };
    for (int i = 0; i < 8; ++i) {
        for (int j = i+1; j < 8; ++j) {
            if(arr[i]>arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
    for (int i = 0; i < 7; ++i) {
        if(arr[i+1]!=(arr[i]+1)){
            printf("%d\n",arr[i]+1);
        break;}
    }
    arrPrint(arr,8);
}