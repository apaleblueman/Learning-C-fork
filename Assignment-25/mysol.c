#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>


int main(void){
	int filedesc = open("file.txt", O_WRONLY|O_CREAT, S_IRWXU);
	if(filedesc < 0){
		printf("The open Operation failed\n");
		return -1;
	}
	else{
		printf("The open Operation succeeded\n");
	}

	int writertn = write(filedesc, "TESTING...", 10);
	if(writertn!= 10){
		printf("Write operation failed!\n");
		return -1;
	}
	else{
	
		printf("Write operation suceeded!\n");
	}
	close(filedesc);
	return 0;
}

