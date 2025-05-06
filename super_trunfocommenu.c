#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Inserindo as variaveis e seus tipos respectivos de entrada
	
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

// Introduzindo o programa com explicações rápidas e precisas sobre o sistema

printf("\n\n");
printf("Olá, este programa foi desenvolvido no estilo de um jogo, vai funcionar da seguinte forma: Coletaremos alguns dados que serão inseridas em duas cartas dentro do jogo.\n\n");
printf("São 2 cartas, sendo que cada uma delas vai conter dados diferentes que serão coletados com suas respostas.\n\n ");
printf("Vamos lá !\n\n");
printf(" Começaremos pelo primeiro número (0), logo vamos para a carta de número 0!\n");

// Coletando as informações !

printf("Digite aqui uma letra de A ao H (Representando um dos 8 estados): \n");
scanf("%s", Estado);

printf("Digite o código da carta, composto pela letra escrita anteriormente adicionando um numero do 01 ao 04: \n");
scanf("%s", cdg);

printf("Agora o nome de algum País de sua escolha: \n");
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

// Aqui definindo os valores do pib per capita, super poder e densidade populacional!

float Pibpercapita = pib / populacao;
float densidadepopulacional = populacao / area;
float superpoder = pib + populacao + area + pts + Pibpercapita + 1/densidadepopulacional;

// Mostrando os dados colhidos para verificação !


printf("Carta 0:\n\n");
printf("Estado: %s \n\n", Estado);
printf("Código: %s  \n\n", cdg);
printf("Nome do País: %s \n\n", nome);
printf("População: %d   \n\n", populacao);
printf("Área do País : %.1f \n\n", area);
printf("PIB: %.1f \n\n", pib);
printf("Número de pontos turisticos : %d \n\n", pts);
printf("Densidade Populacional: %.2f \n\n", densidadepopulacional);
printf("PIB Per Capita: %.2f \n\n", Pibpercapita);
printf("SuperPoder da Carta 0 (Soma de todos os valores númericos): (%.2f)\n\n", superpoder);





printf("Em seguida a carta de número 1: \n ");

// Colhendo dados da outra carta !

printf("Digite aqui uma letra de A ao H (Representando um dos 8 estados): \n");
scanf("%s", Estado2);

printf("Digite o código da carta, composto pela letra escrita anteriormente adicionando um numero do 01 ao 04: \n");
scanf("%s", cdg2);

printf("Nome do País: \n");
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

// Aqui definindo os valores do pib per capita, super poder e densidade populacional como feito acima mas agora para a outra carta !

float Pibpercapita2 = pib2 / populacao2;
float densidadepopulacional2 = populacao2 / area2;
float superpoder2 = pib2 + populacao2 + area2 + pts2 + Pibpercapita2 + 1/densidadepopulacional2;

printf("Carta 1:\n\n");
printf("Estado: %s \n\n", Estado2);
printf("Código: %s  \n\n", cdg2);
printf("Nome do País: %s \n\n", nome2);
printf("População: %d   \n\n", populacao2);
printf("Área do País : %.1f \n\n", area2);
printf("PIB: %.1f \n\n", pib2);
printf("Quantidade de pontos turisticos : %d \n\n", pts2);
printf("Densidade Populacional: %.2f \n\n", densidadepopulacional2);
printf("PIB Per Capita: %.2f \n\n", Pibpercapita2);
printf("SuperPoder agora da carta 1: (%.2f)\n\n ", superpoder2);

// Revelando atraves das comparações qual venceu em quais aspectos diferentes !


printf("Veremos em seguida a comparação das cartas, qual possui a maior pontuação em cada atributo !\n\n");
printf("População : Carta (%d) Possui!\n\n", populacao < populacao2);
printf("Área: Carta (%d) Possui!\n\n", area < area2);
printf("PIB: Carta (%d) Possui!\n\n", pib < pib2);
printf("Pontos Turísticos: Carta (%d) Possui!\n\n", pts < pts2);
printf("Densidade Populacional : Carta (%d) Possui!\n\n", densidadepopulacional > densidadepopulacional2);
printf("PIB Per Capita : Carta (%d) Possui!\n\n", Pibpercapita < Pibpercapita2);
printf("Super Poder: Carta (%d) Possui!\n\n", superpoder < superpoder2);

// Entrando com as váriaveis para as opções

printf("Agora você escolherá dois atributos que serão os determinantes para a vitória.\n\n Lembrando que no caso da densidade populacional é o oposto (ou seja, o menor valor vence ).\n\n");

int opcao, opcao2;
float somacarta0 = 0, somacarta1 = 0;

printf("Escolha o primeiro (digite apenas o número da opção escolhida): \n\n");
printf("1. População\n");
printf("2. Área do País\n");
printf("3. Quantidade de pontos turísticos\n");
printf("4. Densidade Populacional\n");
printf("5. PIB Per Capita\n");
printf("6. Super Poder\n");
scanf("%d", &opcao);

