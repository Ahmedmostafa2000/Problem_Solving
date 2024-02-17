#include <stdio.h>
#include <math.h>
void main(){
	
	int x = 7777*7777;
	int num1 = x/pow(10,4) ;
    float z = x/pow(10,4);
    float a = (z-num1)*pow(10,4);
    a = (int)a;
    int num2 = a;
	printf("%d   %d\n",num1,num2);
	if (num1+num2 == 7777 || num1+num2 == 7776)
	{
		printf("We made it%d\n",10%15 );
	}


	/*for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			
		}
	}*/
}