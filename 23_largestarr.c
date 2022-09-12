#include <stdio.h>    
     
int main()    
{         
    int len;
    printf("Enter the length of array: ");
    scanf("%d",&len);

    int arr[len];
    printf("\narray elements:\n");
    for(int i = 0; i < len; i++){
        printf("\tarr[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }        

    int max = arr[0];    
    for (int i = 0; i < len; i++) {        
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element in the array: %d\n", max);    
    return 0;    
}    
