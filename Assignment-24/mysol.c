#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main(void){
	int filedesc = open("myfile.txt", O_WRONLY|O_CREAT, S_IRWXU);	
	if(filedesc == -1){
		printf("The open Operation failed");
		return -1;

	}
	else{
		printf("The open Operation succeeded");
		return 0;
	}
	
};


