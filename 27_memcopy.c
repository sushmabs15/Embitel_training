#include<stdio.h>
#include<string.h>
 
void myMemCpy(void *dest, void *src, size_t n)
{

    char *sourc = (char *)src;
    char *desti = (char *)dest;
    for (int i=0; i<n; i++)
    desti[i] = sourc[i];
}
 
int main()
{
    char str[] = "Hello World floks";
    char dest[100];
    myMemCpy(dest, str, strlen(str)+1);
    printf("Copied string is %s", dest);
 
    int len;
    printf("\nEnter the length of array: ");
    scanf("%d",&len);

    int arr[len];
    printf("\narray elements:\n");
    for(int i = 0; i < len; i++){
        printf("\tarr[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    int desti[len], i;
    myMemCpy(desti, arr, sizeof(arr));
    printf("\nCopied array is ");
    for (i=0; i<len; i++)
        printf("%d ", desti[i]);
    printf("\n");
    return 0;
}
