#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{


    char sexo;
    char sexoPessoaMaisAlta;
    float altura, menorAlturaGrupo, maiorAlturaGrupo, acumuladorMediaMulheres=0, mediaAlturaMulheres=0,mulheres;
    int i, homens=0;
    menorAlturaGrupo=2.50;
    maiorAlturaGrupo=0;
    mulheres=0;
    i=0;

    //coleta de dados

    printf("Insira, a seguir, os dados de tr�s pessoas para fazer a an�lise");
    printf("\n================================================================");


    while(i<3){

        //sexo

        printf("\nInsira o sexo:");
        scanf("%c",&sexo);
        fflush(stdin);

        printf("\nInsira a altura: ");
        scanf("%f",&altura);
        fflush(stdin);


        if(sexo == 'F' || sexo == 'f'){
            mulheres++;
            acumuladorMediaMulheres+=altura;
        }

        else if(sexo == 'M' || sexo == 'm'){
            homens++;
        }

        //altura


        if (maiorAlturaGrupo ==0){
           // menorAlturaGrupo=altura;
            maiorAlturaGrupo=altura;
        }else if(altura > maiorAlturaGrupo){
             sexoPessoaMaisAlta=sexo;
            maiorAlturaGrupo=altura;


        }


             if (altura < menorAlturaGrupo)
                  menorAlturaGrupo=altura;



        i++;
        }




    //C�lculo
    mediaAlturaMulheres= (acumuladorMediaMulheres/mulheres);

    //impress�o de dados
    printf("\n O sexo da pessoa mais alta � %c",sexoPessoaMaisAlta);
    printf("\n A menor altura do grupo �: %.2f ", menorAlturaGrupo);
    printf("\n a maior altura do grupo �: %.2f", maiorAlturaGrupo);
    printf("\n A m�dia de altura das mulheres � %.2f", mediaAlturaMulheres);/*as var de m�dia e de ac�mulo n�o est�o
    respeitando o if do F & f */
    printf("\n O total de homens � %d", homens); /*a var de ac�mulo de nHomens n�o est� acumulando*/






    return 0;
}



