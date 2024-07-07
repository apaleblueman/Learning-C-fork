#include <stdio.h>
#include <stdlib.h>
#define MAX_CHAR 100

int main(){
	char *mychar;
	

	mychar = malloc(sizeof(char)*MAX_CHAR);
	if(mychar == NULL){
		printf("Memory Allocation Failed!\n");
		return 1;
	}
	else{
		printf("Memory Alocation Successful!\n");
		return 0;
		free(mychar);
	}
	

}
