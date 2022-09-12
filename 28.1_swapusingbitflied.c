#include <stdio.h>
 
int main()
{
    int num, pos1, pos2, value, nbits;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the position 1: ");
    scanf("%d", &pos1);
    printf("Enter the position 2: ");
    scanf("%d", &pos2);
    printf("Enter the number of bits: ");
    scanf("%d", &nbits);
    value = (1 << nbits)-1;
    
    unsigned int set1 = (num >> pos1) & value;
    unsigned int set2 = (num >> pos2) & value;
    unsigned int xor = (set1 ^ set2);
    xor = (xor << pos1) | (xor << pos2);
    unsigned int result = nbits ^ xor;
    printf("\nResult = %d\n", result);
    return 0;
}
