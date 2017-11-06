#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

enum { MAXLINES = 30 };

int main(void)
{
    int i = 0;
    char lines[MAXLINES][BUFSIZ];
    FILE *fp = fopen("prueba.txt", "r");

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
    printf("%s %s %s %s %s\n", lines[0], lines[1], lines[2], lines[3], lines[4]); 
    return 0;
}