#include <stdio.h>
int main(){
    int n, temp, i, j;
    printf("Enter the numbers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j]) 
            {
                temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", arr[i]);
}