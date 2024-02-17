#include "superc.h"
#define n 10
int main(){

    int arr[n]={6, 18, 9, 7, 10,17,10,3,4,5};
    int counter = 0;
    arrBubbleSort(arr,n);
    for (int i = 0; i < n-2; ++i) {
        for (int j = i; j < n-1; ++j) {
            for (int k = j; k < n; ++k) {
                if(i!=j && j!=k && i!=k){
                    if((arr[i]+arr[j])>arr[k])
                        if((arr[i]+arr[k])>arr[j])
                            if((arr[j]+arr[k])>arr[k])
                                counter++;



                }
            }
        }
    }
    intPrint(counter);
}