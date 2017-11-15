#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { MAXLINES = 200 };

int main(int argc, char* argv[])
{
    int i = 2;
    int h=0;
    int l=0;
    int valor =0;
    char lines[MAXLINES][BUFSIZ];
    FILE *fp = fopen(argv[1], "r");
    char indexA,indexB,indexC,index1,index2,index3,index4,index5,index6;
    int Z,Y,X;
    int BZ,BY,BX;
    int CZ,CY,CX;
    char *caracteristicas;
    int punteos [8];
    int figPunteos[29];
    int cont=0;

    punteos[0] = 0;
    punteos[1] = 0;
    punteos[2] = 0;
    punteos[3] = 0;
    punteos[4] = 0;
    punteos[5] = 0;
    punteos[6] = 0;
    punteos[7] = 0;
    punteos[8] = 0;

    if (fp == 0)
    {
        fprintf(stderr, "No se pudo abrir el archivo\n");
        exit(1);
    }
    while (i < MAXLINES && fgets(lines[i], sizeof(lines[0]), fp))
    {
        lines[i][strlen(lines[i])] = '\0';
       // printf("Indice: %d Contiene: %c\n", i, lines[i][0]);
        if (lines[i][1] != 'x' && i != 4){
            if (lines[i][0] == 'A'){
               indexA = 'A';
              // printf("%c\n", indexA);
               //punteos[0] = valor;
               //valor = 0;
               
            }
            else if (lines[i][0] == 'B'){
               indexB = 'B';
              // punteos[0] = valor;
               //valor = 0;
                //printf("%c\n", indexB);
            }
            else if (lines[i][0] == 'C'){
               indexC = 'C';
               //punteos[1] = valor;
               //valor = 0;
                //printf("%c\n", indexC);
            }
            else if (lines[i][0] == '1'){
               index1 = '1';
               //punteos[2] = valor;
               //valor = 0;
                //printf("%c\n", index1);
            }
            else if (lines[i][0] == '2'){
               index2 = '2';
               //punteos[3] = valor;
               //valor = 0;
               // printf("%c\n", index2);
            }
            else if (lines[i][0] == '3'){
               index3 = '3';
               //punteos[4] = valor;
               //valor = 0;
                //printf("%c\n", index3);
            }
            else if (lines[i][0] == '4'){
               index4 = '4';
               //punteos[5] = valor;
               //valor = 0;
               // printf("%c\n", index4);
            }
            else if (lines[i][0] == '5'){
               index5 = '5';
               //punteos[6] = valor;
               //valor = 0;
                //printf("%c\n", index5);
            }
            else if (lines[i][0] == '6'){
               index6 = '6';
              // punteos[7] = valor;
              // valor = 0;
               // printf("%c\n", index6);
            }else if (lines[i][0] == 'x'){
                printf("%s\n", "esto no");
            }  
            else if (feof(fp)) { 
             // punteos[8] = valor;

            }else if (lines[i][0] == '\t' && lines[i][1] == '\t'){

              

//tratando de guardar la linea y mandarla a la funcion
             //sscanf(lines[i], "%s",caracteristicas);

                /*  valor = pondera(caracteristicas,valor);
                   printf("Valor:  %i\n", valor);
*/

// haciendolo todo junto para probar...
                   //while(lines[i][0] == '\t'){
                   if((lines[i][1] != 'Z') && (lines[i][1] != 'Y') && (lines[i][1] != 'X')){
                      ///if ((strstr(lines[i],"shape")) || (strstr(lines[i],"fill"))|| (strstr(lines[i],"shape"))|| (strstr(lines[i],"size"))|| (strstr(lines[i],"above"))|| (strstr(lines[i],"inside"))){
                      valor = pondera(lines[i],valor);
                        //printf("Osoo \n");
                       
                         //printf("Indice: %d Contiene: %c\n", i, lines[i][2]);                 
                       
                   // }
                  }
                     // }

                  
                    
                  
                 
            
        
            }else if ((lines[i][1] == 'Z')  || (lines[i][1] == 'Y') || (lines[i][1] == 'X') || (lines[i][0] != '\0')){
              
                    if(lines[i][1] == 'X'){
                  l =2;
              }
          else if(lines[i][1] == 'Y'){
                  l =1;
          }else if(lines[i][1] == 'Z'){
                  l =0;
          }

          if (cont>0){
                     // printf("gato \n");
                      figPunteos[h] = valor;
                      //printf("Posicion: %d Contiene: %i\n\n",h, figPunteos[h]);    
                      valor = 0;
                      h = h + 1;
          }
          cont++;
                     //printf("h %i\n\n", h);
                     //printf("i %i\n\n", i);
                      }
            /*else if (lines[i][0] == '\t' && lines[i][1] == 'Z' || lines[i][1] == 'X' || lines[i][1] == 'Y'){
                 
                 if (lines[i][1] == 'Z'){
                    Z = valor;
                    printf("%c\n", AZ);
                }else if (lines[i][1] == 'Y'){
                    AY = valor;
                    printf("%c\n", AY);
                }else if (lines[i][1] == 'X'){
                    AX = valor;
                    printf("%c\n", AX);
                }  

            }  */
                

             
        
        }else{

            i = i + 1;
        
        }



        
    }
     valor = pondera(lines[i],valor);
     figPunteos[h] = valor;
   // printf("l: %i\n", l);
   // valor = compara(figPunteos,valor);
   /*printf("ValorA %i\n", figPunteos[0]); 
    printf("ValorB %i\n", figPunteos[1]); 
    printf("ValorC %i\n", figPunteos[2]); 
    printf("Valor1 %i\n", figPunteos[3]); 
    printf("Valor2 %i\n", figPunteos[4]); 
    printf("Valor3 %i\n", figPunteos[5]); 
    printf("Valor4 %i\n", figPunteos[6]); 
    printf("Valor5 %i\n", figPunteos[7]); 
    printf("Valor6 %i\n", figPunteos[8]); */
    //valor = compara(punteos,valor);

    
   if (l == 2){

    punteos[0] = figPunteos[1]+figPunteos[2]+figPunteos[3];
    punteos[1] = figPunteos[4]+figPunteos[5]+figPunteos[6];
    punteos[2] = figPunteos[7]+figPunteos[8]+figPunteos[9];
    punteos[3] = figPunteos[10]+figPunteos[11]+figPunteos[12];
    punteos[4] = figPunteos[13]+figPunteos[14]+figPunteos[15];
    punteos[5] = figPunteos[16]+figPunteos[17]+figPunteos[18];
    punteos[6] = figPunteos[19]+figPunteos[20]+figPunteos[21];
    punteos[7] = figPunteos[22]+figPunteos[23]+figPunteos[24];
    punteos[8] = figPunteos[25]+figPunteos[26]+figPunteos[27];
    printf("Mi prediccion es: %i\n", compara(punteos,valor));
  }else if (l == 1){

    punteos[0] = figPunteos[1]+figPunteos[2];
    punteos[1] = figPunteos[3]+figPunteos[4];
    punteos[2] = figPunteos[5]+figPunteos[6];
    punteos[3] = figPunteos[7]+figPunteos[8];
    punteos[4] = figPunteos[9]+figPunteos[10];
    punteos[5] = figPunteos[11]+figPunteos[12];
    punteos[6] = figPunteos[13]+figPunteos[14];
    punteos[7] = figPunteos[15]+figPunteos[16];
    punteos[8] = figPunteos[17]+figPunteos[18];
    printf("Mi prediccion es: %i\n", compara(punteos,valor));
  }else if(l==0){
    punteos[0] = figPunteos[0];
    punteos[1] = figPunteos[1];
    punteos[2] = figPunteos[2];
    punteos[3] = figPunteos[3];
    punteos[4] = figPunteos[4];
    punteos[5] = figPunteos[5];
    punteos[6] = figPunteos[6];
    punteos[7] = figPunteos[7];
    punteos[8] = figPunteos[8];
    
    printf("Mi prediccion es: %i\n\n", compara(punteos,valor));
  }

/*printf("l; %i\n\n\n", l);
   printf("Valor0 %i\n", punteos[0]); 
    printf("Valor1 %i\n", punteos[1]); 
    printf("Valor2 %i\n", punteos[2]); 
    printf("Valor3 %i\n", punteos[3]); 
    printf("Valor4 %i\n", punteos[4]); 
    printf("Valor5 %i\n", punteos[5]); 
    printf("Valor6 %i\n", punteos[6]); 
    printf("Valor7 %i\n", punteos[7]); 
    printf("Valor8 %i\n", punteos[8]); 
    printf("Valor9 %i\n", punteos[9]); 
    
*/
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
    }else if(strstr(propiedad,"square")){
        value=value+7;
    }else if(strstr(propiedad,"triangle")){
        value=value+12;
    }else if(strstr(propiedad,"plus")){
        value=value+17;
    }else if(strstr(propiedad,"rectangle")){
        value=value+22;
    }else if(strstr(propiedad,"arroW")){
        value=value+27;
    }else if(strstr(propiedad,"half-arroW")){
        value=value+32;
    }else if(strstr(propiedad,"Pac-Man")){
        value=value+37;
    }else if(strstr(propiedad,"diamond")){
        value=value+42;
    }else if(strstr(propiedad,"fill:yes")){
        value=value+52;
    }else if(strstr(propiedad,"fill:no")){
        value=value+53;
    }else if(strstr(propiedad,"fill:left-half")){
        value=value+54;
    }else if(strstr(propiedad,"fill:right-half")){
        value=value+55;
    }else if(strstr(propiedad,"fill:bottom-half")){
        value=value+56;
    }else if(strstr(propiedad,"fill:top-half")){
        value=value+57;
    }else if(strstr(propiedad,"fill:top-left")){
        value=value+58;
    }else if(strstr(propiedad,"fill:top-right")){
        value=value+59;
    }
     
   else if(strstr(propiedad,"small")){
        value=value+60;
    }else if(strstr(propiedad,"medium")){
        value=value+61;
   }else if(strstr(propiedad,"large")){
        value=value+62;
   }
   
   else if(strstr(propiedad,"angle:0")){
        value=value+63;
    }else if(strstr(propiedad,"angle:70")){
        value=value+64;
   }else if(strstr(propiedad,"angle:90")){
        value=value+65;
   }else if(strstr(propiedad,"angle:780")){
        value=value+66;
   }else if(strstr(propiedad,"angle:770")){
        value=value+67;
   }else if(strstr(propiedad,"angle:-70")){
        value=value+68;
   }
   
  else if(strstr(propiedad,"above:Z")){
        value=value+69;
    }else if(strstr(propiedad,"above:Y")){
        value=value+70;
   }else if(strstr(propiedad,"above:X")){
        value=value+71;
   }else if(strstr(propiedad,"above:W")){
        value=value+72;
   }else if(strstr(propiedad,"above:V")){
        value=value+73;     
   }
   
   else if(strstr(propiedad,"left-of:Z")){
        value=value+74;
   }else if(strstr(propiedad,"left-of:Y")){
        value=value+75;
   }else if(strstr(propiedad,"left-of:X")){
        value=value+76;
   }else if(strstr(propiedad,"left-of:W")){
        value=value+77;
   }else if(strstr(propiedad,"left-of:V")){
        value=value+78;     
   }
   
   else if(strstr(propiedad,"inside:Z")){
        value=value+79;
   }else if(strstr(propiedad,"inside:Y")){
        value=value+80;
   }else if(strstr(propiedad,"inside:X")){
        value=value+81;
   }else if(strstr(propiedad,"inside:W")){
        value=value+82;
   }else if(strstr(propiedad,"inside:V")){
        value=value+83;     
   }
   
   else if(strstr(propiedad,"overlaps:Z")){
        value=value+84;
   }else if(strstr(propiedad,"overlaps:Y")){
        value=value+85;
   }else if(strstr(propiedad,"overlaps:X")){
        value=value+86;
   }else if(strstr(propiedad,"overlaps:W")){
        value=value+87;
   }else if(strstr(propiedad,"overlaps:V")){
        value=value+88;     
   }
   
   else if(strstr(propiedad,",Z")){
        value=value+89;
   }else if(strstr(propiedad,",Y")){
        value=value+90;
   }else if(strstr(propiedad,",X")){
        value=value+91;
   }else if(strstr(propiedad,",W")){
        value=value+92;
   }else if(strstr(propiedad,",V")){
        value=value+93;
   }
   
   else if(strstr(propiedad,"vertical-flip:no")){
        value=value+94;
   }else if(strstr(propiedad,"vertical-flip:yes")){
        value=value+95;
   }
   
   else if(strstr(propiedad,"fill:bottom-left")){
        value=value+96; 
   }else if(strstr(propiedad,"fill:bottom-right")){
        value=value+97; 
   }else if(strstr(propiedad,",bottom-left")){
        value=value+98;
   }else if(strstr(propiedad,",bottom-right")){
        value=value+99;
   }else if(strstr(propiedad,",top-right")){
        value=value+100;
   }else if(strstr(propiedad,",top-left")){
        value=value+101;
   }


   return value;

}

