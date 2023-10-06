#include <stdio.h>
#include "processaCaminhao.h"

int processaCaminhoes(Caminhao caminhoes[], int qntCaminhoes, int numeroMeses){
    float consumosMensais[MAX_MESES] = {0};
    float quilometragemTotal[MAX_MESES] = {0};
    float maiorValorTransportado[MAX_MESES] = {0};
    int caminhaoMaiorValorMes[MAX_MESES] = {0};

    for (int i = 0; i < numeroMeses; i++) {
        printf("Mês %d:\n", i + 1);
        for (int j = 0; j < qntCaminhoes; j++) {
            printf("Caminhão %d:\n", j + 1);
            printf("Digite o consumo de combustível: ");
            scanf("%f", &caminhoes[j].consumoCombustivel);
            printf("Digite a quilometragem percorrida: ");
            scanf("%d", &caminhoes[j].quilometragemPercorrida);
            printf("Digite o valor total transportado: ");
            scanf("%f", &caminhoes[j].valorTransportado);
        }
    }




    for (int i = 0; i < numeroMeses; i++) {
        for (int j = 0; j < qntCaminhoes; j++) {
            consumosMensais[i] += caminhoes[j].consumoCombustivel;
            quilometragemTotal[i] += caminhoes[j].quilometragemPercorrida;
            if (caminhoes[j].valorTransportado > maiorValorTransportado[i]) {
                maiorValorTransportado[i] = caminhoes[j].valorTransportado;
                caminhaoMaiorValorMes[i] = j + 1;
            }
        }
        consumosMensais[i] /= qntCaminhoes;
    }


    for (int i = 0; i < numeroMeses; i++) {
        printf("Mês %d:\n", i + 1);
        printf("Consumo médio de gasolina: %.2f\n", consumosMensais[i]);
        printf("Caminhão que transportou maior valor: Caminhão %d\n", caminhaoMaiorValorMes[i]);
        printf("Quilometragem total percorrida pela frota: %.2f\n", quilometragemTotal[i]);
        printf("\n");
    }

    return 0;
}