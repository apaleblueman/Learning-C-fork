#include <stdio.h>
struct simple_struct_t{
	int integer;

};


int main(void){

	struct  simple_struct_t *simple_ptr;
	struct simple_struct_t struct_instance;
	simple_ptr = &struct_instance;
	struct_instance.integer = 1;
	printf("%d",struct_instance.integer);
	
	simple_ptr->integer = 2;
	printf("%d",struct_instance.integer);
	
	(*simple_ptr).integer = 3;
	printf("%d",struct_instance.integer);
	
}