// Utilizando o switch para dar as opções

switch (opcao) {
	
	case 1 : 
	printf("Opção Escolhida População: \n Carta (%d) Venceu!\n\n", populacao < populacao2);
	somacarta0 += populacao;
	somacarta1 += populacao2;
	
	break;
	
	case 2 :
	printf("Opção Escolhida: Área do País \n Carta (%d) Venceu!\n\n", area < area2);
	somacarta0 += area;
	somacarta1 += area2;
	
	break;
	
	case 3 :
	printf("Opção Escolhida Quantidade de Pontos Turísticos : \n Carta (%d) Venceu!\n\n", pts < pts2);
	somacarta0 += pts;
	somacarta1+= pts2;
	
	break;
	
	case 4: 
	printf("Opção Escolhida : Densidade Populacional \n Carta (%d) Venceu!\n\n", densidadepopulacional > densidadepopulacional2);
	somacarta0 += densidadepopulacional;
	somacarta1 += densidadepopulacional2;
	
	
	break;
	
	case 5 :
	printf("Opção Escolhida : PIB Per Capita \n Carta (%d) Venceu!\n\n", Pibpercapita < Pibpercapita2);
	somacarta0 += Pibpercapita;
	somacarta1 += Pibpercapita2;
	
	break;
	
	case 6 :
	printf("Opção Escolhida : Super Poder\n Carta (%d) Venceu!\n\n", superpoder < superpoder2);
	somacarta0 += superpoder;
	somacarta1 += superpoder2;
	
	break;
	
	default:
	printf(" Opção Inválida, certifique-se que escolheu alguma das 6 opções.\n");
}

printf("Escolha o segundo (Apenas o número da opção escolhida) : \n\n");
printf("1. População\n");
printf("2. Área do País\n");
printf("3. Quantidade de pontos turísticos\n");
printf("4. Densidade Populacional\n");
printf("5. PIB Per Capita\n");
printf("6. Super Poder\n");
scanf("%d", &opcao2);


if (opcao == opcao2) { 
printf("Você escolheu o mesmo atributo da anterior, tente outro.\n !");

 printf("\nEscolha um novo atributo diferente do primeiro:\n");
    printf("1. População\n");
    printf("2. Área do País\n");
    printf("3. Quantidade de pontos turísticos\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB Per Capita\n");
    printf("6. Super Poder\n");
    scanf("%d", &opcao2);


} 

switch  (opcao2) {

case 1 : 
	printf("Opção Escolhida População: \n Carta (%d) Venceu!\n\n", populacao < populacao2);
	somacarta0 += populacao;
	somacarta1 += populacao2;
	
	break;
	
	case 2 :
	printf("Opção Escolhida: Área da País \n Carta (%d) Venceu!\n\n", area < area2);
	somacarta0 += area;
	somacarta1 += area2;
	
	break;
	
	case 3 :
	printf("Opção Escolhida Quantidade de Pontos Turísticos : \n Carta (%d) Venceu!\n\n", pts < pts2);
	somacarta0 += pts;
	somacarta1 += pts2;
	
	break;
	
	case 4: 
	printf("Opção Escolhida : Densidade Populacional \n Carta (%d) Venceu!\n\n", densidadepopulacional > densidadepopulacional2);
	somacarta0 += densidadepopulacional;
	somacarta1 += densidadepopulacional2;
	
	break;
	
	case 5 :
	printf("Opção Escolhida : PIB Per Capita \n Carta (%d) Venceu!\n\n", Pibpercapita < Pibpercapita2);
	somacarta0 += Pibpercapita;
	somacarta1 += Pibpercapita2;
	
	break;
	
	case 6 :
	printf("Opção Escolhida : Super Poder\n Carta (%d) Venceu!\n\n", superpoder < superpoder2);
	somacarta0 += superpoder;
	somacarta1 += superpoder2;
	
	break;
	
	default:
	printf(" Opção Inválida, certifique-se que escolheu alguma das 6 opções.\n");
}

// Entregando o resultado final, utilizando o somátorio dos valores 
printf("Resultado final :\n");

if (somacarta0 > somacarta1) {
    printf("\nA Carta 0\nQue possui como nome %s e área %.2f km²\nVenceu a rodada com uma soma de %.3f!\n",nome, area, somacarta0);
} else if (somacarta0 < somacarta1) {
    printf("\nA Carta 1\nQue possui como nome %s e área %.2f km²\nVenceu a rodada com uma soma de %.3f!\n",nome2, area2, somacarta1);
} else {
    printf("\nA rodada terminou em empate, ambas as cartas têm a mesma soma: %d.\n", somacarta0);
}







printf("\nObrigado por participar deste jogo, para jogar novamente, basta reproduzi-lo de novo!\n");


	
	
	
	
	return 0;
}