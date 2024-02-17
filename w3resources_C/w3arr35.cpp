#include <stdio.h>
int main(void){
    int arr[9]={8, 3, 8, -5, 4, 3, -4, 3, 5};
    int x = 0;
    int max = 0;
    for(int i = 0 ; i<9 ; i++){
        for (int j = i; j < 9; ++j) {
            x+=arr[j];
            if(x>max && x!=25)
                max=x;
        }
        printf("%d\n",max);
        x = 0;
    }
    printf("%d",max);
}