#include "stdio.h"
int in(int a,int x[],int n){
	for(int i=0;i<n;i++){
	  		if(a==x[i]){
			return 1;}
		}
	return 0;
}
void main(){
  int n;
  int counter=0;
  scanf("%d",&n );
  int arr[n];
  int arr2[n];
  for (int i = 0; i < n; i++) {
    scanf("%d",&arr[i] );
  }
  for (size_t i = 0; i < n; i++) {
    for (size_t j = i+1; j < n; j++) {
        if(arr[i]==arr[j] && ! in(arr[i],arr2,n)){

            counter++;
            arr2[i]==arr[i];
            break;
        }
      }
      }
  printf("%d",counter );
}
