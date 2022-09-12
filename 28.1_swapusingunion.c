#include<stdio.h>
union test {
    unsigned int x;
    unsigned int y;
};
  
int main()
{
    union test t;
    unsigned int temp;
  
    t.x = 2;
    t.y = 10;

    temp = t.x;
    t.x = t.y;
    t.y = temp;

    printf("x = 0x%x, y = 0x%x\n",t.x, t.y);
    return 0;
}