int compara(int* array, int value){


  if (array[0]==array[3]){
    array[3] = 1000;
  }else if (array[0]==array[4]){
    array[4] = 1000;
  }else if (array[0]==array[5]){
    array[5] = 1000;
  }else if (array[0]==array[6]){
    array[6] = 1000;
  }else if (array[0]==array[7]){
    array[7] = 1000;
  }else if (array[0]==array[8]){
    array[8] = 1000;
  }

  if (array[1]==array[3]){
    array[3] = 1000;
  }else if (array[1]==array[4]){
    array[4] = 1000;
  }else if (array[1]==array[5]){
    array[5] = 1000;
  }else if (array[1]==array[6]){
    array[6] = 1000;
  }else if (array[1]==array[7]){
    array[7] = 1000;
  }else if (array[1]==array[8]){
    array[8] = 1000;
  }

  if (array[2]==array[3]){
    array[3] = 1000;
  }else if (array[2]==array[4]){
    array[4] = 1000;
  }else if (array[2]==array[5]){
    array[5] = 1000;
  }else if (array[2]==array[6]){
    array[6] = 1000;
  }else if (array[2]==array[7]){
    array[7] = 1000;
  }else if (array[2]==array[8]){
    array[8] = 1000;
  }

  int AB = abs(array[0] - array [1]);
 // printf("esto es AB: %i\n",AB );
  int C1 = abs(array[2] - array [3]);
  int C2 = abs(array[2] - array [4]);
  int C3 = abs(array[2] - array [5]);
  int C4 = abs(array[2] - array [6]);
  int C5 = abs(array[2] - array [7]);
  //printf("esto es 5C: %i\n",C5 );
  int C6 = abs(array[2] - array [8]);

  int AC = abs(array[0] - array [2]);
  //printf("esto es AC: %i\n", AC);
  int B1 = abs(array[1] - array [3]);
  int B2 = abs(array[1] - array [4]);
  int B3 = abs(array[1] - array [5]);
  int B4 = abs(array[1] - array [6]);
  int B5 = abs(array[1] - array [7]);
  int B6 = abs(array[1] - array [8]);

  C1 = abs(AB - C1);
  C2 = abs(AB - C2);
  C3 = abs(AB - C3);
  C4 = abs(AB - C4);
  C5 = abs(AB - C5);
  //printf("esto es 5C: %i\n",C5 );
  C6 = abs(AB - C6);
  //printf("esto es C6: %i\n",C6 );

  B1 = abs(AC - B1);
  B2 = abs(AC - B2);
  B3 = abs(AC - B3);
  B4 = abs(AC - B4);
  B5 = abs(AC - B5);
  B6 = abs(AC - B6);
  //printf("esto es B6: %i\n",B6 );

  int total = 0;

  int total1 = C1 + B1;
 //printf("esto es total1: %i\n",total1 );
  int total2 = C2 + B2;
 //printf("esto es total2: %i\n",total2 );
  int total3 = C3 + B3;
 //printf("esto es total3: %i\n",total3 );
  int total4 = C4 + B4;
 //printf("esto es total4: %i\n",total4 );
  int total5 = C5 + B5;
 //printf("esto es total5: %i\n",total5 );
  int total6 = C6 + B6;
 //printf("esto es total6: %i\n",total6 );

  if((total1 < total2) && (total1 < total3) && (total1 < total4) && (total1 < total5) && (total1 < total6)){
    value = 1;
  }else if((total2 < total1) && (total2 < total3) && (total2 < total4) && (total2 < total5) && (total2 < total6)){
    value = 2;
  }else if((total3 < total1) && (total3 < total2) && (total3 < total4) && (total3 < total5) && (total3 < total6)){
    value = 3;
  }else if((total4 < total1) && (total4 < total2) && (total4 < total3) && (total4 < total5) && (total4 < total6)){
    value = 4;
  }else if((total5 < total1) && (total5 < total2) && (total5 < total3) && (total5 < total4) && (total5 < total6)){
    value = 5;
  }else if((total6 < total1) && (total6 < total2) && (total6 < total3) && (total6 < total4) && (total6 < total5)){
    value = 6;
  }
  return value;
}
