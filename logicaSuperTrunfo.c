#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_Brazil");

char nome[20];
        char pais1[20],pais2[20];
        int populacao1,populacao2;
        float area1,area2;
        float pib1,pib2;
        int turismo1,turismo2;
        float densidade1,densidade2;
        int escolhajogador1,escolhajogador2;
        char resultado1, resultado2;
        float soma1, soma2;

        printf("Olá, qual seu nome? \n");
        scanf("%s", nome);

        printf("%s, digite o nome de um País: ", nome);
        scanf("%s", pais1);
        printf("Me diga a população desse País: ");
        scanf("%d", &populacao1);
        printf("Qual a área desse País: ");
        scanf("%f",&area1);
        printf("Agora me informe o PIB: ");
        scanf("%f", &pib1);
        printf("E para finalizar, %s, me diga quantos pontos turísticos existem: ", nome);
        scanf("%d", &turismo1);
        printf("\n");

        printf("Muito bem, %s, agora iremos preencher os mesmos dados para a segunda carta, ok?!\n", nome);
        printf("\n");

        printf("País: ");
        scanf("%s", pais2);
        printf("População: ");
        scanf("%d",&populacao2);
        printf("Área: ");
        scanf("%f",&area2);
        printf ("PIB: ");
        scanf("%f", &pib2);
        printf("Quantidade de pontos turísticos: ");
        scanf("%d", &turismo2);
        printf("\n");

        densidade1 = (float) populacao1/area1;
        densidade2 = (float) populacao2/area2;

       printf("Agora chegou a hora do duelo entre as cartas, escolha um dos atributos no menu abaixo para comparação:\n");
       printf("1. População.\n");
       printf("2. Área.\n");
       printf("3. PIB.\n");
       printf("4. Pontos Turísticos.\n");
       printf("5. Densidade Demografica.\n");
       scanf("%d", &escolhajogador1);

       switch (escolhajogador1){
   case 1:
       printf("Duelo de População entre %s e %s:\n", pais1,pais2);
       resultado1 = populacao1>populacao2? 1:0;
       if(populacao1>populacao2){
        resultado1 = 1;
       }else if(populacao1<populacao2){
        resultado1 = 0;
        }else{
        resultado1 = -1;
        }

    break;
    case 2:
        printf("Duelo de Área entre %s e %s:\n", pais1,pais2);
        resultado1 = area1>area2? 1:0;
               if(area1>area2){
        resultado1 = 1;
       }else if(area1<area2){
        resultado1 = 0;
        }else{
        resultado1 = -1;
        }
    break;
   case 3:
       printf("Duelo de PIB entre %s e %s:\n", pais1,pais2);
       resultado1 = pib1>pib2? 1:0;
               if(pib1>pib2){
        resultado1 = 1;
       }else if(pib1<pib2){
        resultado1 = 0;
        }else{
        resultado1 = -1;
        }
    break;
       case 4:
        printf("Duelo de Pontos Turísticos %s e %s:\n", pais1,pais2);
        resultado1 = turismo1>turismo2? 1:0;
                if(turismo1>turismo2){
        resultado1 = 1;
       }else if(turismo1<turismo2){
        resultado1 = 0;
        }else{
        resultado1 = -1;
        }
    break;
       case 5:
        printf("Duelo de Densidade Demografica entre %s e %s:\n", pais1,pais2);
        resultado1 = densidade1<densidade2? 1:0;
                if(densidade1>densidade2){
        resultado1 = 1;
       }else if(densidade1<densidade2){
        resultado1 = 0;
        }else{
        resultado1 = -1;
        }
    break;
     default:
    printf("Opção Inválida!\n");
       }

    if (escolhajogador1>=1 && escolhajogador1<=5){
    if(resultado1 == 1){
    printf("%s venceu o duelo no primeiro atributo!\n", pais1);
    printf("\n");
    }else if (resultado1 == 0){
    printf("O País %s venceu no primeiro atributo.\n", pais2);
    printf("\n");
    }else{
    printf("Houve um empate no primeiro atributo!\n");
    printf("\n");
    }
    }

    printf("Agora, escolha um segundo atributo:\n");
       printf("1. População.\n");
       printf("2. Área.\n");
       printf("3. PIB.\n");
       printf("4. Pontos Turísticos.\n");
       printf("5. Densidade Demografica.\n");
       scanf("%d", &escolhajogador2);

       if (escolhajogador1 == escolhajogador2){
        printf("Você escolheu o mesmo atributo.\n");
       }else{switch (escolhajogador2){
   case 1:
       printf("Duelo de População entre %s e %s:\n", pais1,pais2);
       resultado2 = populacao1>populacao2? 1:0;
       if(populacao1>populacao2){
        resultado2 = 1;
       }else if(populacao1<populacao2){
        resultado2 = 0;
        }else{
        resultado2 = -1;
        }

    break;
    case 2:
        printf("Duelo de Área entre %s e %s:\n", pais1,pais2);
        resultado2 = area1>area2? 1:0;
               if(area1>area2){
        resultado2 = 1;
       }else if(area1<area2){
        resultado2 = 0;
        }else{
        resultado2 = -1;
        }
    break;
   case 3:
       printf("Duelo de PIB entre %s e %s:\n", pais1,pais2);
       resultado2 = pib1>pib2? 1:0;
               if(pib1>pib2){
        resultado2 = 1;
       }else if(pib1<pib2){
        resultado2 = 0;
        }else{
        resultado2 = -1;
        }
    break;
       case 4:
        printf("Duelo de Pontos Turísticos %s e %s:\n", pais1,pais2);
        resultado2 = turismo1>turismo2? 1:0;
                if(turismo1>turismo2){
        resultado2 = 1;
       }else if(turismo1<turismo2){
        resultado2 = 0;
        }else{
        resultado2 = -1;
        }
    break;
       case 5:
        printf("Duelo de Densidade Demografica entre %s e %s:\n", pais1,pais2);
        resultado2 = densidade1<densidade2? 1:0;
                if(densidade1>densidade2){
        resultado2 = 1;
       }else if(densidade1<densidade2){
        resultado2 = 0;
        }else{
        resultado2 = -1;
        }
    break;
     default:
    printf("Opção Inválida!\n");
       }


           if (escolhajogador2>=1 && escolhajogador2<=5){
    if(resultado2 == 1){
    printf("%s venceu o duelo no segundo atributo!\n", pais1);
    printf("\n");
    }else if (resultado2 == 0){
    printf("O País %s venceu no segundo atributo.\n", pais2);
    printf("\n");
    }else{
    printf("Houve um empate no segundo atributo!\n");
    printf("\n");
    }
       }
    }
    if (resultado1==1 && resultado2==1){
    printf("A carta %s venceu o duelo comparando os dois atributos!\n", pais1);
    printf("\n");
    }else if (resultado1==0 && resultado2==0){
    printf("O país %s venceu o duelo comparando os dois atributos!\n", pais2);
    printf("\n");
    }else{
    printf("Houve um empate comparando os dois atributos!\n");
    printf("\n");
    }

    if (escolhajogador1 == 1){
    soma1 += populacao1;
    soma2 += populacao2;
    } else if (escolhajogador1 == 2){
    soma1 += area1;
    soma2 += area2;
    }else if (escolhajogador1 == 3){
    soma1 += pib1;
    soma2 += pib2;
    }else if (escolhajogador1 == 4){
    soma1 += turismo1;
    soma2 += turismo2;
    }else{
    soma1 += densidade1;
    soma2 += densidade2;
    }

    if (escolhajogador2 == 1){
    soma1 += populacao1;
    soma2 += populacao2;
    } else if (escolhajogador2 == 2){
    soma1 += area1;
    soma2 += area2;
    }else if (escolhajogador2 == 3){
    soma1 += pib1;
    soma2 += pib2;
    }else if (escolhajogador2 == 4){
    soma1 += turismo1;
    soma2 += turismo2;
    }else{
    soma1 += densidade1;
    soma2 += densidade2;
    }

    if (soma1 > soma2){
    printf("O país %s venceu no total dos atributos, sendo a soma total %.f!\n", pais1,soma1);
    }else if(soma2 > soma1){
    printf("O país %s venceu no total dos atributos, sendo a soma total %.f!\n", pais2, soma2);
    }else{
    printf("Empate no total dos atributos, os valores somados foram iguais: %.f contra %.f!\n", soma1,soma2);
}



return 0;

}