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
  int o;
    float value, answer;
    do
    {
        printf("digite para converter: \n[1]-Horas em segundos\n");
        printf("[2]-Horas em minutos\n");
        printf("[3]-minutos em segundos\n");
        printf("[4]-minutos em horas\n");
        printf("[5]-segundos em minutos\n");
        printf("[6]-segundos em horas\n");
        printf("[0]-encerrar a conversao\n");
        scanf("%d", &o);
        switch (o)
        {
        case 0:
            printf("encerrando...\n");
            break;
        case 1:
            printf("digite o valor em horas: \n");
            scanf("%f", &value);
            answer = value * 3600;
            printf("%.2f horas equivalem a %.2f segundos\n", value, answer);
            break;

        case 2:
            printf("digite o valor em horas: \n");
            scanf("%f", &value);
            answer = value * 60;
            printf("%.2f horas equivalem a %.2f minutos\n", value, answer);
            break;

        case 3:
            printf("digite o valor em minutos: \n");
            scanf("%f", &value);
            answer = value * 60;
            printf("%.2f minutos equivalem a %.2f segundos\n", value, answer);
            break;

        case 4:
            printf("digite o valor em minutos: \n");
            scanf("%f", &value);
            answer = value / 60;
            printf("%.2f minutos equivalem a %.2f horas\n", value, answer);
            break;

        case 5:
            printf("digite o valor em segundos: \n");
            scanf("%f", &value);
            answer = value / 60;
            printf("%.2f segundos equivalem a %.2f minutos\n", value, answer);
            break;

        case 6:
            printf("digite o valor em segundos: \n");
            scanf("%f", &value);
            answer = value / 3600;
            printf("%.2f segundos equivalem a %.2f horas\n", value, answer);
            break;
        default:
            printf("opcao invalida\n");
            break;
        }
    } while (o != 0);
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
