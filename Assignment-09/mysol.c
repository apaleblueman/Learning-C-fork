#include<stdio.h>

int main(int argc, char *argv[]){
        if(argc != 3){
                printf("Usage:\n\t./mysol.c <first name> <lastname>\n");
                return -1;
        }
        printf("Hello, %s %s", argv[1], argv[2]);
}
