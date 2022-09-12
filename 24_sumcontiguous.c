#include <stdio.h>  

int main()  
{  
    int len;
    printf("Eneter the length of array: ");
    scanf("%d",&len);

    int arr[len];
    printf("\narray elements:\n");
    for(int i = 0; i < len; i++){
        printf("\tarr[%d]: ",i+1);
        scanf("%d",&arr[i]);  
    }

    int sum = 0, max_sum = 0;  
    for (int i = 0; i < len; i++)  
    {  
        sum = sum + arr[i];  
        if (sum > max_sum)  
           max_sum = sum;  
   
        if (sum < 0)  
            sum = 0;  
    }  

    printf("Maximum sum of the contiguous array is : %d", max_sum);  
    return 0;  
}  
