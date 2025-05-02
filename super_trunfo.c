#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
char Estado[50], nome[50];
char cdg[20];
int pts;
float area, pib;
unsigned long int populacao;
// Agora as variaveis serao para a carta de numero 2, colocarei o numero 2 na frente de cada uma para a identação do código! 
char Estado2[50], nome2[50];
char cdg2[20];
int pts2;
float area2, pib2;
unsigned long int populacao2; 

printf("\n\n");
printf("Olá, este programa foi desenvolvido no estilo de um jogo, vai funcionar da seguinte forma:\n"); 
printf("Coletaremos alguns dados que serão inseridas em duas cartas dentro do jogo.\n\n");	
printf("São 2 cartas, sendo que cada uma delas vai conter dados diferentes que serão coletados com suas respostas.\n\n ");
printf("Vamos lá !\n\n");
printf("Começaremos pelo primeiro número (0), logo vamos para a carta de número 0!\n\n");

printf("Digite aqui uma letra de A ao H (Representando um dos 8 estados): \n");
scanf("%s", Estado);

printf("Digite o código da carta, composto pela letra escrita anteriormente adicionando um numero do 01 ao 04: \n");
scanf("%s", cdg);

printf("Agora o nome de alguma cidade de sua escolha: \n");
getchar();
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")] = '\0';

printf("Numero de habitantes da mesma (Sua população): \n");
scanf("%d", &populacao);

printf("Sua área em Km quadrados: \n");
scanf("%f", &area);

printf("Seu produto interno bruto (PIB): \n"); 
scanf("%f", &pib);

printf("Número de pontos turísticos possuintes: \n");
scanf("%d", &pts);

float Pibpercapita = pib / populacao;
float densidadepopulacional = populacao / area;
float superpoder = pib + populacao + area + pts + Pibpercapita + 1/densidadepopulacional;
printf("Carta 0:\n\n");
printf("Estado: %s \n\n", Estado);
printf("Código: %s  \n\n", cdg);
printf("Nome da cidade: %s \n\n", nome);
printf("População: %d   \n\n", populacao);
printf("Área da cidade : %.1f \n\n", area);
printf("PIB: %.1f \n\n", pib);
printf("Número de pontos turisticos : %d \n\n", pts);
printf("Densidade Populacional: %.2f \n\n", densidadepopulacional);
printf("PIB Per Capita: %.2f \n\n", Pibpercapita);
printf("SuperPoder da Carta 0 (Soma de todos os valores númericos): (%.2f)\n\n", superpoder);









printf("Em seguida a carta de número 1: \n ");

printf("Digite aqui uma letra de A ao H (Representando um dos 8 estados): \n");
scanf("%s", Estado2);

printf("Digite o código da carta, composto pela letra escrita anteriormente adicionando um numero do 01 ao 04: \n");
scanf("%s", cdg2);

printf("Nome da cidade: \n");
getchar();
fgets(nome2, sizeof(nome2), stdin);
nome2[strcspn(nome2, "\n")] = '\0';

printf("Número de habitantes (População): \n");
scanf("%d", &populacao2);

printf("Sua área em Km quadrados: \n");
scanf("%f", &area2);

printf("Seu produto interno bruto (PIB): \n"); 
scanf("%f", &pib2);

printf("Numero de pontos turísticos: \n");
scanf("%d", &pts2);

float Pibpercapita2 = pib2 / populacao2;
float densidadepopulacional2 = populacao2 / area2;
float superpoder2 = pib2 + populacao2 + area2 + pts2 + Pibpercapita2 + 1/densidadepopulacional2;

printf("Carta 1:\n\n");
printf("Estado: %s \n\n", Estado2);
printf("Código: %s  \n\n", cdg2);
printf("Nome da cidade: %s \n\n", nome2);
printf("População: %d   \n\n", populacao2);
printf("Área da cidade : %.1f \n\n", area2);
printf("PIB: %.1f \n\n", pib2);
printf("Quantidade de pontos turisticos : %d \n\n", pts2);
printf("Densidade Populacional: %.2f \n\n", densidadepopulacional2);
printf("PIB Per Capita: %.2f \n\n", Pibpercapita2);
printf("SuperPoder agora da carta 1: (%.2f)\n\n ", superpoder2);




printf("Veremos em seguida a comparação das cartas, qual possui a maior pontuação em cada atributo e qual venceu !\n\n");
printf("População : Carta (%d)Venceu!\n\n", populacao < populacao2);
printf("Área: Carta (%d) Venceu!\n\n", area < area2);
printf("PIB: Carta (%d) Venceu!\n\n", pib < pib2);
printf("Pontos Turísticos: Carta (%d) Venceu!\n\n", pts < pts2);
printf("Densidade Populacional : Carta (%d) Venceu!\n\n", densidadepopulacional > densidadepopulacional2);
printf("PIB Per Capita : Carta (%d) Venceu!\n\n", Pibpercapita < Pibpercapita2);
printf("Super Poder: Carta (%d) Venceu!\n\n", superpoder < superpoder2);
printf("Obrigado por participar, este foi o programa, um exemplar apenas com o intuito de coletar dados e reproduzi-los na ordem correta.\n");

	
	
	
	
	return 0;
}