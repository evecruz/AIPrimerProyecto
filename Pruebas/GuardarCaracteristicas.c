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

    if (fp == 0)
    {
        fprintf(stderr, "No se pudo abrir el archivo\n");
        exit(1);
    }
    while (i < MAXLINES && fgets(lines[i], sizeof(lines[0]), fp))
    {
        lines[i][strlen(lines[i])-1] = '\0';
        //printf("Indice: %d Contiene: %c\n", i, lines[i][0]);
        if (lines[i][1] != 'x' && i != 4){
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
                  
                    //pondera(caracteristicas,valor);
                   printf("%s\n", caracteristicas); 
                   int n = strcmp(caracteristicas,"circle");
                   valor = pondera(caracteristicas,valor);
                    printf("Valor:  %i\n", valor);
                    //printf("comp:  %i\n", n);
                    }else if (strstr(lines[i],"square")){
                    caracteristicas = strstr(lines[i],"square");
                    
                   printf("%s\n", caracteristicas); 
                    }else if (strstr(lines[i],"triangle")){
                    caracteristicas = strstr(lines[i],"triangle");
                   
                   printf("%s\n", caracteristicas); 
                    }
                   else if (strstr(lines[i],"yes")){
                        caracteristicas = strstr(lines[i],"yes");
                        valor = pondera(caracteristicas,valor);
                        printf("Valor:  %i\n", valor); 
                    }else if (strstr(lines[i],"no")){
                          caracteristicas = strstr(lines[i],"no");
                          valor = pondera(caracteristicas,valor);
                          printf("Valor:  %i\n", valor);
                      }
                    

                  
            }
          //  printf("%s\n", lines[i]);*/
        
        }else{
            i = i + 1;
        
        }

        //if (lines[i][0] == '\t' && lines[i][1] == 'Z'){


        
    }
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
    }else if(strstr(propiedad,"yes")){
        value=value+52;
    }else if(strstr(propiedad,"no")){
        value=value+53;
    }


    /*else if(strstr(propiedad,'square')){
        value=value+7;
    }else if(strstr(propiedad,'triangle')){
        value=value+12;
    }else if(strstr(propiedad,'plus')){
        value=value+17;
    }else if(strstr(propiedad,'rectangle')){
        value=value+22;
    }else if(strstr(propiedad,'arrow')){
        value=value+27;
    }else if(strstr(propiedad,'half-arrow')){
        value=value+32;
    }else if(strstr(propiedad,'Pac-Man')){
        value=value+37;
    }else if(strstr(propiedad,'diamond')){
        value=value+42;
    }*/
   /* 
    if((strstr(propiedad,'fill:yes')){
        value=value+52;
    }else if(strstr(propiedad,'fill:no')){
        value=value+53;
    }else if(strstr(propiedad,'fill:left-half')){
        value=value+54;
    }else if(strstr(propiedad,'fill:right-half')){
        value=value+55;
    }else if(strstr(propiedad,'fill:bottom-half')){
        value=value+56;
    }else if(strstr(propiedad,'fill:top-half')){
        value=value+57;
    }else if(strstr(propiedad,'fill:top-left')){
        value=value+58;
    else if(strstr(propiedad,'fill:top-right')){
        value=value+59;
    }
     
   if((strstr(propiedad,'small')){
        value=value+60;
   }else if(strstr(propiedad,'medium')){
        value=value+61;
   }else if(strstr(propiedad,'large')){
        value=value+62;
   }
   
   if((strstr(propiedad,'angle:0')){
        value=value+63;
   }else if(strstr(propiedad,'angle:70')){
        value=value+64;
   }else if(strstr(propiedad,'angle:90')){
        value=value+65;
   }else if(strstr(propiedad,'angle:780')){
        value=value+66;
   }else if(strstr(propiedad,'angle:770')){
        value=value+67;
   }else if(strstr(propiedad,'angle:-70')){
        value=value+68;
   }
   
   if((strstr(propiedad,'above:z')){
        value=value+69;
   }else if(strstr(propiedad,'above:y')){
        value=value+70;
   }else if(strstr(propiedad,'above:x')){
        value=value+71;
   }else if(strstr(propiedad,'above:w')){
        value=value+72;
   }else if(strstr(propiedad,'above:v')){
        value=value+73;     
   }
   
   if((strstr(propiedad,'left-of:z')){
        value=value+74;
   }else if(strstr(propiedad,'left-of:y')){
        value=value+75;
   }else if(strstr(propiedad,'left-of:x')){
        value=value+76;
   }else if(strstr(propiedad,'left-of:w')){
        value=value+77;
   }else if(strstr(propiedad,'left-of:v')){
        value=value+78;     
   }
   
   if((strstr(propiedad,'inside:z')){
        value=value+79;
   }else if(strstr(propiedad,'inside:y')){
        value=value+80;
   }else if(strstr(propiedad,'inside:x')){
        value=value+81;
   }else if(strstr(propiedad,'inside:w')){
        value=value+82;
   }else if(strstr(propiedad,'inside:v')){
        value=value+83;     
   }
   
   if((strstr(propiedad,'overlaps:z')){
        value=value+84;
   }else if(strstr(propiedad,'overlaps:y')){
        value=value+85;
   }else if(strstr(propiedad,'overlaps:x')){
        value=value+86;
   }else if(strstr(propiedad,'overlaps:w')){
        value=value+87;
   }else if(strstr(propiedad,'overlaps:v')){
        value=value+88;     
   }
   
   if((strstr(propiedad,',z')){
        value=value+89;
   }else if(strstr(propiedad,',y')){
        value=value+90;
   }else if(strstr(propiedad,',x')){
        value=value+91;
   }else if(strstr(propiedad,',w')){
        value=value+92;
   }else if(strstr(propiedad,',v')){
        value=value+93;
   }
   
   if((strstr(propiedad,'vertical-flip:no')){
        value=value+94;
   }else if(strstr(propiedad,'vertical-flip:yes')){
        value=value+95;
   }
   
   if((strstr(propiedad,'fill:bottom-left')){
        value=value+96;
   }else if(strstr(propiedad,'fill:bottom-right')){
        value=value+97; 
   }else if(strstr(propiedad,',bottom-left')){
        value=value+98;
   }else if(strstr(propiedad,',bottom-right')){
        value=value+99;
   }else if(strstr(propiedad,',top-right')){
        value=value+100;
   }else if(strstr(propiedad,',top-left')){
        value=value+101;
   }
*/
   return value;

}

