#include "stdio.h"
#include "willuse.h"
#define n 7
int main(void){
    int arr[n]={4,4,3,5,8,5,4};
    int cannot;
    int counter=0;
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if(arr[i]>arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
    for (int i = 0; i < n; ++i) {

        for (int j = i; j < n; ++j) {
            if(arr[i]==arr[j] && arr[i]!=cannot)
                counter++;

        }
        cannot = arr[i];
        if(counter==2){
            intPrint(arr[i]);
            break;
        }
        counter=0;
    }
}
