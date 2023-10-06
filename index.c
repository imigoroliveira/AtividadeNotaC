#include <stdio.h>
#include "processaCaminhao.h"


int validaNumero(int valor_max){
    int numero = 0;

    while(1){
        scanf("%i", numero);
        if(numero >= 1 && numero<=valor_max){
            break;
        }
        else{
            printf("O numero deve estar entre 1 e %i \n", valor_max);
        }
    }
    return numero;
}


int main(){
   
    int qntCaminhoes, numeroMeses;
    
    printf("Digite primeiro a quantidade de caminhões da frota: (Maximo de %i\n", MAX_CAMINHOES);
    qntCaminhoes = validaNumero(MAX_CAMINHOES);

    printf("Digite agora o numero de meses a ser analisadao: (Maximo de %i\n", MAX_MESES);
    numeroMeses = validaNumero(MAX_MESES);
    
    Caminhao caminhoes[MAX_CAMINHOES];

   
    processaCaminhoes(caminhoes, qntCaminhoes, numeroMeses);

    return 0;
}

