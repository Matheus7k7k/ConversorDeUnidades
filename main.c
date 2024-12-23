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
  printf(" 7 - Para conversor de velocidade \n");
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
}
void menuConversorDeArea()
{
  int opcaoConversaoArea;
    float valorConversao, resultadoDaConversao;
 
 do{
    printf("[1]- Converte metros quadrados para centimentros quadrados\n");
    printf("[2]- Converte centimentros quadrados para metros quadrados \n ");
    printf("[0]- Retorna para o menu principal\n");
    printf(" \nEscolha uma  das opcoes Acima:\n\n");
    scanf("%d",&opcaoConversaoArea);
   
    switch (opcaoConversaoArea)
    {
     case 0 :
    printf("Retornando para o Menu principal...\n ");
    break;
    
     case 1 :
    printf("Informe o valor em metros quadrados que sera convertido para centimetros quadrados:\n ");
    scanf(" %f", &valorConversao);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
        resultadoDaConversao= valorConversao * 10.000;
        printf("%.1f metros quadrados e  = %.3f centimetros quadrados\n ",valorConversao,resultadoDaConversao);
        break;
     case 2 :
    printf("Informe o valor em centimetros quadrados que sera convertido para metros quadrados: \n");
    scanf(" %f", &valorConversao);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
        resultadoDaConversao= valorConversao / 10.000;
        printf("%.3f centimetros quadrados  e = %.1f metros quadrados\n",valorConversao,resultadoDaConversao);
        break;
    
     default:
    printf("Opcao invalida!\n");
        break;
    }
 
 } while (opcaoConversaoArea!=0);
 
    

}
void menuConversorVelocidade(){
    int opcaoConversaoVelocidade;
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
      case 7:
     menuConversorVelocidade();
      break;

    default:
      printf("opcao invalida \n ");
      break;
    }
  } while (opcao != 0);
  printf("saindo do programa \n");
  return 0;
}