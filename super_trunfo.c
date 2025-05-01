#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
char Estado[50], nome[50];
char cdg[20];
int populacao, pts;
float area, pib;
// Agora as variaveis serao para a carta de numero 2, colocarei o numero 2 na frente de cada uma para a identação do código! 
char Estado2[50], nome2[50];
char cdg2[20];
int populacao2, pts2;
float area2, pib2;

printf("Olá, este programa foi desenvolvido no estilo de um jogo, vai funcionar da seguinte forma: Coletaremos alguns dados que serão inseridas em duas cartas dentro do jogo.\n");
printf("São 2 cartas, sendo que cada uma delas vai conter dados diferentes que serão coletados com suas respostas.\n ");
printf("Vamos lá !\n");

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

printf("Carta 1:\n");
printf("Estado: %s \n", Estado);
printf("Código: %s  \n", cdg);
printf("Nome da cidade: %s \n", nome);
printf("População: %d   \n", populacao);
printf("Área da cidade : %.1f \n", area);
printf("PIB: %.1f \n", pib);
printf("Número de pontos turisticos : %d \n", pts);






printf("Em seguida a carta de número 2: \n ");

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

printf("Carta 2:\n");
printf("Estado: %s \n", Estado2);
printf("Código: %s  \n", cdg2);
printf("Nome da cidade: %s \n", nome2);
printf("População: %d   \n", populacao2);
printf("Área da cidade : %.1f \n", area2);
printf("PIB: %.1f \n", pib2);
printf("Quantidade de pontos turisticos : %d \n", pts2);

printf("Obrigado por participar, este foi o programa, um exemplar apenas com o intuito de coletar dados e reproduzi-los na ordem correta.\n");

	
	
	
	
	return 0;
}