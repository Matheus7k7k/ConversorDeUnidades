#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void menuPrincipal()
{
  printf(" 1 - Para conversor de massa \n");
  printf(" 2 - Para conversor de comprimento \n");
  printf(" 3 - Para conversor de volume \n");
  printf(" 4 - Para conversor de temperatura \n");
  printf(" 5 - Para conversor de tempo \n");
  printf(" 6 - Para conversor de area \n");
}

void menuConversorDeMassa()
{
  int opcaoConversaoMassa;
  float valorConversao, resultadoConversao;
  do
  {

    printf("1 - Converter gramas em quilos \n");
    printf("2 - Converter quilos em gramas \n");
    printf("3 - Converter quilos em toneladas\n");
    printf("0 - Voltar ao menu principal\n");
    printf("Escolha uma opcao de conversao \n ");
    scanf("%d", &opcaoConversaoMassa);
    switch (opcaoConversaoMassa)
    {
    case 1:
      printf("Informe o valor em gramas que serão convertido a quilos  \n");
      scanf("%f", &valorConversao);
      resultadoConversao = valorConversao / 1000;
      printf(" %.2f gramas  = a %.2f quilos . \n", valorConversao, resultadoConversao);
      break;
    case 2:
      printf("Informe o valor em quilos que serao convertidos a gramas  \n");
      scanf("%f", &valorConversao);
      resultadoConversao = valorConversao * 1000;
      printf(" %.2f quilos e = a %.2f gramas . \n", valorConversao, resultadoConversao);
      break;

    case 3:
      printf("Informe o valor em quilos que são convertidos a toneladas \n");
      scanf("%f", &valorConversao);
      resultadoConversao = valorConversao / 1000;
      printf(" %.2f quilos e = a %.2f toneladas . \n", valorConversao, resultadoConversao);
      break;

    case 0:
      printf("Voltando ao menu principal...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
      break;
    }
  } while (opcaoConversaoMassa != 0);
}

void menuConversorDeComprimento()
{
}
void menuConversorDeVolume()
{
  int opcao;
  float valor, resultado;

  do
  {
    printf(" == Conversor de unidade de volume == \n");
    printf("[1]- Litro para mililitros \n");
    printf("[2]- Litros para metros cúbicos \n");
    printf("[3]- Mililitros para litros \n");
    printf("[4]- Mililitros para metros cúbicos \n");
    printf("[5]- Metros cúbicos para litros \n");
    printf("[6]- Metros cúbicos para mililitros \n");
    printf("[7]- Voltar ao menu principal \n");
    printf("Escolha uma conversão: \n");
    scanf("%d", &opcao);
    system("cls");

    if (opcao < 1 || opcao > 7)
    {
      printf("Opção inválida! \n");
    }
    else if (opcao == 7)
    {
      printf("Retomando ao menu principal... \n");
    }
    else
    {
      printf("Insira o valor para conversão: \n");
      scanf("%f", &valor);
    }

    switch (opcao)
    {

    case 1:
      resultado = valor * 1000;
      printf("%.2f litros = %.2f mililitros \n", valor, resultado);
      break;

    case 2:
      resultado = valor * 0.001;
      printf("%.2f litros = %.2f metros cúbicos \n", valor, resultado);
      break;

    case 3:
      resultado = valor * 0.001;
      printf("%.2f mililitros = %.2f litros \n", valor, resultado);
      break;

    case 4:
      resultado = valor * 0.000001;
      printf("%.2f mililitros  = %.2f metros cúbicos \n", valor, resultado);
      break;

    case 5:
      resultado = valor * 1000;
      printf("%.2f metros cúbicos  = %.2f litros \n", valor, resultado);
      break;

    case 6:
      resultado = valor * 1000000;
      printf("%.2f metros cúbicos = %.2f mililitros \n", valor, resultado);
      break;
    }

  } while (opcao != 7);
}

void menuConversorDeTemperatura()
{
  int opcaoConversaoTemperatura;
  float valor, resultado;
  do
  {
    printf("------- Conversor de Temperatura -------- \n");
    printf("1 - Converter Celsius para Kelvin \n");
    printf("2 - Converter Celsius para Fahrenheit \n");
    printf("3 - Converter Kelvin para Fahrenheit \n");
    printf("4 - Converter Kelvin para Celsius\n");
    printf("5 - Converter Fahrenheit para Celsius \n");
    printf("6 - Converter Fahrenheit para Kelvin\n");
    printf("0 - Voltar ao menu principal\n");
    printf("-----------------------------------------\n");
    printf("Escolha uma opcao de conversao \n ");
    scanf("%d", &opcaoConversaoTemperatura);
    switch (opcaoConversaoTemperatura)
    {
    case 1:
      printf("Informe o valor em Celsius que serão convertido para Kelvin  \n");
      scanf("%f", &valor);
      resultado = valor + 273.15;
      printf(" %.2f Celsius é = a %.2f Kelvin . \n", valor, resultado);
      break;
    case 2:
      printf("Informe o valor em Celsius que serão convertidos para Fahrenheit \n");
      scanf("%f", &valor);
      resultado = ((valor*1.8)+32);
      printf(" %.2f Celsius é = a %.2f Fahrenheit . \n", valor, resultado);
      break;

    case 3:
      printf("Informe o valor em Kelvin que serão convertidos para Fahrenheit \n");
      scanf("%f", &valor);
      resultado = ((valor - 273.15) *1.8 + 32);
      printf(" %.2f Kelvin é = a %.2f Fahrenheit . \n", valor, resultado);
      break;

    case 4:
      printf("Informe o valor em Kelvin que serão convertidos para Celsius \n");
      scanf("%f", &valor);
      resultado = valor - 273.15;
      printf(" %.2f Kelvin é = a %.2f Celsius . \n", valor, resultado);
      break;

      case 5:
      printf("Informe o valor em Fahrenheit que serão convertidos para Celsius \n");
      scanf("%f", &valor);
      resultado = ((valor - 32)* 5/9) ;
      printf(" %.2f Fahrenheit é = a %.2f Celsius. \n", valor, resultado);
      break;

      case 6:
      printf("Informe o valor em Fahrenheit que serão convertidos para Kelvin \n");
      scanf("%f", &valor);
      resultado = ((valor-32)* 5/9+ 273.15);
      printf(" %.2f Fahrenheit= a %.2f Kelvin. \n", valor, resultado);
      break;

    case 0:
      printf("Voltando ao menu principal...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
      break;
    }
  } while (opcaoConversaoTemperatura!= 0);
}

void menuConversorDeTempo()
{
}
void menuConversorDeArea()
{
}
int main()
{

  int opcao;

  do
  {

    menuPrincipal();
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      menuConversorDeMassa();
      break;

    case 2:
      menuConversorDeComprimento();
      break;

    case 3:
      menuConversorDeVolume();
      break;
    case 4:
      menuConversorDeTemperatura();
      break;
    case 5:
      menuConversorDeTempo();
      break;
    case 6:
      menuConversorDeArea();
      break;

    default:
      printf("opcao invalida \n ");
      break;
    }
  } while (opcao != 0);
  printf("saindo do programa \n");
  return 0;
}