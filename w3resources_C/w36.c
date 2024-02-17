#include "stdio.h"
void main(){
	int arr[7]={5,5,2,7,7,5,4};
	int flag=0,x[7]={0};
	for (int i = 0; i < 7; ++i)
	{	for (int j = 0; j < 7; ++j){
		if (arr[i]!=arr[j] & x[i]!=arr[i])
		{
			flag=1;
		}
		else{
			x[i] = arr[i];
			flag=0;
			break;
		}
		if(flag){
			printf("%d\n", arr[i] );
			break;
		}
	}
		
	}
}