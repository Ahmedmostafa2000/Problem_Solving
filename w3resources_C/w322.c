#include "stdio.h"
int swap(int *a , int *b){
	int empty;
	empty = *a;
	*a = *b;
	*b = empty;
}
void main(){
	int arr1[2][2] = {{1,2},{3,4}};
	int arr2[2][2] = {{5,6},{7,8}};
	for (int i = 0; i < 1 ; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{	swap(&arr1[i][j],&arr1[j][i]);
		}
	}
	for (int i = 0; i < 2 ; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%d " , arr1[i][j]);
		}
		printf("\n");
	}
}