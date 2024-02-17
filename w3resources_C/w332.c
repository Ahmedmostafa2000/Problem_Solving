#include <stdio.h>
void main(){
	int arr[6]={6 ,8 ,4 ,-5, 7, 9 };
	for (int i = 0; i < 6; ++i)
	{
		for (int j = i+1; j < 6; ++j)
		{
			if((arr[i]+arr[j])==15){
				printf("%d %d\n",arr[i],arr[j]);
			}
		}
	}
}