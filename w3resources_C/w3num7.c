#include <stdio.h>
#include <math.h>
int howManyDigits(int x){
	for (int i = 1; i < 10; ++i)
	{
		if(((int)x % (int)pow(10,i))==x){
			return i;
		}
	}
	return 0 ;
}
void main(){
	for (int i = 1; i <= 1000; ++i)
	{

	int x = i*i;
	int h = howManyDigits(x);
	int num1 = x/pow(10,h/2) ;
    float z = x/pow(10,h/2);
    float a = (z-num1)*pow(10,h/2);
    a = (int)a;
    int num2 = a;
    if (num1+num2 == i || num1+num2 == i-1)
    	printf("%d\n",i );
	}


}