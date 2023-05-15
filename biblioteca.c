#include <time.h>
#include <stdlib.h>
#include <string.h>


///////////////////////////////////////////////////////////////////////////////
/// Faz uma pausa por n segundos, com n sendo passado como parâmetro
///
void delay(int segundos) {
  int tempo = 1000 * segundos;
  clock_t inicio = clock();
  while (clock() < inicio + tempo) {
    // não faz nada, apenas gasta tempo
  }
} /// Autor: https://github.com/rauan-meirelles



///////////////////////////////////////////////////////////////////////////////
/// Limpa a tela

void limpaTela(void) {
  if (system("clear") || system("cls")) {
	  
	// limpa a tela, funciona em Linux, Mac e Windows
  }
} /// Autor: https://github.com/rauan-meirelles


///////////////////////////////////////////////////////////////////////////////
/// Autor: https://github.com/rauan-meirelles

int Digito(char c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Validar letra

int validar_letra(char c) {
  if (c >= 'A' && c <= 'Z') {
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else {
    return 0;
  }
} /// Autor: https://github.com/rauan-meirelles



///////////////////////////////////////////////////////////////////////////////
/// Validar Nome

int validar_nome(char* nome) {
  for (int i=0; nome[i]!='\0'; i++) {
    if (!validar_letra(nome[i])) {
      return 0;
    }
  }
	return 1;
} /// Autor: https://github.com/rauan-meirelles



/////////////////////////////////////////////////////////////////
/// Validar CPF

public static boolean isCPF(String CPF) {
    CPF = removeCaractEsp(CPF);

    if (!CPF.isNumeric())
      return false;

    CPF = CPF.replace('-', '');
    CPF = CPF.replace('.', '');

    if (
      CPF.equals('00000000000') ||
      CPF.equals('11111111111') ||
      CPF.equals('22222222222') ||
      CPF.equals('33333333333') ||
      CPF.equals('44444444444') ||
      CPF.equals('55555555555') ||
      CPF.equals('66666666666') ||
      CPF.equals('77777777777') ||
      CPF.equals('88888888888') ||
      CPF.equals('99999999999') ||
      (CPF.length() != 11)
    )
      return (false);

    Integer dig10, dig11, sm, i, r, num, peso;

    sm = 0;
    peso = 10;
    List < String > cpfString = cpf.split('');
    for (i = 0; i < 9; i++) {
      num = Integer.valueOf(cpfString[i]);
      sm = sm + (num * peso);
      peso = peso - 1;
    }

    r = 11 - (math.mod(sm, 11));
    if ((r == 10) || (r == 11))
      dig10 = 0;
    else
      dig10 = r;

    // Calculo do 2o. Digito Verificador
    sm = 0;
    peso = 11;
    for (i = 0; i < 10; i++) {
      num = Integer.valueOf(cpfString[i]);
      sm = sm + (num * peso);
      peso = peso - 1;
    }

    r = 11 - (math.mod(sm, 11));
    if ((r == 10) || (r == 11))
      dig11 = 0;
    else
      dig11 = r;

    // Verifica se os digitos calculados conferem com os digitos informados.
    if (
      dig10 == Integer.valueOf(cpfString[9]) &&
      dig11 == Integer.ValueOf(cpfString[10])
    )
      return true;
    else
      return false;
  }

  public static String removeCaractEsp(string texto) {
    return texto.replace('.', '')
      .replace('-', '')
      .replace('/', '')
      .replace(' ', '')
      .replace('(', '')
      .replace(')', '');
  }
} ///Autor: https://github.com/cdavi-arj/Validate-CPF-CNPJ-Apex
 



///////////////////////////////////////////////////////////////////////////////
/// ValidarEmail
// retorna 0 se for false e 1 se for true

int valida_email(char email[]){
  int tam=strlen(email);
  int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i;
  for (i = 0; i < tam; i++) {
    char c = email[i];
    if(c == '@') {
      if (arroba)
         break; // não pode ter uma segunda @
      arroba++;
      if (i < 3)
        break; // se @ vier antes de 3 caracteres, erro
    }
    else if (arroba) { // se já encontrou @
      if (ponto) { // se já encontrou . depois de @@
        depoisPonto++;
      }
      else if(c == '.') {
        ponto = 1;
        if (antesPonto < 3) {
          break; // se . depois de @ vier antes de 3 caracteres, erro
        }
      }
      else {
        antesPonto++;
      }
    }
  } // for
    if (i == tam && depoisPonto > 1)
        return 1;
    else
        return 0;
} /// Autor: https://pt.stackoverflow.com/users/110948/rog%C3%A9rio-dec



///////////////////////////////////////////////////////////////////////////////
/// Validar data

int valida_data(int dia, int mes, int ano) { 
    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2100)) ///verifica se os numeros sao validos
        {
            if ((dia == 29 && mes == 2) && ((ano % 4) == 0)) ///verifica se o ano e bissexto
            {
                return 1;
            }
            if (dia <= 28 && mes == 2) ///verifica o mes de feveireiro
            {
                return 1;
            }
            if ((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) ///verifica os meses de 30 dias
            {
                return 1;
            }
            if ((dia <=31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12)) ///verifica os meses de 31 dias
            {
                return 1;
            }
            else
            {
                return 0;
            }
      }
       else
           {
                return 0;
           }
} /// Autor: https://www.vivaolinux.com.br/script/Funcao-para-validacao-de-datas



