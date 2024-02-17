#include "stdio.h"
void main(){
	int arr[5]={9,4,5,2,3};
	int bigger=arr[0];
	int smaller=arr[0];
	for (int i = 0; i < 5; ++i)
	{
		if (bigger<arr[i])
		{
			bigger=arr[i];
		}
		if (smaller>arr[i]){
			smaller = arr[i];
		}
	}
	printf("%d %d",bigger,smaller );
}