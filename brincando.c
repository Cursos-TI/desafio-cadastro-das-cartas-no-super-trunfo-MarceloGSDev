#include <stdio.h>
  int main(){
    char nome[20];
    int idade;
    float altura, media;
    char cidade[20];
    float  nota1, nota2;

    printf("Digite seu nome: \n");
    scanf("%s",nome);
    printf("Seu nome é: %s\n\n",nome);

    printf("Digite sua idade: \n");
    scanf("%d",&idade);
    printf("Sua idade é: %d\n\n",idade);

    printf("Digite sua altura: \n");
    scanf("%f",&altura);
    printf("Sua altura é: %.2f\n\n",altura);

    printf("Digite sua cidade: \n");
    scanf("%s",cidade);
    printf("Sua cidade é: %s\n\n",cidade);

    //calculando a media do aluno

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    int soma = nota1 + nota2;
    float divisao = nota1 / nota2;

    media = soma /2;

    // Exibindo os resultados das operações
    printf("Resultado da soma: %d\n",soma);
    printf("Resultado da divisão: %.2f\n",divisao);
    

    printf("Sua media é: %.2f",media);



    










  }