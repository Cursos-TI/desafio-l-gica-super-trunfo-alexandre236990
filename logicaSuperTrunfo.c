#include <stdio.h>
#include <stdlib.h>


    int escolhaJogador;

    char estado; //AQUI SERA ATRIBUIDO A LETRA QUE REPRESENTA CADA ESTADO

    char codigo_da_cidade[4]; //AQUI SERA ATRIBUIDO O CODIGO QUE REPRESENTA CADA CIDADE

    int populacao; //AQUI SERA ATRIBUIDO A POPULÇAO DE CADA CIDADE

    int pontos_turisticos; //AQUI SERA ATRIBUIDO OS PONTOS TURISTICOS DE CADA CIDADE

    int super_forca1, super_forca2, super_forca3, super_forca4, especial;

    float area; //AQUI SERA ATRIBUIDO ÁREA DE CADA CIDADE

    float pib; //AQUI SERA INSERIDO O PIB DA CIDADE

    float Densidade_Populacional; //População dividida pela área da cidade

    float PIB_per_Capita; //PIB total dividido pela população

    float cidade1, cidade2, cidade3, cidade4;

    float estado1, estado2,  estado3, estado4, estado5, estado6, estado7, estado8;

    int carta, carta2, menu;

        //MENSAGEM DE BOAS VINDAS AO JOGAGOR

        int Exibirmenu(){
        printf("\n\n");
        printf("*********************************************************\n");
        printf("*********** OLA SEJA BEM VINDO AO SUPER TRUNFO***********\n");
        printf("*********************************************************\n\n\n");
        printf("Escolha uma opção:\n");
        printf("1. INICIAR JOGO\n");
        printf("2. VER REGRAS\n");
        printf("3.FECHAR JOGO\n\n");
        printf("Escolha: ");
        scanf("%d", &escolhaJogador);
        printf("\n");

        return escolhaJogador;

        }

        void executarEscolha(){

system("cls");

        switch (escolhaJogador)
        {
        case 1:
        //PRIMEIRO ESTADO A
        printf("Insira o primeiro estado: ");
        scanf(" %c", &estado);

printf("\n");

        //PRIMEIRA CIDADE A1
            printf("Insira a primeira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca1 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao + codigo_da_cidade[4] + estado;
        
            printf("Super Força: %d\n", super_forca1);

            
printf("\n");

        //SEGUNDA CIDADE A2
            printf("Insira a segunda cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca2 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca2);

printf("\n");

        //TERCEIRA CIDADE A3
            printf("Insira a terceira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca3 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca3);

printf("\n");

        //QUARTA CIDADE A4
            printf("Insira a quarta cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca4 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca4);

            estado1 = especial = super_forca1 + super_forca2 + super_forca3 + super_forca4;

             system("cls");

            printf("Especial Estado A: %d\n", especial);
    
printf("\n");

        //SEGUNDO ESTADO B
        printf("Insira o segundo estado: ");
        scanf(" %c", &estado);

printf("\n");

        //PRIMEIRA CIDADE B1
            printf("Insira a primeira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca1 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca1);

printf("\n");

        //SEGUNDA CIDADE B2
            printf("Insira a segunda cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca2 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca2);

printf("\n");

        //TERCEIRA CIDADE B3
            printf("Insira a terceira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca3 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca3);

printf("\n");

        //QUARTA CIDADE B4
            printf("Insira a quarta cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca4 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca4);

            estado2 = especial = super_forca1 + super_forca2 + super_forca3 + super_forca4;

         system("cls");

            printf("Especial Estado B: %d\n", especial);

printf("\n");

        //TERÇEIRO ESTADO C
        printf("Insira o terçeiro estado: ");
        scanf(" %c", &estado);

printf("\n");

        //PRIMEIRA CIDADE C1
            printf("Insira a primeira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca1 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca1);

printf("\n");


        //SEGUNDA CIDADE C2
            printf("Insira a segunda cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca2 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca2);

printf("\n");


        //TERCEIRA CIDADE C3
            printf("Insira a terceira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca3 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca3);

printf("\n");

        //QUARTA CIDADE C4
            printf("Insira a quarta cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca4 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca4);

            estado3 = especial = super_forca1 + super_forca2 + super_forca3 + super_forca4;

         system("cls");

            printf("Especial Estado C: %d\n", especial);

printf("\n");

        //QUARTA ESTADO D
        printf("Insira o quarto estado: ");
        scanf(" %c", &estado);

printf("\n");

        //PRIMEIRA CIDADE D1
            printf("Insira a primeira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca1 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca1);

printf("\n");


        //SEGUNDA CIDADE D2
            printf("Insira a segunda cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca2 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca2);

printf("\n");

        //TERCEIRA CIDADE D3
            printf("Insira a terceira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca3 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca3);

printf("\n");

        //QUARTA CIDADE D4
            printf("Insira a quarta cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca4 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca4);

            estado4 = especial = super_forca1 + super_forca2 + super_forca3 + super_forca4;
          
          system("cls"); 

            printf("Especial Estado D: %d\n", especial);

printf("\n");

        //QUINTO ESTADO E
        printf("Insira o quinto estado: ");
        scanf(" %c", &estado);

        //PRIMEIRA CIDADE E1
            printf("Insira a primeira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca1 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca1);

printf("\n");

        //SEGUNDA CIDADE E2
            printf("Insira a segunda cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca2 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca2);

printf("\n");

        //TERCEIRA CIDADE E3
            printf("Insira a terceira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca3 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca3);

printf("\n");

        //QUARTA CIDADE E4
            printf("Insira a quarta cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca4 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca4);

            estado5 = especial = super_forca1 + super_forca2 + super_forca3 + super_forca4;

         system("cls");

            printf("Especial Estado E: %d\n", especial);

printf("\n");

        //SEXTO ESTADO F
        printf("Insira o sexto estado: ");
        scanf(" %c", &estado);

printf("\n");

        //PRIMEIRA CIDADE F1
            printf("Insira a primeira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca1 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca1);

printf("\n");

        //SEGUNDA CIDADE F2
            printf("Insira a segunda cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca2 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca2);

printf("\n");

        //TERCEIRA CIDADE F3
            printf("Insira a terceira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca3 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca3);

printf("\n");

        //QUARTA CIDADE F4
            printf("Insira a quarta cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca4 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca4);

            estado6 = especial = super_forca1 + super_forca2 + super_forca3 + super_forca4;

         system("cls");

            printf("Especial Estado F: %d\n", especial);

printf("\n");

        //SETIMO ESTADO G
        printf("Insira o setimo estado: ");
        scanf(" %c", &estado);

printf("\n");

        //PRIMEIRA CIDADE G1
            printf("Insira a primeira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca1 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca1);

printf("\n");

        //SEGUNDA CIDADE G2
            printf("Insira a segunda cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca2 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca2);

printf("\n");

        //TERCEIRA CIDADE G3
            printf("Insira a terceira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca3 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca3);

printf("\n");

        //QUARTA CIDADE G4
            printf("Insira a quarta cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca4 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca4);

            estado7= especial = super_forca1 + super_forca2 + super_forca3 + super_forca4;
         
         system("cls");

            printf("Especial Estado G: %d\n", especial);

printf("\n");

        //OITAVO ESTADO H
        printf("Insira o oitavo estado: ");
        scanf(" %c", &estado);

printf("\n");

        //PRIMEIRA CIDADE H1
            printf("Insira a primeira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca1 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca1);

printf("\n");

        //SEGUNDA CIDADE H2
            printf("Insira a segunda cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca2 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca2);

printf("\n");

        //TERCEIRA CIDADE H3
            printf("Insira a terceira cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca3 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca3);

printf("\n");

        //QUARTA CIDADE H4
            printf("Insira a quarta cidade: ");
            scanf(" %s", codigo_da_cidade);

            printf("Insira a população da cidade: ");
            scanf(" %d", &populacao);

            printf("Insira a área da cidade: ");
            scanf(" %f", &area);

            printf("Insira o PIB da cidade: ");
            scanf(" %f", &pib);

            printf("Insira o numero de pontos turisticos: ");
            scanf(" %d", &pontos_turisticos);

            Densidade_Populacional =  populacao/area;

            printf("Densidade Populacional: %.f\n", Densidade_Populacional);

            PIB_per_Capita = pib/populacao;

            printf("PIB per Capita: %.f\n", PIB_per_Capita);

            super_forca4 = PIB_per_Capita + Densidade_Populacional + pib + area + pontos_turisticos + populacao;

            printf("Super Força: %d\n", super_forca4);

            estado8 = especial = super_forca1 + super_forca2 + super_forca3 + super_forca4;

         system("cls");

            printf("Especial Estado H: %d\n", especial);
printf("\n");


        printf("\n");

        printf("Agora selecione a primeira carta: \n");
        printf("1. Carta A\n");
        printf("2. Carta B\n");
        printf("3. Carta C\n");
        printf("4. Carta D\n");
        printf("5. Carta E\n");
        printf("6. Carta F\n");
        printf("7. Carta G\n");
        printf("8. Carta H\n\n");
        printf("Escolha: ");
        scanf("%d", &carta);

system("cls");

        switch (carta)
            {
                case 1:

                        carta = estado1;

                        printf("Vc escolheu a carta referente ao estado A é sua força e: %f\n\n", estado1);
                        break;
                
                case 2:

                        carta = estado2;

                        printf("Vc escolheu a carta referente ao estado B é sua força e: %f\n\n", estado2);
                        break;



                default:

                        printf("Opção INVALIDA!!!\n");

                        break;
                }

        printf("Agora selecione a segunda carta: \n");
        printf("1. Carta A\n");
        printf("2. Carta B\n");
        printf("3. Carta C\n");
        printf("4. Carta D\n");
        printf("5. Carta E\n");
        printf("6. Carta F\n");
        printf("7. Carta G\n");
        printf("8. Carta H\n\n");
        printf("Escolha: ");
        scanf("%d", &carta2);

system("cls");

        switch (carta2)
            {
                case 1:

                        carta2 = estado1;

                        printf("Vc escolheu a carta referente ao estado A é sua força e: %f\n\n", estado1);
                        break;
                
                case 2:

                        carta2 = estado2;

                        printf("Vc escolheu a carta referente ao estado B é sua força e: %f\n\n", estado2);
                        break;
                
               

                default:

                        printf("Opção INVALIDA!!!\n");
                        break;
                }
        
         if ((carta > carta2))
        {

                printf("A Primeira carta VENCEU.\n\n");

                printf("Digite 1 pra voltar ao menu principal: ");
                scanf("%d", &menu);

                Exibirmenu();

                executarEscolha();

              

        }else if (carta == carta2)
        {

                printf("As Cartas tem a mesma força.\n\n ");

                printf("Digite 1 pra voltar ao menu principal: ");
                scanf("%d", &menu);

                Exibirmenu();

                executarEscolha();

                break;
        }else
        {
                printf("A Segunda carta VENCEU.\n\n");

                printf("Digite 1 pra voltar ao menu principal: ");
                scanf("%d", &menu);

                Exibirmenu();

                executarEscolha();

                break;
        }
                break;
       
        case 2:
                //REGARS DO JOGO
    printf("*********************************************************\n"); 
    printf("                REGRAS DO JOGO \n"); 
    printf("*********************************************************\n");
    printf("1. Cada país é dividido em 8 estados (A a H).\n"); 
    printf("2. Cada estado tem 4 cidades (1 a 4).\n"); 
    printf("3. O código da carta é a combinação da letra \n"); 
    printf(" do estado e o número da cidade (ex: A01).\n"); 
    printf("4. Cada carta representa uma cidade e possui:\n"); 
    printf(" - População\n"); 
    printf(" - Área\n"); 
    printf(" - PIB\n"); 
    printf(" - Pontos turísticos\n"); 
    printf("5. O objetivo é cadastrar e exibir os dados \n"); 
    printf(" das cidades de forma organizada.\n\n"); 
    printf("*********************************************************\n"); 
    printf("            PREPARE-SE PARA JOGAR! \n"); 
    printf("*********************************************************\n\n\n");

    printf("Digite 1 pra voltar ao menu principal: ");
    scanf("%d", &menu);

    if (menu == 1)
    {
        Exibirmenu();
    }
    
    executarEscolha();

                break;
        
        default:
                printf("#### JOGO FECHADO ####");
                break;

        }

        }

int main() {
   
        Exibirmenu();

        executarEscolha();

    return 0;
}