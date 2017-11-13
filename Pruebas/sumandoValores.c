#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { MAXLINES = 200 };

int main(int argc, char* argv[])
{
    int i = 2;
    int h=0;
    int valor =0;
    char lines[MAXLINES][BUFSIZ];
    FILE *fp = fopen(argv[1], "r");
    char indexA,indexB,indexC,index1,index2,index3,index4,index5,index6;
    char AZ,AY,AX;
    char * caracteristicas;
    int punteos [8];

    if (fp == 0)
    {
        fprintf(stderr, "No se pudo abrir el archivo\n");
        exit(1);
    }
    while (i < MAXLINES && fgets(lines[i], sizeof(lines[0]), fp))
    {
        lines[i][strlen(lines[i])] = '\0';
        //printf("Indice: %d Contiene: %c\n", i, lines[i][0]);
        if (lines[i][1] != 'x' && i != 4){
            if (lines[i][0] == 'A'){
               indexA = 'A';
               printf("%c\n", indexA);
               //punteos[0] = valor;
               valor = 0;
               
            }
            else if (lines[i][0] == 'B'){
               indexB = 'B';
               punteos[0] = valor;
               valor = 0;
                printf("%c\n", indexB);
            }
            else if (lines[i][0] == 'C'){
               indexC = 'C';
               punteos[1] = valor;
               valor = 0;
                printf("%c\n", indexC);
            }
            else if (lines[i][0] == '1'){
               index1 = '1';
               punteos[2] = valor;
               valor = 0;
                printf("%c\n", index1);
            }
            else if (lines[i][0] == '2'){
               index2 = '2';
               punteos[3] = valor;
               valor = 0;
                printf("%c\n", index2);
            }
            else if (lines[i][0] == '3'){
               index3 = '3';
               punteos[4] = valor;
               valor = 0;
                printf("%c\n", index3);
            }
            else if (lines[i][0] == '4'){
               index4 = '4';
               punteos[5] = valor;
               valor = 0;
                printf("%c\n", index4);
            }
            else if (lines[i][0] == '5'){
               index5 = '5';
               punteos[6] = valor;
               valor = 0;
                printf("%c\n", index5);
            }
            else if (lines[i][0] == '6'){
               index6 = '6';
               punteos[7] = valor;
               valor = 0;
                printf("%c\n", index6);
            }else if (lines[i][0] == 'x'){
                printf("%s\n", "esto no");
            }  
            else if (lines[i][0] == '\t' && lines[i][1] == 'Z' || lines[i][1] == 'X' || lines[i][1] == 'Y'){
                 if (lines[i][1] == 'Z'){
                     
                    AZ = 'Z';
                    printf("%c\n", AZ);
                }else if (lines[i][1] == 'Y'){
                    AY = 'Y';
                    printf("%c\n", AY);
                }else if (lines[i][1] == 'X'){
                    AX = 'X';
                    printf("%c\n", AX);
                }  

            }  
            else if (lines[i][0] == '\t' && lines[i][1] == '\t'){

//tratando de guardar la linea y mandarla a la funcion
            /* sscanf( lines[i], "%s",caracteristicas);

                  valor = pondera(caracteristicas,valor);
                   printf("Valor:  %i\n", valor);
*/

// haciendolo todo junto para probar...

                   if (strstr(lines[i],"circle")){
                      caracteristicas = strstr(lines[i],"circle");
                      printf("%s\n", caracteristicas); 
                      
                   }else if (strstr(lines[i],"square")){
                      caracteristicas = strstr(lines[i],"square");
                      printf("%s\n", caracteristicas); 
                    }else if (strstr(lines[i],"triangle")){
                      caracteristicas = strstr(lines[i],"triangle");
                      printf("%s\n", caracteristicas); 
                    }else if (strstr(lines[i],"yes")){
                      caracteristicas = strstr(lines[i],"yes");
                      //valor = pondera(caracteristicas,valor);
                      //printf("Valor:  %i\n", valor); 
                    }else if (strstr(lines[i],"no")){
                      caracteristicas = strstr(lines[i],"no");
                      //valor = pondera(caracteristicas,valor);
                      //printf("Valor:  %i\n", valor);
                    }

                    valor = pondera(caracteristicas,valor);
                      //printf("Valor:  %i\n", valor);

                   

                  
            }

             
        
        }else{

            i = i + 1;
        
        }



        
    }
    printf("ValorA %i\n", punteos[0]); 
    printf("ValorB %i\n", punteos[1]); 
    printf("ValorC %i\n", punteos[2]); 
    printf("Valor1 %i\n", punteos[3]); 
    printf("Valor2 %i\n", punteos[4]); 
    printf("Valor3 %i\n", punteos[5]); 
    printf("Valor4 %i\n", punteos[6]); 
    printf("Valor5 %i\n", punteos[7]); 
    //printf("Valor6 %i\n", punteos[8]); 

    fclose(fp);
    //printf("%d\n", i);
    //char *indexA;
    //indexA = lines[3];
    //printf("%s\n", indexA); 
    return 0;
}

int pondera(char* propiedad, int value){

    if(strstr(propiedad,"circle")){
        value=value+2;
       // printf("entro\n");
    }else if(strstr(propiedad,"yes")){
        value=value+52;
        // printf("aqui\n");
    }else if(strstr(propiedad,"no")){
        value=value+53;
        // printf("tambien\n");
    }


   return value;

}

