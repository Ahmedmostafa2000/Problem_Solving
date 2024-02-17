#include "stdio.h"
#include <string.h>
void main(){
	char c[100] = "Hello World";
	char x[strlen(c)];
	for (int i = strlen(c)-1; i >= 0 ; --i)
	{	x[i]=c[i];
		printf("%c ",x[i] );
		}

}