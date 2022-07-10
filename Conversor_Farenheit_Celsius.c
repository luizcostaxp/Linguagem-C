#include <stdio.h>
#include <time.h>

/******************************************************************************************************************
Função: Delay
Descrição: Garante um delay.
******************************************************************************************************************/

void sleep (unsigned miliseconds)
{
    sleep(miliseconds);
}

/******************************************************************************************************************
Função: Conversor de temperatura 
Descrição: Converte a temperatura medida em graus farenheit, em graus celsius através da fórmula:

°C = [(°F - 32) / 1,8]

Entrada: Temperatura em °Farenheit.
Saída: Temperatura em °Celsius.

******************************************************************************************************************/
float main (short int temperatura_farenheit)
{
    printf ("Digite a temperatura em Farenheit:");
    scanf ("%hd", & temperatura_farenheit);

    short int MINUENDO = 32; //Constante de subtração.
    float QUOCIENTE_DIVISAO = 1.8; //Constante de divisão.
    short int subtraido; //Variável que armazenará o resultado da subtração.
    float temperatura_celsius; //Variável que armazenará o resultado da conversão completa, encontrado após a divisão.
    
  
    subtraido = temperatura_farenheit - MINUENDO; //Faz a operação de subtração "(°F - 32)".
    temperatura_celsius = subtraido / QUOCIENTE_DIVISAO; // Divide o resultado da subtração por 1,8.
    printf ("Temperatura em Celsius: %f", temperatura_celsius);
    sleep(10000);

  return temperatura_celsius;
}
                               


