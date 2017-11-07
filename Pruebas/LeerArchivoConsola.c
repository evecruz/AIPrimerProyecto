#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { MAXLINES = 100 };

int main(int argc, char* argv[])
{
    int i = 0;
    char lines[MAXLINES][BUFSIZ];
    FILE *fp = fopen(argv[1], "r");
    char *indexA;

    if (fp == 0)
    {
        fprintf(stderr, "No se pudo abrir el archivo\n");
        exit(1);
    }
    while (i < MAXLINES && fgets(lines[i], sizeof(lines[0]), fp))
    {
        lines[i][strlen(lines[i])-1] = '\0';
        printf("%s\n", lines[i]);
        //printf("%s\n", lines[i][2]);
        i = i + 1;
        //printf("%s\n", lines[i]); 
        /*if (lines[i][0] == '\t' && lines[i][1] == '\t'){
            printf("%s\n", lines[i]); 
            indexA = lines[i];
        }else{
            i = i + 1;
        
        }*/
        
    }
    fclose(fp);
    printf("%d\n", i);
     //char *indexA;
    //indexA = lines[3];
    printf("%s\n", indexA); 
    return 0;
}
