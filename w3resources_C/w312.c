#include "stdio.h"
int swap(int *a , int *b){
	int empty;
	empty = *a;
	*a = *b;
	*b = empty;
}
void sort(int arr[],int n){
	for (int i = 0; i < n-1; ++i)
	for (int j = 0; j < n-1-i; ++j)
		if (arr[j]<arr[j+1])		
			swap(&arr[j],&arr[j+1]);			
}

void main(){
	int arr[5]={9,6,7,8,3};
	sort(arr,5);
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n",arr[i] );
	}
}