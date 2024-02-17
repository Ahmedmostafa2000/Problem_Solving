#include "stdio.h"

void main(){
	int count=0;
	int scount=0;
	char freq;
	char x[100] = "Hello World";
	for (int i = 0; i < 11; ++i)
	{
		for (int j = i+1; j < 11; ++j)
			if(x[i]==x[j])
				count++;

			
			if(count>scount){
			scount=count;
			count=0;
			freq=x[i];}
			}	
printf("%c %d\n",freq,scount+1 );
}