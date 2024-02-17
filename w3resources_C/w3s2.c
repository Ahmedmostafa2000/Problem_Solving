#include "stdio.h"
void main(){
	char c[100] = "Hello World";
	for (int i = 0; i < 100; ++i)
	{
		if (c[i]==0)
		{
			printf("%d\n",i);
			break;
		}
	}
}