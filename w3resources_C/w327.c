#include "stdio.h"
void main(){
	int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for (int i = 1; i < 3 ; ++i)
	for(int j = 0;j<i;++j)
	{
		arr1[j][i]=0;
	}
	for (int i = 0; i < 3 ; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
}