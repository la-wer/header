#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int soma (int a, int b) {
    return a + b;
}

int subtracao (int a, int b) {
    return a - b;
}

void imprimirMatriz(int a, int b, int mat[][1]) {

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}

void preencherMatriz(int a, int b, int mat[][1]) {

    srand(time(0));

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            mat[i][j] = rand()%10;
        }
    }
}

int *preencherMatrizMalloc(int a, int b) {

    srand(time(0));

    int *mat = (int*) malloc(a * b * sizeof(int));

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            *(mat + a * i + j) = rand()%10;
        }
    }
    return mat;
}

int somaAcimaDs(int a, int b, int mat[][1]) {

    int soma = 0;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (j + i < b - 1) {
                soma = soma + mat[i][j];
            }
        }
    }
    return soma;
}

void imprimirVetor(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }
}

void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }
}

int* preencherVetor2(int a) {

    int vet = malloc(a * sizeof(int));
    for (int i = 0; i < a; i++) {
        vet[i] = i;
    }
    return vet;
}

int somaElementos(int vetor[], int a) {

    int soma = 0;
    for (int i = 0; i < a; i++) {
        soma = soma + vetor[i];
    }
    return soma;
}

int maiorElemento(int vetor[], int a) {

    int aux = -1000;
    for (int i = 0; i < a; i++) {
        if (i > aux) {
            aux = i;
        }
    }
    return aux;
}

int ocorrenciaString(char c, char* string) {

    int count = 0, i = 0;
    while (string[i] != '/0') {
        if (toupper(string[i]) == tupper(c) {
            count++;
        }
        i++
    }
    return count;
}

int ocorrenciaStringRec(char c, char* string) {

    int i = 0, count = 0;

    if (*string == '/0') {
        return 0;
    }
    int cont = (toupper(*string) == toupper(c))?1:0;
    return count + ocorrenciaString(string+1, c);
}
