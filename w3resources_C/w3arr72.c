#include "superc.h"
int main(void){
    int mat[4][5];
    int flag=1;
    matParse(4,5,mat);
    for (int i = 0; i < 3; ++i) {
        for(int j = i+1; j < 4; ++j) {

            if (arrcmp(mat[i], mat[j], 5)) {
                flag = 0;
                break;
            } else {
                arrPrint(mat[i], 5);
                Sprint();
            }
            if(!flag)
                break;
        }

    }

}