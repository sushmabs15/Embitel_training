#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, sum = 0;
    printf("Enter the numbers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    printf("%d\n",sum);
}