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
}



///////////////////////////////////////////////////////////////////////////////
/// Limpa a tela

void limpaTela(void) {
  if (system("clear") || system("cls")) {
	  
	// limpa a tela, funciona em Linux, Mac e Windows
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Autor: https://github.com/Got7mj/mariana

int Digito(char c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Validar Nome
/// Autor: https://github.com/rauan-meirelles

int validar_letra(char c) {
  if (c >= 'A' && c <= 'Z') {
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else {
    return 0;
  }
}



///////////////////////////////////////////////////////////////////////////////
/// Autor: //https://www.guj.com.br/t/ano-bissexto-linguagem-c/5696/13//

  int validar_ano_bissexto(void){    
    int dia, mes, ano;
    int ultimo_dia[] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};
    for(;;) {
        printf ("Digite a data no formato dd/mm/yyyy \n");
        scanf("%d/%d/%d",&dia,&mes,&ano);
                
        if(dia<=0||mes<1||mes>12||ano<=0){	
            printf("Data invalida\n");
            continue;
        }
        
        if(ano%4==0 && (ano%400==0 || ano%100!=0))
            ultimo_dia[2]=29;					
        else
            ultimo_dia[2]=28;
        if(dia>ultimo_dia[mes])
            printf("Data invalida\n");
        else 
            break;
    }
 return 0;
}



///////////////////////////////////////////////////////////////////////////////
/// Validar Nome
/// Autor: https://github.com/rauan-meirelles

int validarNome(char* nome) {
  for (int i=0; nome[i]!='\0'; i++) {
    if (!ehLetra(nome[i])) {
      return 0;
    }
  }
	return 1;
}



/////////////////////////////////////////////////////////////////
/// Validar CPF
///Autor: https://github.com/cdavi-arj/Validate-CPF-CNPJ-Apex
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
}
 



///////////////////////////////////////////////////////////////////////////////
/// ValidarEmail
/// Autor: https://pt.stackoverflow.com/users/110948/rog%C3%A9rio-dec

// retorna 0 se for false e 1 se for true
int lerEmail(char email[]){
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
}



///////////////////////////////////////////////////////////////////////////////
/// Validar data
/// Autor: https://www.vivaolinux.com.br/script/Funcao-para-validacao-de-datas

int valida_data(int dia, int mes, int ano) { //by https://www.vivaolinux.com.br/script/Funcao-para-validacao-de-datas
    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2100)) //verifica se os numeros sao validos
        {
            if ((dia == 29 && mes == 2) && ((ano % 4) == 0)) //verifica se o ano e bissexto
            {
                return 1;
            }
            if (dia <= 28 && mes == 2) //verifica o mes de feveireiro
            {
                return 1;
            }
            if ((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) //verifica os meses de 30 dias
            {
                return 1;
            }
            if ((dia <=31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12)) //verifica os meses de 31 dias
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
}



///////////////////////////////////////////////////////////////////////////////
/// Validar celular
/// Autor: https://github.com/Got7mj/mariana

int validarcelular(char* celular) {
  int tam;
  tam = strlen(celular);
  if (tam != 11) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!Digito(celular[i])) {
        return 0;
    }
  }
  return 1;
}



///////////////////////////////////////////////////////////////////////////////
/// validarCriação

int validarCria(char* cria) {
  int tam;
  tam = strlen(cria);
  if (tam < 1000 || tam > 1001) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!hDigito(cria[i])) {
      return 0;
    }
  }
  return 1;
}
