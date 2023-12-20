#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaração da função MMR
int saldoRank(int v, int d);

int main() {
    // Solicita o nome do Herói
    printf("Enter Herói:\n");
    // Pega o nome do Herói
    char userName[100];
    fgets(userName, sizeof(userName), stdin);
    
    // Solicita o nivel do herói
    printf("Enter quantidade Vitorias:\n");
    // Pega quantidade de vitorias do herói
    int vitoria;
    scanf("%d", &vitoria);

    // Solicita o nivel do herói
    printf("Enter quantidade Derrotas:\n");    
    // Pega quantidade de derrotas do herói
    int derrota;
    scanf("%d", &derrota);
    
    int mmr = saldoRank(vitoria, derrota);

    char MMR[20];
    if (mmr <= 10) {
        strcpy(MMR, "Ferro");
    } else if (mmr >= 11 && mmr <= 20) {
        strcpy(MMR, "Bronze");
    } else if (mmr >= 21 && mmr <= 50) {
        strcpy(MMR, "Prata");
    } else if (mmr >= 51 && mmr <= 80) {
        strcpy(MMR, "Ouro");
    } else if (mmr >= 81 && mmr <= 90) {
        strcpy(MMR, "Diamante");
    } else if (mmr >= 91 && mmr <= 100) {
        strcpy(MMR, "Lendário");
    } else if (mmr >= 101) {
        strcpy(MMR, "Imortal");
    }
    
    // imprime o retorno
    printf("O Herói de nome %s está no nível de %s", userName, MMR);

    return 0;
}

// Definição da função MMR
int saldoRank(int v, int d) {
    return v - d;
}