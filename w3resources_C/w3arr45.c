#include "stdio.h"
#include "willuse.h"
#include "math.h"
int main(void){
    int arr[10]={38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    int closest= 1000;//pow(2,sizeof(int))-1;
    int elements[2];
    for (int i = 0; i < 10; ++i) {
        for (int j = i+1; j < 10; ++j) {
            if (abs(arr[i]+arr[j])<closest) {
                closest = abs(arr[i] + arr[j]);
                elements[0] = arr[i];
                elements[1] = arr[j];
            }
        }
    }
    arrPrint(elements,2);
}