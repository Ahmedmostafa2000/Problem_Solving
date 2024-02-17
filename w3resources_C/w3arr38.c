#include "stdio.h"
#include "willuse.h"
int main(void){
    int arr1[7]={10, 12, 14, 16, 18, 20, 22};
    int arr2[6]={11, 13, 15, 17, 19, 21};
    int arrMerge[13];
    int i=0,j=0;

    while (1) {
        if(arr1[i]<arr2[j]){
            arrMerge[i+j] = arr1[i];
            i++;
        }
        else {
            arrMerge[i + j] = arr2[j];
            j++;
        }
        printf("%d\n",i+j);
        if((i+j)==12)
            break;


    }
    arrMerge[12]=arr1[6];
    arrPrint(arrMerge,13);
}