/////////////////////////////////////////////////////////////////////////////////
///validar ramo do assessor

int validar_ramo(char* ramo) {
  for (int i=0; ramo[i]!='\0'; i++) {
    if (!validar_letra(ramo[i])) {
      return 0;
    }
  }
	return 1;
}



/////////////////////////////////////////////////////////////////////////////////
///validar tipo de consulta

int validar_tipo_de_consulta(char* tipo) {
  for (int i=0; tipo[i]!='\0'; i++) {
    if (!validar_letra(tipo[i])) {
      return 0;
    }
  }
	return 1;
}



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a um número do codigo válido 
/// (apenas dígitos) ou retorna 0 caso contrário

int validar_codConsulta(char* codConsulta) {
  int tam;
  tam = strlen(codConsulta);
  if (tam < 7 || tam > 9) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!Digito(codConsulta[i])) {
      return 0;
    }
  }
  return 1;
}


//////////////////////////////////////////////////////////////////////////////
/// validar horas

#include <stdio.h>
#include <time.h> //necessário para usar localtime() e struct tm
int validar_horas(char hora)
{
  //ponteiro para struct que armazena data e hora  
  struct tm *data_hora_atual;     
  
  //variável do tipo time_t para armazenar o tempo em segundos  
  time_t segundos;
  
  //obtendo o tempo em segundos  
  time(&segundos);   
  
  //para converter de segundos para o tempo local  
  //utilizamos a função localtime  
  data_hora_atual = localtime(&segundos);  
  
  //para acessar os membros de uma struct usando o ponteiro
  //utilizamos o operador -> no nosso caso temos: 
  //data_hora_atual->membro_da_struct
  
  //Acessando dados convertidos para a struct data_hora_atual  
  printf("\nDia..........: %d\n", data_hora_atual->tm_mday);  
  
  //para retornar o mês corretamente devemos adicionar +1 
  //como vemos abaixo
  printf("\nMes..........: %d\n", data_hora_atual->tm_mon+1);
  
  //para retornar o ano corretamente devemos adicionar 1900 
  //como vemos abaixo
  printf("\nAno..........: %d\n\n", data_hora_atual->tm_year+1900);  
  
  printf("\nDia do ano...: %d\n", data_hora_atual->tm_yday);  
  printf("\nDia da semana: %d\n\n", data_hora_atual->tm_wday);
    
  /* Obtendo os valores da struct data_hora_atual  
    e formatando a saída de dados no formato 
    hora: minuto: segundo
     
  Para não ficar um printf muito longo em uma única linha
  de comando, quebrei a impressão em 3 partes mostrando
  uma informação em cada linha 
  */  
  printf("\nHora ........: %d:",data_hora_atual->tm_hour);//hora   
  printf("%d:",data_hora_atual->tm_min);//minuto
  printf("%d\n",data_hora_atual->tm_sec);//segundo  
  
  /* Obtendo os valores da struct data_hora_atual  
     e formatando a saída de dados no formato dia/mes/ano 
     
     Para não ficar um printf muito longo em uma única 
     linha de comando, quebrei a impressão em 3 partes
     sendo uma informação em cada linha   
  */  
  //dia do mês
  printf("\nData ........: %d/", data_hora_atual->tm_mday);
  printf("%d/",data_hora_atual->tm_mon+1); //mês
  printf("%d\n\n",data_hora_atual->tm_year+1900); //ano
  
  return 0;
} /// Autor: http://linguagemc.com.br/exibindo-data-e-hora-com-time-h/
