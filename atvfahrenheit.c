#include <stdio.h>
// tipo retorno / identificador / lista de parâmetros
//<tr>   / <caminho>         /   <dado>
float celsius_to_fahrenheit(float celsius) //função chamada celsius_to_fahrenheit
{
    return 1.8 * celsius + 32;  //converte celsius para fahrenheit
}

int main()  //função de execução do código
{
    float celsius, fahrenheit; // 2 variaveis do tipo float
    printf("Digite o Valor da temperatura em Celsius:\n"); // imprima na tela "Digite o Valor da temperatura em celsius
    scanf("%f", &celsius);  // leitura das variaveis

    fahrenheit = celsius_to_fahrenheit(celsius);    // chamando a função celsius_to_fahrenheit
    printf("A temperatura em Fahrenheit é: %.f\n", fahrenheit); //imprime o valor da varíavel fahrenheit
    return 0; // retorna 0 para indicar que o programa foi executado com sucesso.
}
