#include "stdio.h"
void del(int deleted,int arr[] , int arr2[] ,int n){
	int x=0;
	for (int i = 0; i < n; ++i)
	{

		if (!(arr[i]==deleted))
		{	
			arr2[i-x]=arr[i];
		}
		else{
			x = 1;
		}
	}
}
void main(){
	int arr[5]={1,2,3,4,5};
	int arr2[4];
	del(3,arr,arr2,5);
	for (int i = 0; i < 4; ++i)
	{	//printf("%d\n",arr[i] );
		printf("%d\n",arr2[i] );
	}
	}