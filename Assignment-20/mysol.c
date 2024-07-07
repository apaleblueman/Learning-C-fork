#include <stdio.h>
#include <stdlib.h>


struct example_struct_t {
	int example_int;
	char example_char;
	float example_float;

};


int main(void){
	struct example_struct_t mystruct = {1, 'c', 1.2};

	printf("%d %c %f", mystruct.example_int, mystruct.example_char, mystruct.example_float);
	
}
