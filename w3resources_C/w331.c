#include "stdio.h"
int main(){
	int arr1[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
	for (int i = 1; i < 3 ; ++i)
	for(int j = 0;j<i;++j)
	{
		if(arr1[j][i])
			goto a;
	}
	for (int i = 1; i < 3 ; ++i)
	for(int j = 0;j<i;++j)
	{
		if(arr1[j][i])
			goto a;
	}
	for (int i = 0; i < 3; ++i)
	{	if(arr1[i][i]!=1)
			goto a;
		
	}
	for (int i = 0; i < 3 ; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
if(0)
{a:
printf("not identity" );
return 0 ;
}
printf("identity" );
return 0 ;
}