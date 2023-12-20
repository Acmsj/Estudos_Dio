/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    // Solicita o nome do Herói
    printf("Enter Herói:\n");
    // Pega o nome do Herói
    char userName[100];
    fgets(userName, sizeof(userName), stdin);
    
    // Solicita o nivel do herói
    printf("Enter XP:\n");
    // Pega o nivel do herói
    int nivel;
    scanf("%d", &nivel);
    
    char Nnivel[20];
    if (nivel <= 1000) {
        strcpy(Nnivel, "Ferro");
    } else if (nivel >= 1001 && nivel <= 2000) {
        strcpy(Nnivel, "Bronze");
    } else if (nivel >= 2001 && nivel <= 6000) {
        strcpy(Nnivel, "Prata");
    } else if (nivel >= 6001 && nivel <= 7000) {
        strcpy(Nnivel, "Ouro");
    } else if (nivel >= 7001 && nivel <= 8000) {
        strcpy(Nnivel, "Platina");
    } else if (nivel >= 8001 && nivel <= 9000) {
        strcpy(Nnivel, "Acendente");
    } else if (nivel >= 9001 && nivel <= 10000) {
        strcpy(Nnivel, "Imortal");
    } else if (nivel >= 10001) {
        strcpy(Nnivel, "Radiante");
    }
    
    // imprime o retorno
    printf("O Herói de nome %s está no nível de %s", userName, Nnivel);

    return 0;
}