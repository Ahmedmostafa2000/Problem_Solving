#include "stdio.h"
void main(){
	int n = 5;
	int arr[5]={25,12,43,25,14};
	int arr2[5][2];
	int counter=0;
	for(int i=0;i<n;i++){
		arr2[i][0]=arr[i];

	}
	for (int i = 0; i < n; ++i){	
		for(int j=0;j < n;j++ ){
		if(arr[i]==arr2[j][0])
			counter++;	
	}	
		arr2[i][1]=counter;
		counter=0;
		printf("%d %d\n",arr2[i][0],arr2[i][1]);
	}
}