#include <stdio.h>
//Aqui serao inceridas as informações das variaveis da carta 1 e 2 do jogo do Super Trunfo//

int main(){
char estado1;
char estado2;
char codigo1[20];
char codigo2[20];
char cidade1[25];
char cidade2[25];
int populacao1;
int populacao2;
float area1;
float area2;
float pib1;
float pib2;
float densidadepopulacional1;
float pibpercapita1; 
float densidadepopulacional2;
float pibpercapita2;
int pontosturisticos1;
int pontosturisticos2;

   //Aqui a baixo sera inserida as informações utilizando printf e scanf para que o usuario consiga inserir as
   //informações das carta 1//

printf("Escolha uma letra de A a H para representar o primeiro estado.\n");
printf("Estado: ");
scanf(" %c", &estado1);

printf("Escolha entre 01 a 04 para definir o numero da carta. \n");
printf("Numero: ");
scanf(" %2s", codigo1);

printf("Insira o nome da primeira cidade.\n");
printf("Nome da cidade: ");
scanf("  %s", cidade1);

   
printf("Insira a quantidade de habitantes. \n");
printf("População: ");
scanf(" %d", &populacao1);

printf("Insira a área territorial da cidade. \n");
printf("Área Km²: ");
scanf(" %f", &area1);

printf("Insira o valor referente ao Produto Interno Bruto. \n");
printf("PIB: ");
scanf(" %f", &pib1);

printf("Insira a quantidade de pontos turisticos: \n");
printf("Pontos Turisticos: ");
scanf(" %d", &pontosturisticos1);

densidadepopulacional1 =  populacao1 / area1;
printf("Densidade Populacional e: %.2f\n", densidadepopulacional1);
pibpercapita1 = pib1 / populacao1;
printf("PIB per Capita e: %.2f reais\n", pibpercapita1);


//Aqui estaram as informações da Carta 2//

printf("Escolha uma letra de A a H para representar o segundo estado.\n");
printf("Estado: ");
scanf(" %c", &estado2);

printf("Escolha entre 01 a 04 para definir o numero da carta. \n");
printf("Numero: ");
scanf(" %2s", codigo2);

printf("Insira o nome da segunda cidade. \n");
printf("Nome da cidade: ");
scanf(" %s", cidade2);

printf("Insira a quantidade de habitantes. \n");
printf("População: ");
scanf(" %d", &populacao2);

printf("Insira área territorial da cidade. \n");
printf("Área Km²: ");
scanf(" %f", &area2);

printf("Insira o valor referente ao Produto Interno Bruto. \n");
printf("PIB: ");
scanf(" %f", &pib2);

printf("Insira a quantidade de pontos turisticos: \n");
printf("Pontos Turisticos: ");
scanf(" %d", &pontosturisticos2);

densidadepopulacional2 =  populacao2 / area2;
printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
pibpercapita2 = pib2 / populacao2;
printf("PIB per Capita: %.2f reais\n"), pibpercapita2;

//Abaixo sera impresso informando as informações da primeira carta do jogo//

printf("Estado: %c \n", estado1);
printf("Código: %c%2s \n", estado1, codigo1);
printf("Nome da cidade: %s\n",cidade1);
printf("Polulação: %d\n", populacao1);
printf("Área: %.3f\n", area1);
printf("PIB: %.3f bilhões de reais\n", pib1);
printf("Pontos turisticos: %d\n", pontosturisticos1);
printf("Densidade populacional e: %.2f hab/km²\n", densidadepopulacional1);
printf("PIB per capita e: %.2f reais/hab\n", pibpercapita1);


// Em seguida abaixo estara a impressao informando a segunda carta do jogo//

printf("Estado: %c \n", estado2);
printf("Código: %c%2s \n", estado2, codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("Polulação: %d\n", populacao2);
printf("Área: %.3f\n", area2);
printf("PIB: %.3f bilhões de reais\n", pib2);
printf("Pontos turisticos: %d\n", pontosturisticos2);
printf("Densidade populacional e: %.2f hab/km²\n", densidadepopulacional2);
printf("PIB per capita e: %.2f reais/hab\n", pibpercapita2);

printf("Foi utilizado o atributo 'População' para defeinir a carta vencedora\n"); 

printf("Carta 1:  %s", cidade1), - printf(" %d\n", populacao1);
printf("Carta 2:  %s", cidade2), - printf(" %d\n", populacao2);

if (populacao1 > populacao2){
   printf("Carta 1 venceu: %s", cidade1), printf(" %dhab\n", populacao1);
} else{
   printf("Carta 2 venceu: %s", cidade2), printf(" %dhab\n", populacao2);
}

return 0;
}
