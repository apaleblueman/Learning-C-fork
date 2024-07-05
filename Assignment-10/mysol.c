#include<stdio.h>


int main(void){
             int myarray[10] = {1,2,3,4,5,6,7,8,9,10};
             int lengthOfArray = sizeof(myarray)/sizeof(int);
             printf("Number of elements in the array is %d", lengthOfArray);
}

