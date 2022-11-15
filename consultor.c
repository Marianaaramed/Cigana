#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "consultor.h"
#include "biblioteca.h"

typedef struct consultor;
void moduloConsultor(void);
    char opcao;
    do {
        opcao = menuConsultor();
        switch(opcao) {
            case '1': 	cadastrarConsultor();
                        break;
	        case '2':   pesquisarConsultor();
	    		        break;
	        case '3':   alterarConsultor();
	    		        break;
	        case '4':   excluirConsultor();
	    		        break;
	    } 		
    } while (opcao != '0');
}

void cadastrarConsultor(void){
    Consultor *csr;
    csr = telaPreencherConsultor();    
    gravarConsultor(csr);     
    free(csr);
}



void pesquisarConsultor(void) {
  Consultor* csr;
  char* cpf;	
  cpf = telaPesquisarConsultor();
  csr = buscarConsultor(cpf);
	    exibirConsultor(csr);
  free(csr);
  free(cpf);
}

	
  
void alterarConsultor(void) {
  Consultor* csr;
  char* cpf;
  cpf = telaAlterarConsultor();
  csr = buscarConsultor(cpf);
  if (csr == NULL) {    
  printf("\n\nConsultor não encontrado!\n\n");
  } else {
    regravarConsultor(csr, cpf);
            csr = telaPreencherConsultor();
            strcpy(csr->cpf, cpf);
            regravarConsultor(csr);
            // Outra opção:
            // excluirConsultor(cpf);
            // gravarConsultor(csr);
  }
  free(cpf);
}



void excluirConsultor(void) {	
  Consultor* csr;
  char *cpf;
  cpf = telaExcluirConsultor();
  csr = (Consultor*) malloc(sizeof(Consultor));
  csr = buscarConsultor(cpf);
  if (csr == NULL) {
  printf("\n\nConsultor não encontrado!\n\n");
  } else {
            csr->status = False;
            regravarUsuario(csr);
            free(csr);
  }
  free(cpf);
}



char menuConsultor(void) {
    char op;

    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = = Menu Consultor = = = = = = = =             ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
    printf("///                   1. Cadastrar novo Consultor                                 ///\n");
    printf("///                   2. Pesquisar Consultor                                      ///\n");
    printf("///                   3. Atualizar cadastro do Consultor                          ///\n");
    printf("///                   4. Excluir Consultor do sistema                             ///\n");
    printf("///                   0. Voltar ao menu anterior                                  ///\n");
    printf("///                                                                               ///\n");
    printf("///                   Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar(); 
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return op;
}



void telaErroArquivo(void) {
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
	printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
	printf("///           = = = com informações sobre o Consultor = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");
	printf("///           = = =  mas este programa será finalizado! = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
	exit(1);
}



Consultor* telaPreencherConsultor(void) {    
    Consultor *csr;
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                = = = = = = = = Cadastrar Consultor = = = = = = =              ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
  csr = (Consultor*) malloc(sizeof(Consultor)); 
  do {
        printf("///                  CPF (apenas números): ");
        scanf("%[0-9]", csr->cpf);
        getchar();
  } while (!validarcpf(csr->cpf));
        printf("///                  Nome completo: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", csr->nome);
        getchar();
        printf("///                  E-mail: ");
        scanf("%[A-Za-z0-9@._]", csr->email);
        getchar();
        printf("///                  Data de Nascimento (dd/mm/aaaa): ");  
        scanf("%[0-9]", csr->nasc);
        getchar();
do {
        printf("///                  Celular (apenas números com DDD):  ");
        scanf("%[0-9]", csr->celular);
        getchar();
} while (!validarCelular(csr->celular));
        printf("///                                                                               ///\n");
        printf("///                                                                               ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        delay(1);
        return csr;
}



char telaPesquisarConsultor(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(char));
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///               = = = = = = = Pesquisar Consultor = = = = = = =                 ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe o CPF (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return cpf;
}
 


char telaAlterarConsultor(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(char));
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = Alterar Consultor = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                   Informe o CPF (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                                ///n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return cpf;
}



char telaExcluirConsultor(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(char));
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                = = = = = = = Excluir Consultor = = = = = = = =                ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///               Informe o CPF (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1); 
    return cpf;
}



void gravarConsultor(Consultor* csr) {
    FILE* fp;

  fp = fopen("consultores.dat", "ab");
     if (fp == NULL) {
          telaErroArquivo();
  }
  fwrite(csr, sizeof(Consultor), 1, fp);
  fclose(fp);
}



Consultor* buscarConsultor(char* cpf) {
    FILE* fp;
    Consultor* csr;

    csr = (Consultor*) malloc(sizeof(Consultor));
    fp = fopen("consultores.dat", "rb");
    if (fp == NULL) {
                telaErroArquivo();
    }
        while(fread(csr, sizeof(Consultor), 1, fp)) {
            if (strcm(csr->cpf, cpf) == 0) && (csr->status == True)) {
                  fclose(fp);
                  return csr;    
            }
    }
    fclose(fp);
    return NULL;
}



void exibirConsultor(Consultor* csr) {
    if (csr == NULL) {
        printf("\n= = = Consultor Inexistente = = =\n");
    }
    else {
        printf("\n= = = Consultor Cadastrado = = =\n");
        printf("CPF do Consultor: %s\n", csr->cpf);
        printf("Nome do Consultor: %s\n", csr->nome);        
        printf("E-mail do Consultor: %s\n", csr->email);
        printf("Data de Nasc: %s\n", csr->nasc);
        printf("Celular: %s\n", csr->celular);
        printf("Status: %d\n", csr->status);
    }
    printf("\n\nTecle ENTER para continuar!\n\n");
    getchar();
}  



void regravarConsultor(Consultor* csr, char* cpf) {
    int achou;
    FILE* fp;
    Consultor* csrLido;

    csrLido = (Consultor*) malloc(sizeof(Consultor));
        fp = fopen("consultores.dat", "r+b");
        if (fp == NULL) {
                telaErroArquivo();
        }
        //while(!feof(fp)) {
        achou = False;
        while(fread(csrLido, sizeof(Consultor), 1, fp) && !achou) {
                //fread(csrLido, sizeof(Consultor), 1, fp);
                if (strcmp(csrLido->cpf,, csr->cpf) == 0) {
                      achou = True;
                      fseek(fp, -1*sizeof(Consultor), SEEK_CUR);
                fwrite(csr, sizeof(Consultor), 1, fp);
                        //break;
                }
        }
        fclose(fp);
        free(csrLido)
}
