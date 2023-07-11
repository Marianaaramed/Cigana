#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assessor.h"
#include "biblioteca.h"

typedef struct assessor Assessor;
void moduloAssessor(void){
    char opcao;
    do {
        opcao = menuAssessor();
        switch(opcao) {
            case '1': 	cadastrarAssessor();
                        break;
	        case '2':   pesquisarAssessor();
	    		        break;
	        case '3':   alterarAssessor();
	    		        break;
	        case '4':   excluirAssessor();
	    		        break;
	    } 		
    } while (opcao != '0');
}


void cadastrarAssessor(void){
	Assessor *asr;
	asr = telaPreencherAssessor();  
	gravarAssessor(asr);  
	free(asr);	
}


void pesquisarAssessor(void) {
  	Assessor *asr;
	char* cpf;
	cpf = telaPesquisarAssessor();
	asr = buscarAssessor(cpf);
          exibirAssessor(asr);
	free(asr);
	free(cpf);
}
	
	
  
void alterarAssessor(void) {
	Assessor *asr;
  	char* cpf;
	cpf = telaAlterarAssessor();
	asr = buscarAssessor(cpf);
	if (asr == NULL) {  
		printf("\n\nAssessor não encontrado!\n\n");
	} else {
		regravarAssessor(asr);
		asr = telaPreencherAssessor();
		strcpy(asr->cpf, cpf);
		regravarAssessor(asr);
		// Outra opção:
		// excluirAssessor(cpf);
		// gravarAssessor(asr);
	}
	free(cpf);
}


void excluirAssessor(void) {	
	Assessor *asr;
	char* cpf;
  	cpf = telaExcluirAssessor();
	asr = (Assessor*) malloc(sizeof(Assessor));
	asr = buscarAssessor(cpf);
	if (asr == NULL) {
		printf("\n\nAssessor não encontrado!\n\n");
	} else {
		asr->status = False;
		regravarAssessor(asr);
		free(asr);
	}
	free(cpf);
}



char menuAssessor(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                   = = = = = = = = Menu Assessor = = = = = = = = =             ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
    printf("///                      1. Cadastrar Assessor                                    ///\n");
    printf("///                      2. Pesquisar Assessor                                    ///\n");
    printf("///                      3. Atualizar cadastro do Assessor                        ///\n");
    printf("///                      4. Excluir Assessor                                      ///\n");
    printf("///                      0. Voltar ao menu anterior                               ///\n");
    printf("///                                                                               ///\n");
    printf("///                      Escolha a opção desejada:   ");
    scanf("%c", &op);
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return op;
}



void telaErroArquivoAssessor(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
    printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
    printf("///           = = = com informações sobre o Assessor= = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");	
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");

}



Assessor* telaPreencherAssessor(void) {
    Assessor* asr;
    asr = (Assessor*) malloc(sizeof(Assessor));
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = =  Cadastrar Assessor = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
  do {
        printf("///                  CPF (apenas números):          ");
        scanf("%[0-9]", asr->cpf);
        getchar();
  } while (!validar_cpf(asr->cpf));
    printf("///                  Nome completo:                 ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", asr->nome);
    getchar();
    printf("///                  Ramo do Assessor:                 ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ,]", asr->ramo);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return asr;
}



char* telaPesquisarAssessor(void) {
    char* cpf;
    cpf = (char*) malloc(12*sizeof(char));
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///              = = = = = = = Pesquisar Assessor = = = = = = =                   ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe o CPF (apenas números):    ");                         
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return cpf;
}



char* telaAlterarAssessor(void) {
    char* cpf;
    cpf = (char*) malloc(12*sizeof(char));
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = Atualizar Assessor = = = = = = =                ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                    Informe o CPF (apenas números):     ");                      
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return cpf;
}



char* telaExcluirAssessor(void) {
    char* cpf;
    cpf = (char*) malloc(12*sizeof(char));
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                = = = = = = = Excluir Assessor = = = = = = = =                 ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                 Informe o CPF (apenas números):      ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return cpf;
}



void gravarAssessor(Assessor* asr) {
    FILE* fp;

  fp = fopen("assessor.dat", "ab");
     if (fp == NULL) {
          telaErroArquivoAssessor();
  }
  fwrite(asr, sizeof(Assessor), 1, fp);
  fclose(fp);
}



Assessor* buscarAssessor(char* cpf) {
    FILE* fp;
    Assessor* asr;

    asr = (Assessor*) malloc(sizeof(Assessor));
    fp = fopen("assessor.dat", "rb");
    if (fp == NULL) {
                telaErroArquivoAssessor();
    }
        while(fread(asr, sizeof(Assessor), 1, fp)) {
            if ((strcmp(asr->cpf, cpf) == 0) && (asr->status == True)) {
                  fclose(fp);
                  return asr;    
            }
    }
    fclose(fp);
    return NULL;
}



void exibirAssessor(Assessor* asr) {
    if (asr == NULL) {
        printf("\n= = = Assessor Inexistente = = =\n");
    }
    else {
        printf("\n= = = Assessor Cadastrado = = =\n");
        printf("CPF do Assessor: %s\n", asr->cpf);
        printf("Nome do Assessor: %s\n", asr->nome);        
        printf("Ramo do Usuario: %s\n", asr->ramo);
        printf("Status: %d\n", asr->status);
    }
    printf("\n\nTecle ENTER para continuar!\n\n");
    getchar();
}  



void regravarAssessor(Assessor* asr) {
    int achou;
    FILE* fp;
    Assessor* asrLido;

    asrLido = (Assessor*) malloc(sizeof(Assessor));
        fp = fopen("assessor.dat", "r+b");
        if (fp == NULL) {
                telaErroArquivoAssessor();
        }
        while(fread(asrLido, sizeof(Assessor), 1, fp) && !achou) {
            if (strcmp(asrLido->cpf, asr->cpf) == 0) {
                achou = True;
                fseek(fp, -1*sizeof(Assessor), SEEK_CUR);
                fwrite(asr, sizeof(Assessor), 1, fp);
                        //break;
                }
        }
        fclose(fp);
        free(asrLido);
}
