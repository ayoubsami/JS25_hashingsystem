#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define MAX 20


void main_func(char* psswd);
void prolong_string(char* psswd, uint8_t* data);





void main_func(char* psswd){


	


	uint8_t data[MAX];
	prolong_string(psswd, data);
	

	int i=0;
	while(i<MAX)
		printf("\n%d --> %b", i, *(data+i++));


	return;
}




 
void prolong_string(char* psswd, uint8_t* data){
	
	int i=0;
	while(psswd[i]!='\0')
		data[i++] = psswd[i];

	while(i<MAX)
		data[i++] = 0b00000000;
}





















int main(){

	char psswd[MAX];

	printf("\nEnter your password: ");
	scanf("%s", psswd);

	main_func(psswd);

	return 0;
}
