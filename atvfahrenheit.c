#include <stdio.h>
// tipo retorno / identificador / lista de par�metros
//<tr>   / <caminho>         /   <dado>
float celsius_to_fahrenheit(float celsius) //fun��o chamada celsius_to_fahrenheit
{
    return 1.8 * celsius + 32;  //converte celsius para fahrenheit
}

int main()  //fun��o de execu��o do c�digo
{
    float celsius, fahrenheit; // 2 variaveis do tipo float
    printf("Digite o Valor da temperatura em Celsius:\n"); // imprima na tela "Digite o Valor da temperatura em celsius
    scanf("%f", &celsius);  // leitura das variaveis

    fahrenheit = celsius_to_fahrenheit(celsius);    // chamando a fun��o celsius_to_fahrenheit
    printf("A temperatura em Fahrenheit �: %.f\n", fahrenheit); //imprime o valor da var�avel fahrenheit
    return 0; // retorna 0 para indicar que o programa foi executado com sucesso.
}
