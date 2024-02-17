#include "superc.h"
int main(void){
    int arr[6]={1,2,3,4,5,6};
    int arrP[6];
    for (int i = 0; i < 6; ++i) {
        arrP[i]=1;
        for (int j = 0; j < 6; ++j) {
            if(j!=i){
                arrP[i] *= arr[j];
            }
        }
    }
    arrPrint(arrP,6);
}