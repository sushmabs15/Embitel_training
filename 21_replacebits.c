#include<stdio.h>
int main(){
	unsigned int num, ret, nbits, value, new_val;
	printf("Enter the number: ");
	scanf("%x", &num);

	unsigned int pos;
	printf("Enter the position: ");
	scanf("%x", &pos);

	printf("Enter the number of bits: ");
	scanf("%x", &nbits);

	// value = (1 << nbits) - 1;
	// ret = num & (~(value << pos));
	// printf("Replace bit value is 0x%x\n",ret);
	// new_val = new_val | (ret << pos);

	value = 1 << pos - 1;
    new_val = ((num & ~value) | (nbits << pos));

	printf("Replace bit value is 0x%x\n",new_val);

	return 0;
}
 
    
 
