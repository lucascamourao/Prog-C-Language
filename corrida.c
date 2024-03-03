/*
Programa para digitar o número de voltas em uma corrida, com seus respectivos tempos de cada volta.
Ao final, será mostrado o melhor tempo, o pior tempo, a média do tempo das voltas, a volta que teve o melhor tempo
e a volta que teve o pior tempo. 
*/

#include <stdio.h>

int melhor_tempo(int *vetor, int tamanho);
int volta_melhor(int *vetor, int tamanho);

int pior_tempo(int *vetor, int tamanho);
int volta_pior(int *vetor, int tamanho);

double tempo_medio(int *vetor, int tamanho);

int main() {
    int N_voltas, melhor_t, pior_t, melhor_t_volta, pior_t_volta;
    double media;
    printf("Digite o numero de voltas: ");
    scanf("%d", &N_voltas);

    int vetor_tempo[N_voltas];
    printf("Preencha o vetor dos tempos: ");
    for (int i = 0; i < N_voltas; i++) {
        printf("Tempo da volta %d: ", (i+1));
        scanf("%d", &vetor_tempo[i]);
    }
    melhor_t = melhor_tempo(vetor_tempo, N_voltas);
    pior_t = pior_tempo(vetor_tempo, N_voltas);
    media = tempo_medio(vetor_tempo, N_voltas);
    melhor_t_volta = volta_melhor(vetor_tempo, N_voltas);
    pior_t_volta = volta_pior(vetor_tempo, N_voltas);

    printf("\nO melhor tempo foi %d", melhor_t);
    printf("\nO pior tempo foi %d", pior_t); 
    printf("\nA media eh igual a %.2lf", media);
    printf("\nA volta com o melhor tempo foi a volta %d.", melhor_t_volta);
    printf("\nA volta com o pior tempo foi a volta %d.", pior_t_volta);

    return 0;
}

int melhor_tempo(int *vetor, int tamanho) {
    int melhor_t = vetor[0];
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < melhor_t) {
            melhor_t = vetor[i];
        }
    }
    return melhor_t;
}

int pior_tempo(int *vetor, int tamanho) {
    int pior_t = vetor[0];
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > pior_t) {
            pior_t = vetor[i];
        }
    }
    return pior_t;
}

double tempo_medio(int *vetor, int tamanho) {
    double media, soma;
    soma = 0;
    tamanho = (double) tamanho;
    for (int i = 0; i < tamanho; i++) {
        soma = soma + vetor[i];
    }
    media = soma/tamanho;
    return media;
}

int volta_melhor(int *vetor, int tamanho) {
    int melhor_t_volta;
    int melhor_t = vetor[0];
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < melhor_t) {
            melhor_t = vetor[i];
            melhor_t_volta = i+1;
        }
    }
    return melhor_t_volta;
}

int volta_pior(int *vetor, int tamanho) {
    int pior_t_volta;
    int pior_t = vetor[0];
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > pior_t) {
            pior_t = vetor[i];
            pior_t_volta = i+1; 
        }
    }
    return pior_t_volta;
}