#include "stdio.h"
void main(){
	int counter=0;
	int arr1[2][2] = {{0,0},{0,1}};
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (arr1[i][j]==0)
			{
				counter++;
			}
		}
	}
	if (counter>2)
	{
		printf("Sparse\n");
	}
	else{printf("Dense\n");}
}