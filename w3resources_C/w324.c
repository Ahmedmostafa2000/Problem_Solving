#include "stdio.h"
void main(){
	int arr1[2][2] = {{1,2},{3,4}};
	int sum=0;
		for (int j = 0; j < 2; j++)
		{
			sum+=arr1[j][1-j];
		}
	
printf("%d\n",sum );}