#include "stdio.h"
void main(){
  int n=0;
  int arr[n];
  int counter=0;
  scanf("%d",&n );
  for (int i = 0; i < n; i++) {
    scanf("%d",&arr[i] );

  }
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n-i; j++) {
      if(arr[i]==arr[j]){
        counter++;
      }
    }
  }
  printf("%d",counter );
}