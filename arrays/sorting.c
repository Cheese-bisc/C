#include <stdio.h>
int main()
{
  int n , a ;

printf("Enter number of elements : ");
scanf("%d" , &n);

  int arr[n];
  
  //input
  printf("Enter %d elements : " , n);
  for(int i = 0 ; i < n ; i++)
  {
    scanf("%d" , &arr[i]);
  }
  
  //sorting
  for(int i = 0 ; i < n ; i++){
    for(int j = i + 1 ; j < n ;j++){
    if(arr[i] > arr[j]){
      a = arr[j];
      arr[j] = arr[i];
      arr[j] = a;
}
}
}
  //printf
  printf("Sorted array : ");
  for (int i = 0 ;i < n;i++) {  
    printf("%d " , arr[i]);
  }
 return 0;
}
