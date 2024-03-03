#include <stdio.h>
int main() {
    int valor, ced_cem, ced_cinq, ced_vinte, ced_dez;
    int ced_cinco, ced_dois, moeda_um;

    do {
        printf("Digite o valor: ");
        scanf("%d", &valor);
    }
    while (valor < 0);

    ced_cem = valor/100;
    ced_cinq = (valor%100)/50;
    ced_vinte = ((valor%100)%50)/20;
    ced_dez = (((valor%100)%50)%20)/10;
    ced_cinco = ((((valor%100)%50)%20)%10)/5;
    ced_dois = (((((valor%100)%50)%20)%10)%5)/2;
    moeda_um = (((((valor%100)%50)%20)%10)%5)%2;

    printf("%d cedulas de 100.\n", ced_cem);
    printf("%d cedulas de 50.\n", ced_cinq);
    printf("%d cedulas de 20.\n", ced_vinte);
    printf("%d cedulas de 10.\n", ced_dez);
    printf("%d cedulas de 5.\n", ced_cinco);
    printf("%d cedulas de 2.\n", ced_dois);
    printf("%d moedas de 1\n", moeda_um);
  
    printf("Total: %d. \n", valor);
  
    return 0;
}