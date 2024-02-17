#include "stdio.h"
#include <string.h>
void main(){
	char x[100] = "Hello World";
	char y[100] = "Hello Warld";
	int flag=1;
	if (strlen(x)==strlen(y))
	{
		for (int i = 0 ; i < 11 ; ++i){
			if (!(x[i]==y[i]))
			{
				flag=0;
				break;
			}

		}
	
	
}
else{flag=0;}
	printf("%d\n",flag);
}


