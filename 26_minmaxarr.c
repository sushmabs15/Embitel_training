#include <stdio.h>

int main(){
   int len;
    printf("Enter the length of array: ");
    scanf("%d",&len);

   int arr[len];
   printf("\narray elements:\n");
   for(int i = 0; i < len; i++){
      printf("\tarr[%d]: ",i+1);
      scanf("%d",&arr[i]);
   }

   int min=0,max=0;
   
   if (len == 1)
      { min=max=arr[0]; }
   
   if (arr[0] > arr[1]){
      max = arr[0];
      min = arr[1];
   }
   else{
      max = arr[1];
      min = arr[0];
   }
   for (int i = 2; i<len; i++){
      if (arr[i] > max)
         max = arr[i];
      else if (arr[i] < min)
         min = arr[i];
   }
   printf("Minimum element: %d\n", min);
   printf("Maximum element: %d\n", max);
}

