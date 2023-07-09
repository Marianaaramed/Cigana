#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Usuario.h"
#include "biblioteca.h"


void moduloUsuario(void);
    char opcao;
    do {
        opcao = menuUsuario();
        switch(opcao) {
            case '1': 	cadastrarUsuario();
                        break;
	        case '2':   pesquisarUsuario();
	    		        break;
	        case '3':   alterarUsuario();
	    		        break;
	        case '4':   excluirUsuario();
	    		        break;
	    } 		
    } while (opcao != '0');


void cadastrarUsuario(void){
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaCadastrarUsuario();
}


void pesquisarUsuario(void) {
  	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaPesquisarUsuario();
}
	
  
void alterarUsuario(void) {
  	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaAlterarUsuario();
}


void excluirUsuario(void) {	
  	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaExcluirUsuario();
}


char menuUsuario(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = = Menu Usuario = = = = = = = = =             ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
    printf("///                   1. Cadastrar um novo Usuário                                ///\n");
    printf("///                   2. Pesquisar por Usuário                                    ///\n");
    printf("///                   3. Atualizar cadastro do Usuário                            ///\n");
    printf("///                   4. Excluir um Usuário do sistema                            ///\n");
    printf("///                   0. Voltar ao menu anterior                                  ///\n");
    printf("///                                                                               ///\n");
    printf("///                   Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar(); 
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    delay(1);
    return op;
}


void telaCadastrarUsuario(void) {
    char registro[12];
    char cpf[12];
    char nome[51];
    char email[51];
    char nasc[11];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Cadastrar Usuário  = = = = = = = =             ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
do {
    printf("///                  Registro (apenas números): ");
    scanf("%[0-9]", registro);
    getchar();
} while (!validarRegistro(registro));
do {
    printf("///                  CPF (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
} while (!validarCPF(cpf));
do {
    printf("///                  Nome completo: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
} while (!validarNome(nome));
do {
    printf("///                  E-mail: ");
    scanf("%[A-Za-z0-9@._]", email);
    getchar();
} while (!validarEmail(email));
do {
    printf("///                  Data de Nascimento (dd/mm/aaaa): ");  
    scanf("%[0-9]", nasc);
    getchar();
} while (!validarNasc(nasc));
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    delay(1);
}


void telaPesquisarUsuario(void) {
    char registro[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = Pesquisar Usuário = = = = = = = =               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Registro (apenas números): ");
    scanf("%[0-9]", registro);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
}
 
void telaAlterarUsuario(void) {
    char registro[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = Alterar Usuário = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Registro (apenas números): ");
    scanf("%[0-9]", registro);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
}


void telaExcluirUsuario(void) {
    char registro[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = Excluir Usuário = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Registro (apenas números): ");
    scanf("%[0-9]", registro);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
}
