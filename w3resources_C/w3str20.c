#include "superc.h"

int main(void){
    char x[] = "It is   a string with smallest and largest word";
    char word[20][20];
    split(x,20,20,word,' ');
    for (int i = 0; i < 9; ++i) {
        puts(word[i]);
    }
}