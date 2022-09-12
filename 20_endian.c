#include<stdio.h>
int main(){
	unsigned int num = 0x12345678;
	unsigned int ret = num & 0xf;
	if(ret == 0x78){
		printf("the number is Big Endian");
	}
	else{
		printf("the number is Little Endian");
	}
}