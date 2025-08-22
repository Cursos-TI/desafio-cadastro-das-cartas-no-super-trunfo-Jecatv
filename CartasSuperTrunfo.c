#include <stdio.h>

int main() {

   //dados da carta numero 1

    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
   
    //dados da carta numero 2
char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
   
    //cadatro da primeira carta

printf("cadastre a primeira carta:\n");
scanf("%3s",codigo1);
printf("Populacao: ");
scanf("%d",&populacao1);
printf("Area: ");
scanf("%f",&area1);
printf("pib: ");
scanf("%f",&pib1);
printf("numero de pontos turisticos:");
scanf("%d",&pontos1);

// cadastro da segnda carta

printf("cadastre a segunda carta:\n");
scanf("%3s",codigo2);
printf("Populacao: ");
scanf("%d",&populacao2);
printf("Area: ");
scanf("%f",&area2);
printf("pib: ");
scanf("%f",&pib2);
printf("numero de pontos turisticos:");
scanf("%d",&pontos2);

//imprimir os dadios das cartas cadastradas em sistemas
// exibe carta numero 1

printf("\nCARTA DE NUMERO 1\n");
printf("Codigo: %s\n",codigo1);
printf("Populcao: %d\n",populacao1);
printf("Area: %.2f\n",area1);
printf("Pib: %.2f\n",pib1);
printf("Pontos Turisicos: %d\n",pontos1);

// exibe carta numero 2

printf("\nCARTA DE NUMERO 2\n");
printf("Codigo: %s\n",codigo2);
printf("Populcao: %d\n",populacao2);
printf("Area: %.2f\n",area2);
printf("Pib: %.2f\n",pib2);
printf("Pontos Turisicos: %d\n",pontos2);

return 0;

}
