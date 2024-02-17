#include "superc.h"
int main(void){
    int counter=0;
    int max=0;
    int index;
    int mat[5][5] = {   {0, 1, 0, 1, 1},
                        {1, 1, 1, 1, 1},
                        {1, 0, 0, 1, 0},
                        {0, 0, 0, 0, 0},
                        {1, 0, 0, 0, 1}};
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if(mat[i][j])
                counter++;
        }
        if(counter>max){
            max=counter;
            index=i;
        }
        counter=0;
    }
    intPrint(index);
}