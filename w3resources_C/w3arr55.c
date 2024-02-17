#include "superc.h"
int main(){
    int arr1[] = {4, 8, 7, 11, 6, 9, 5, 0, 2};
    int arr2[] = {5, 4, 2, 0, 6};
    int counter=0,flag=0;
    int n1 = sizeof(arr1)/ sizeof(int);
    int n2 = sizeof(arr2)/ sizeof(int);
    arrBubbleSort(arr1,n1);
    arrBubbleSort(arr2,n2);

    for (int i = 0; i < n1; ++i) {

            if(arr1[i]==arr2[0]){
                for (int j = 0; j < n2; ++j)
                    if (arr1[i+j] == arr2[j])
                        counter++;


                if(counter==n2){
                    flag = 1;
                    goto a;}
                counter=0;
        }
    }
    a:
    intPrint(flag);
}