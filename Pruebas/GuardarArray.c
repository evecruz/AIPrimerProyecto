#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { MAXLINES = 200 };

int main(void)
{
    int i = 0;
    char lines[MAXLINES][BUFSIZ];
    FILE *fp = fopen("2x1BasicProblem08.txt", "r");

    if (fp == 0)
    {
        fprintf(stderr, "No se pudo abrir el archivo\n");
        exit(1);
    }
    while (i < MAXLINES && fgets(lines[i], sizeof(lines[0]), fp))
    {
        lines[i][strlen(lines[i])-1] = '\0';
        i = i + 1;
    }
    fclose(fp);
    printf("%d\n", i);
    srand(time(0));
    char *indexA;
    char *indexB;
    indexA = lines[3];
    indexB = lines[5][2];
    printf("%s\n", indexA); 
    printf("%s\n", indexB); 
    return 0;
}