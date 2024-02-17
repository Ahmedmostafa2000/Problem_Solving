#include <stdio.h>
void main(){
	char x[100] = "Hello World";
	int start = 3;
	int end = 7;
	for (int i = start ; i <= end; ++i)
	{
		printf("%c",x[i] );
	}
}