#include "stdio.h"
void main(){
	char x[100] = "Hello World";
	int counter=1;
	for (int i = 0 ; i < 11 ; ++i){
	if(x[i]==' ')
		counter++;
}
	printf("%d\n",counter);
}

