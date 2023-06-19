#include <time.h>
#include <stdlib.h>
#include <string.h>

#include <conio.h>
#include <stdio.h>


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
/// Retorna 1 se o caractere recebido for uma alfabético 
/// (letra entre 'A' e 'Z' ou 'a' e 'z') ou retorna 0 caso contrário

int letra(char c) {
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
    if (!letra(nome[i])) {
      return 1;
    }
  }
	return 0;
} /// Autor: https://github.com/rauan-meirelles



/////////////////////////////////////////////////////////////////
/// Validar CPF

int validar_cpf(char *cpf){
	int i, resto1=0, resto2=0, ehValido=0, x;
    //Leitura do CPF
    for(i=1; i<10 && ehValido==0; i++){
        if(*(cpf+0)!=*(cpf+i))
            ehValido = 1;
    }

    if(ehValido == 1)
    {
        for(i=0; i<9; i++)
            resto1 += (*(cpf+i)-'0')*(10-i);
        resto1 = (resto1*10)%11;
        if (resto1 == 10)
            resto1 = 0;
        if(resto1 == *(cpf+9)-'0') 
        {
            for(i=0; i<10; i++)
                resto2 += (*(cpf+i)-'0')*(11-i);
            resto2 = (resto2*10)%11;
            if(resto2 == 10)
                resto2 = 0;
            if(resto2 != *(cpf+10)-'0') 
                ehValido = 0;
        }
        else 
            ehValido = 0;
    }

    //verificação final de CPF válido
    if(ehValido==1)
        x=1;
    else
        x=0;
    return x;    
}



/////////////////////////////////////////
//// função necessária para criar a função que valida email

int caracteres_email(char c) {
    if ((!letra(c)) && (!Digito(c)) && (c != '@') && (c != '.') && (c != '_') && (c != '-')) {
        return 0;
    }
    else {
        return 1;
    }
}////// AUTOR: https://github.com/quirinof



/////////////////// VALIDA EMAIL ///////////////////////
int validar_email(char* email) {
    int i;
    int a = 0, p = 0;
    // verifica se o primeiro caracter segue as normas de email
    if(!letra(email[0]) && !Digito(email[0])) {
            return 0;
        }
    for (i = 0; email[i] != '\0'; i++) {
        // verifica se o email contem apenas os caracteres validos
        if (!caracteres_email(email[i])) {
            return 0;
        }
        // verificando quantidade de arroba e ponto
        if (email[i] == '@') {
            a++;
        }
        if (email[i] == '.') {
            p++;
        }
    }
    // valida arroba e ponto
    if (a != 1 || p != 1) {
        return 0;
    }
    // EMAIL valido
    return 1;
//// AUTOR: https://github.com/quirinof



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se ano for bissexto (divisível por 4, não divisível por ...
/// 100 ou divisível por 400) e retorna 0 caso contrário
///
int ehBissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
    return 1;
  } else if (aa % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
} /// Autor: https://github.com/flgorgonio/linguasolta_2020.2.git



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se dia, mes e ano correspondem a uma data válida, inclusive
/// em anos bissextos, ou retorna 0 caso contrário
///
int Data(int dd, int mm, int aa) {
  int maiorDia;
  if (aa < 0 || mm < 1 || mm > 12)
    return 0;
  if (mm == 2) {
    if (ehBissexto(aa)) 
      maiorDia = 29;
    else
      maiorDia = 28;
  } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
    maiorDia = 30;
  } else
    maiorDia = 31;
  if (dd < 1 || dd > maiorDia)
    return 0;
  return 1;
} /// Autor: https://github.com/flgorgonio/linguasolta_2020.2.git


/////////////////////////////////////////////////////////////////////////////////
/// validarData
int validar_data(char* data) {
  int tam, dia, mes, ano;
  tam = strlen(data);
  if (tam != 8) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!Digito(data[i])) {
      return 0;
    }
  }
  dia = (data[0] - '0') * 10 + (data[1] - '0');
  mes = (data[2] - '0') * 10 + (data[3] - '0');
  ano = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + 
        (data[6] - '0') * 10 + (data[7] - '0');
  if (!Data(dia, mes, ano)) {
    return 0;
  }
  return 1;
} /// Autor: https://github.com/flgorgonio/linguasolta_2020.2.git




/////////////////////////////////////////////////////////////////////////////////
///validar ramo do assessor

int validar_ramo(char* ramo) {
  for (int i=0; ramo[i]!='\0'; i++) {
    if (!letra(ramo[i])) {
      return 1;
    }
  }
	return 0;
}



/////////////////// VALIDAR ID/CODIGO /////////////////////

int valida_id(char* id, int tam) {
	int i;

    // quantidade de digitos
    for (i = 0; i < tam; i++) {
        if (id[i] == '\0') {
            return 0;
        }
    }
    if (id[i] != '\0') {
        return 0;
    }

    // apenas digitos numericos
    for (i = 0; i < tam; i++) {
        if (!numero(id[i])) {
            return 0;
        }
    }

    // ID valido
    return 1;
} ////// AUTOR: https://github.com/quirinof



///////////////////////////////////////////////////////////////////////////////
/// Retorna 1 se string recebido corresponder a um número do codigo válido 
/// (apenas dígitos) ou retorna 0 caso contrário

int validar_codConsulta(char* codConsulta) {
  int tam;
  tam = strlen(codConsulta);
  if (tam < 7 || tam > 9) {
    return 1;
  }
  for (int i = 0; i < tam; i++) {
    if (!valida_id(codConsulta[i])) {
      return 1;
    }
  }
  return 0;
}



//////////////////////////////////////////////////////////////////////////////
/// Programa: Validar hora 
    
    int validar_hora( int h, m, s) {
	    if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59)
	    {
		return 1;
	    }
	    else
	    {
		return 0;
	    }
	    getch(); /* Pausa */
	    return 0;
    }
