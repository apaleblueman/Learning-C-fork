#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Initialize arrays 
    char *first;
    char *last;

    // Prompt user to input first and last name and use scanf() to store those to the initialized arrays
    printf("Enter your first name:" );
    scanf("%m[^\n]%*c", &first);  // %49s to prevent buffer overflow
    printf("Enter your last name:" );
    scanf("%m[^\n]%*c", &last);   // %49s to prevent buffer overflow

    // Print the welcome message!
    printf("Hello %s %s", first, last);
    free(first);
    free(last);
    return 0;
}
