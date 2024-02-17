#include "stdio.h"
int mul(int x[],int y[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=x[i]*y[i];
	}
	return sum;
}
void main(){
	int arr1[2][2] = {{1,2},{3,4}};

	int arr2[2][2] = {{5,7},{6,8}};
	int m[2][2];

	for (int i = 0; i < 2; ++i){
		for (int j = 0; j < 2; ++j)
		{
			m[i][j]=mul(arr1[i],arr2[j],2);
			printf("%d ",m[i][j]);
		}	
		printf("\n");}

}