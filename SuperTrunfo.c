#include <stdio.h>
int main(){

char estado1[50], estado2[50];
int populacao1,pontotur1,populacao2,pontotur2;
float area1,pib1,densP1,pibPC1,area2,pib2,densP2,pibPC2;


printf("DIGITE O NOME DO PRIMEIRO ESTADO\n");
scanf("%s",&estado1);
printf("DIGITE A POPULAÇÃO DO PRIMEIRO ESTADO\n");
scanf("%d",&populacao1);
printf("DIGITE A ÁREA DO PRIMEIRO ESTADO\n");
scanf("%f",&area1);
printf("DIGITE O PIB DO PRIMEIRO ESTADO\n");
scanf("%f",&pib1);
printf("DIGITE O NUMERO DE PONTOS TURISTICOS DO PRIMEIRO ESTADO\n");
scanf("%d",&pontotur1);

printf("SEGUNDO ESTADO\n");

printf("DIGITE O NOME DO SEGUNDO ESTADO\n");
scanf("%s",&estado2);
printf("DIGITE A POPULAÇÃO DO SEGUNDO ESTADO\n");
scanf("%d",&populacao2);
printf("DIGITE A ÁREA DO SEGUNDO ESTADO\n");
scanf("%f",&area2);
printf("DIGITE O PIB DO SEGUNDO ESTADO\n");
scanf("%f",&pib2);
printf("DIGITE O NUMERO DE PONTOS TURISTICOS DO SEGUNDO ESTADO\n");
scanf("%d",&pontotur2);


printf("\n--- DADOS DO PRIMEIRO ESTADO ---\n");
printf("Nome: %s", estado1);
printf("População: %d\n", populacao1);
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Pontos turísticos: %d\n", pontotur1);

printf("\n--- DADOS DO SEGUNDO ESTADO ---\n");
printf("Nome: %s", estado2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Pontos turísticos: %d\n", pontotur2);

}
