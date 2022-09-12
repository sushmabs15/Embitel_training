#include <stdio.h>
int main()
{
    unsigned int num, ret;
    printf("Enter the number: ");
    scanf("%x", &num);

    unsigned int pos;
    printf("Enter the position: ");
    scanf("%x", &pos);
 
    printf("0x%x\n", (num ^ (1 << (pos - 1))));
 
    return 0;
}