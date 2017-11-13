#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { MAXLINES = 200 };

int main(int argc, char* argv[])
{
    int i = 2;
    char lines[MAXLINES][BUFSIZ];
    FILE *fp = fopen(argv[1], "r");
    char indexA,indexB,indexC,index1,index2,index3,index4,index5,index6;

    if (fp == 0)
    {
        fprintf(stderr, "No se pudo abrir el archivo\n");
        exit(1);
    }
    while (i < MAXLINES && fgets(lines[i], sizeof(lines[0]), fp))
    {
        lines[i][strlen(lines[i])-1] = '\0';
        //printf("Indice: %d Contiene: %c\n", i, lines[i][0]);
        if (lines[i][0] != '\t' && lines[i][1] != 'x' && i != 4){
            if (lines[i][0] == 'A'){
               indexA = 'A';
                printf("%c\n", indexA);
            }
            else if (lines[i][0] == 'B'){
               indexB = 'B';
                printf("%c\n", indexB);
            }
            else if (lines[i][0] == 'C'){
               indexC = 'C';
                printf("%c\n", indexC);
            }
            else if (lines[i][0] == '1'){
               index1 = '1';
                printf("%c\n", index1);
            }
            else if (lines[i][0] == '2'){
               index2 = '2';
                printf("%c\n", index2);
            }
            else if (lines[i][0] == '3'){
               index3 = '3';
                printf("%c\n", index3);
            }
            else if (lines[i][0] == '4'){
               index4 = '4';
                printf("%c\n", index4);
            }
            else if (lines[i][0] == '5'){
               index5 = '5';
                printf("%c\n", index5);
            }
            else if (lines[i][0] == '6'){
               index6 = '6';
                printf("%c\n", index6);
            }   
             else if (lines[i][0] == 'x'){
                printf("%s\n", "esto no");
            }    
          //  printf("%s\n", lines[i]);*/
        
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


//sscanf(buffer, "%d %d %d", &lines[i][0]