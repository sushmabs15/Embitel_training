#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the numbers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}