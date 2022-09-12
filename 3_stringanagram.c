#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str1[50], str2[50];
	int flag = 0, arr1[50] = {0}, arr2[50] = {0};
	
	printf("Enter the string 1: ");
	scanf("%s", &str1);

	printf("Enter the string 2: ");
	scanf("%s", &str2);

	int i=0; 
	while(str1[i] != '\0'){
		arr1[str1[i] - 'a']++;
		i++;
	}

	i = 0;

	while(str2[i] != '\0'){
		arr2[str2[i] - 'a']++;
		i++;
	}

	for(int j = 0; j < 20; j++){
		if(arr1[j] != arr2[j]){
			flag++;	
		}
	}

	if(flag == 1){
		printf("Strings are anagram to each other\n");
	}
	else{
		printf("Strings are not anagram to each other\n");
	}



	return 0;
}
