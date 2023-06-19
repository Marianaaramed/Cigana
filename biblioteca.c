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
/// Validar letra

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

int validaCPF(char *cpf){
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





///////////////////////////////////////////////////////////////////////////////
xxx/// ValidarEmail

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
int valida_data(int dd, int mm, int aa) {
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
} ////// AUTOR: MATHEUS QUIRINO FERNANDES FIGUEIREDO /// GIT: https://github.com/quirinof



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
