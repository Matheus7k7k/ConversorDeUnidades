#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void menuPrincipal()
{
  printf(" 1 - Para conversor de massa \n");
  printf(" 2 - Para conversor de velocidade \n");
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

void menuConversorDeVelocidade()
{int opcaoConversaoVelocidade;
    double valorConversao, resultadoDaConversao;
 
 do{
    
    printf("[1]- Converte km/h para m/s \n");
    printf("[2]- Converte m/s para km/h \n ");
    printf("[3]- Converte km/h para mph\n");
    printf("[4]- Converte mph para km/h \n ");
    printf("[0]- Retorna para o menu principal\n");
    printf(" \nEscolha uma  das opcoes Acima:\n\n");
    scanf("%d",&opcaoConversaoVelocidade);
   
    switch (opcaoConversaoVelocidade)
    {
     case 0 :
    printf("Retornando para o Menu principal...\n ");
    break;
    
     case 1 :
    printf("Informe o valor da velocidade  em km/h que sera convertido em m/s:\n ");
    scanf(" %lf", &valorConversao);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
        resultadoDaConversao= valorConversao /3.6;
        printf("%.2lf km/h e  = %.2lf m/s \n ",valorConversao,resultadoDaConversao);
        break;
     case 2 :
    printf("Informe o valor da velocidade em m/s que sera convertido em km/h: \n");
    scanf(" %lf", &valorConversao);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
        resultadoDaConversao= valorConversao *3.6;
        printf("%.2lf m/s  e = %.2lf km/h \n",valorConversao,resultadoDaConversao);
        break;
         case 3 :
    printf("Informe o valor da velocidade  em km/h que sera convertido em mph:\n ");
    scanf(" %lf", &valorConversao);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
        resultadoDaConversao= valorConversao /1.60934;
        printf("%.2lf km/h e  = %.2lf mph \n ",valorConversao,resultadoDaConversao);
        break;
     case 4 :
    printf("Informe o valor  em mph que sera convertido em km/h: \n");
    scanf(" %lf", &valorConversao);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
        resultadoDaConversao= valorConversao *1.60934;
        printf("%.2lf mph  e = %.2lf km/h \n",valorConversao,resultadoDaConversao);
        break;
    
     default:
    printf("Opcao invalida!\n");
        break;
    }
 
 } while (opcaoConversaoVelocidade!=0);
 
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
  int o;
    float valor, resposta;
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
            scanf("%f", &valor);
            resposta = valor * 3600;
            printf("%.2f horas equivalem a %.2f segundos\n", valor, resposta);
            break;

        case 2:
            printf("digite o valor em horas: \n");
            scanf("%f", &valor);
            resposta = valor * 60;
            printf("%.2f horas equivalem a %.2f minutos\n", valor, resposta);
            break;

        case 3:
            printf("digite o valor em minutos: \n");
            scanf("%f", &valor);
            resposta = valor * 60;
            printf("%.2f minutos equivalem a %.2f segundos\n", valor, resposta);
            break;

        case 4:
            printf("digite o valor em minutos: \n");
            scanf("%f", &valor);
            resposta = valor / 60;
            printf("%.2f minutos equivalem a %.2f horas\n", valor, resposta);
            break;

        case 5:
            printf("digite o valor em segundos: \n");
            scanf("%f", &valor);
            resposta = valor / 60;
            printf("%.2f segundos equivalem a %.2f minutos\n", valor, resposta);
            break;

        case 6:
            printf("digite o valor em segundos: \n");
            scanf("%f", &valor);
            resposta = valor / 3600;
            printf("%.2f segundos equivalem a %.2f horas\n", valor, resposta);
            break;
        default:
            printf("opcao invalida\n");
            break;
        }
    } while (o != 0);
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
      menuConversorDeVelocidade();
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
