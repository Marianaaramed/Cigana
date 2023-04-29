#include <stdio.h>
#include <stdlib.h>
#include "consultor.h"
#include "biblioteca.h"

void moduloAssessor(void);
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
    	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaCadastrarAssessor();
}


void pesquisarAssessor(void) {
  	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaCadastrarAssessor();
}
	
  
void alterarAssessor(void) {
  	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaCadastrarAssessor();
}


void excluirAssessor(void) {	
  	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaCadastrarAssessor();
}



char telaMenuAssessor(void) {
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
    char email[51];
    char celular[12];
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
    printf("///                  E-mail:                        ");
    scanf("%[A-Za-z0-9@._]", email);
    getchar();
    printf("///                  Celular (apenas números):      ");
    scanf("%[0-9]", celular);
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
