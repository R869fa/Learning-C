#include <stdio.h>
// Parte obrigatória do código em C
int main() {
    //int = inteiro e main = variavel principal do programa
    //(int main(){conteudo do escopo main})
printf("************************************\n");
printf("*Bem Vindo ao jogo!! Vamos começar?*\n");
printf("************************************\n");

int numerosecreto;
    numerosecreto = 40;
// variavel >>numerosecreto<< recebe o valor 40, que é o valor principal da seção.

int chute;
//variavel >>chute<< que recebe o valor pela função >>scanf()<<, responsavel pela entrada e saida de dados.
//a variavel >>chute<< é comparada com a variavel >>numerosecreto<<.
for (int i = 1; i <= 3; i++) {
printf("Qual é o seu %do. chute?", i);
scanf("%d", &chute); //função >>scanf()<< que recebe o valor digitado pelo usuario. //%d é o dado que será recebido, no caso um número inteiro.
printf("Seu %do. chute foi %d!\n", i, chute);


int acertou = chute == numerosecreto;
    if (acertou) {
        printf("Parabens, Você acertou\n");
        break;
        } else {
            int maior = chute > numerosecreto;
            if(maior) {
            printf("Você chutou um número maior que o número secreto\n");
            } else {
            printf("Você chutou um número menor que o número secreto\n");
            }
        }
    }
printf("Fim de jogo!\n");
}