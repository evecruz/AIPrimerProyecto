#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { MAXLINES = 200 };

int main(int argc, char* argv[])
{
    int i = 0;
    char lines[MAXLINES][BUFSIZ];
    FILE *fp = fopen(argv[1], "r");
    char *indexA,*indexB,*indexC,*index1,*index2,*index3,*index4,*index5,*index6;

    if (fp == 0)
    {
        fprintf(stderr, "No se pudo abrir el archivo\n");
        exit(1);
    }
    while (i < MAXLINES && fgets(lines[i], sizeof(lines[0]), fp))
    {
        lines[i][strlen(lines[i])-1] = '\0';
        //printf("%s\n", lines[i]);
        if (lines[i][0] != '\t' /*&& lines[i][1] == '\t'*/){
            if (lines[i][0] == 'A'){
               indexA = lines[i];
                printf("%s\n", indexA);
            }
            else if (lines[i][0] == 'B'){
               indexB = lines[i];
                printf("%s\n", indexB);
            }
            else if (lines[i][0] == 'C'){
               indexC = lines[i];
                printf("%s\n", indexC);
            }
            else if (lines[i][0] == '1'){
               index1 = lines[i];
                printf("%s\n", index1);
            }
            else if (lines[i][0] == '2'){
               index2 = lines[i];
                printf("%s\n", index2);
            }
            else if (lines[i][0] == '3'){
               index3 = lines[i];
                printf("%s\n", index3);
            }
            else if (lines[i][0] == '4'){
               index4 = lines[i];
                printf("%s\n", index4);
            }
            else if (lines[i][0] == '5'){
               index5 = lines[i];
                printf("%s\n", index5);
            }
            else if (lines[i][0] == '6'){
               index6 = lines[i];
                printf("%s\n", index6);
            }   
             else if (lines[i][0] == 'x'){
                printf("%s\n", "esto no");
            }    
          //  printf("%s\n", lines[i]);
        
        }else{
            i = i + 1;
        
        }
        
    }
    fclose(fp);
    //printf("%d\n", i);
    //char *indexA;
    //indexA = lines[3];
    //printf("%s\n", indexA); 
    return 0;
}

sscanf(buffer, "%d %d %d", &lines[i][0]