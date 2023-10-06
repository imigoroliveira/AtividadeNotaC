#include <stdio.h>
#define MAX_CAMINHOES 20
#define MAX_MESES  12



typedef struct {
    float consumoCombustivel;
    int quilometragemPercorrida;
    float valorTransportado;
} Caminhao;


int processaCaminhoes(Caminhao caminhoes[], int qntCaminhoes, int numeroMeses);
