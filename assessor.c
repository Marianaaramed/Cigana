#include <stdio.h>
#include <stdlib.h>
#include "consultor.h"
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
		regravarAssessor(asr, cpf);
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



void telaCadastrarAssessor(void) {
    char cpf[12]; 
    char nome[51];
    char ramo [51];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = Cadastrar Assessor = = = = = = =             ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  CPF (apenas números):          ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                  Nome completo:                 ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("///                  Ramo do Assessor:                 ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ,]", ramo);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
}



void telaPesquisarAssessor(void) {
    char cpf[12];
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
}



void telaAlterarAssessor(void) {
    char cpf[12];
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
}



void telaExcluirAssessor(void) {
    char cpf[12];
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
}
