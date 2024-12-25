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
}

void menuConversorDeTempo()
{
  int opcaoConversaoTempo;
  float valor, resultado;

  do
  {
    printf(" == Conversor de Unidade de Tempo == \n");
    printf("1 - Segundos para Minutos\n");
    printf("2 - Minutos para Horas\n");
    printf("3 - Horas para Dias\n");
    printf("4 - Dias para Semanas\n");
    printf("5 - Semanas para Meses (aproximado)\n");
    printf("6 - Meses para Anos\n");
    printf("0 - Voltar ao Menu Principal\n");
    printf("Escolha uma opção de conversão: ");
    scanf("%d", &opcaoConversaoTempo);

    if (opcaoConversaoTempo < 0 || opcaoConversaoTempo > 6)
    {
      printf("Opção inválida! Tente novamente.\n");
      continue;
    }

    if (opcaoConversaoTempo == 0)
    {
      printf("Voltando ao menu principal...\n");
      break;
    }

    printf("Insira o valor para conversão: ");
    scanf("%f", &valor);

    switch (opcaoConversaoTempo)
    {
    case 1:
      resultado = valor / 60;
      printf("%.2f segundos equivalem a %.2f minutos\n", valor, resultado);
      break;

    case 2:
      resultado = valor / 60;
      printf("%.2f minutos equivalem a %.2f horas\n", valor, resultado);
      break;

    case 3:
      resultado = valor / 24;
      printf("%.2f horas equivalem a %.2f dias\n", valor, resultado);
      break;

    case 4:
      resultado = valor / 7;
      printf("%.2f dias equivalem a %.2f semanas\n", valor, resultado);
      break;

    case 5:
      resultado = valor / 4.345; // Média de semanas em um mês
      printf("%.2f semanas equivalem a %.2f meses\n", valor, resultado);
      break;

    case 6:
      resultado = valor / 12;
      printf("%.2f meses equivalem a %.2f anos\n", valor, resultado);
      break;
    }

  } while (opcaoConversaoTempo != 0);
}
void menuConversorDeArea()
{
 int opcao;
  float valor, resultado;

  do
  {
    printf(" == Conversor de Area == \n");
    printf("[1]- Metro quadrado para Centimetro quadrado \n");
    printf("[2]- Metro quadrado para Quilometro quadrado \n");
    printf("[3]- Centimetro quadrado para Metro quadrado \n");
    printf("[4]- Centimetro quadrado para Quilometro quadrado \n");
    printf("[5]- Quilometro quadrado para Centimetro quadrado \n");
    printf("[6]- Quilometro quadrado para Metro quadrado \n");
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
      printf("Retornando ao menu principal... \n");
    }
    else
    {
      printf("Insira o valor para conversão: \n");
      scanf("%f", &valor);
    }

    switch (opcao)
    {

    case 1:
      resultado = valor * 100*100;
      printf("%.2f Metro quadrado = %.2f Centimetro quadrado \n", valor, resultado);
      break;

    case 2:
      resultado = valor * 0.000001;
      printf("%.2f Metro quadrado = %.7f Quilometro quadrado \n", valor, resultado);
      break;

    case 3:
      resultado = valor * 0.0001;
      printf("%.2f Centimetro quadrado = %.5f Metro quadrado \n", valor, resultado);
      break;

    case 4:
      resultado = valor * 0.00000000001;
      printf("%.2f Centimetro quadrado  = %.12f Quilometro quadrado \n", valor, resultado);
      break;

    case 5:
      resultado = valor * 10000000000;
      printf("%.2f Quilometro quadrado  = %.2f Centimetro quadrado \n", valor, resultado);
      break;

    case 6:
      resultado = valor * 10000000;
      printf("%.2f Quilometro quadrado = %.2f Metro quadrado \n", valor, resultado);
      break;
    }

  } while (opcao != 7);
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
