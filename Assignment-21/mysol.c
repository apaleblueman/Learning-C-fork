#include <stdio.h>
#include <string.h>



struct employee_t{
	char firstname[64];
	char lastname[64];
	int emp_id;
	int emp_ssn;
	char title[64];
};

struct empoyee_db_t{
	struct employee_t employee1;
	struct employee_t employee2;
}employee_db;


int main(void){
	for(int i=0; i < 2; i++){
		
		struct employee_t *ptr_struct = &employee_db.employee1;
		if(i > 0){
			ptr_struct = &employee_db.employee2;
		}
		printf("Please enter first name:");
		scanf("%s", ptr_struct->firstname);
		printf("Please enter last name:");
		scanf("%s", ptr_struct->lastname);
		printf("Please enter employee id:");
		scanf("%d", &ptr_struct->emp_id);
		printf("Please enter employee SSN:");
		scanf("%d", &ptr_struct->emp_ssn);
		printf("Please enter employee title only not role(as in senior, junior):");
		scanf("%s", ptr_struct->title);
	}

	for(int i=0; i<2;i++){
		struct employee_t *ptr_struct = &employee_db.employee1;
		if(i > 0){
			struct employee_t *ptr_struct = &employee_db.employee2;
		}
		printf("Name: %s %s\n", ptr_struct->firstname,ptr_struct->lastname);
		printf("Employee ID: %d\n", ptr_struct->emp_id);
		printf("Employee SSN number: %d\n", ptr_struct->emp_ssn);
		printf("Title: %s Engineer\n", ptr_struct->title);
	}

}
