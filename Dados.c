#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lancamento(int d)
{
    int resultado;
    resultado = rand();
    resultado = resultado % d;

    return resultado;
}

int main(void)
{
    int qtd_dados,dado,soma,i,valor,segundos;

    segundos = time(0);
    srand(segundos);

    printf("Digite a quantidade de dados e o dado no formato '2d20' por exemplo: ");
    scanf("%dd%d",&qtd_dados,&dado);
    soma = 0;
    for(i = 0;i < qtd_dados;i++)
    {
        valor = lancamento(dado) + 1;
        printf("%d ",valor);
        soma += valor;
    }
    printf("\nO resultado foi de: %d",soma);
    return 0;
}