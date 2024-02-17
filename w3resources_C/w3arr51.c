#include "willuse.h"
int main(void){
    int arr[9]={10, 8, -20, 5, -3, -5, 10, -13, 11 };
    int sum = 0;
    int largest=0;
    arrBubbleSort(arr,9);
    arrPrint(arr,9);
    Sprint();
    for (int i = 0; i < 9; ++i) {
        for (int j = i; j < 9; ++j) {
            sum += arr[j];

        }
        if(sum>largest)
            largest = sum;
        sum = 0;
    }
    intPrint(largest);
}