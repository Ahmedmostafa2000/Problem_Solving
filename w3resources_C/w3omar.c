#include <stdio.h>
void main(){
	int arr[3]={5,7,9};
	int arr2[4];
	int i,n=0,j=i+n;

	for (int i = 0; i < 3; ++i)
	{
		arr2[i]=arr[j];
		if(arr[i]<8){
			if(8<arr[i+1]){
			n=1;
			arr2[i]=8;
		}
	}
	}
	for (int i = 0; i < 4; ++i)
	{
		printf("%d ",arr2[i]);
	}
}
