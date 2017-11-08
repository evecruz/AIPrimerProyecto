#include <stdio.h>
#include <stdlib.h> 
int main()
{
    char c[1000];
    FILE *fptr;

    if ((fptr = fopen("2x1BasicProblem01.txt", "r")) == NULL)
    {
        printf("Error! opening file sdfasdf");
       
        exit(1);         
    }

    // reads text until newline 
    fscanf(fptr,"%[^\n]", c);

    printf("Data from the file:\n%s\n", c);
    fclose(fptr);
    
    return 0;
}