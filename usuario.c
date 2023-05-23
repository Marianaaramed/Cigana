#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuario.h"
#include "biblioteca.h"

typedef struct usuario Usuario;
void moduloUsuario(void) { 
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
}


void cadastrarUsuario(void){
    Usuario *usr;
    usr = telaPreencherUsuario();    
    gravarUsuario(usr);     
    free(usr);
}
void pesquisarUsuario(void) {
  Usuario* usr;
  char* registro;	
  registro = telaPesquisarUsuario();
  usr = buscarUsuario(registro);
	    exibirUsuario(usr);
  free(usr);
  free(registro);
}
	
  
void alterarUsuario(void) {
  Usuario* usr;
  char* registro;
  registro = telaAlterarUsuario();
  usr = buscarUsuario(registro);
  if (usr == NULL) {    
  printf("\n\nUsuario não encontrado!\n\n");
  } else {
    regravarUsuario(usr, registro);
            usr = telaPreencherUsuario();
            strcpy(usr->registro, registro);
            regravarUsuario(usr);
            // Outra opção:
            // excluirUsuario(registro);
            // gravarUsuario(usr);
  }
  free(registro);
}


void excluirUsuario(void) {	
  Usuario* usr;
  char *registro;
	    registro = telaExcluirUsuario();
  usr = (Usuario*) malloc(sizeof(Usuario));
  usr = buscarUsuario(registro);
  if (usr == NULL) {
  printf("\n\nUsuario não encontrado!\n\n");
  } else {
            usr->status = False;
            regravarUsuario(usr);
            free(usr);
  }
  free(registro);
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
    printf("\n");
    delay(1);
    return op;
}



Usuario* telaPreencherUsuario(void) {    
    Usuario* usr;
    usr = (Usuario*) malloc(sizeof(Usuario));
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
    printf("///                  Nome completo: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
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
    printf("\n");
    delay(1);
    return usr;
}



char telaPesquisarUsuario(void) {
    char* registro;
    registro = (char*) malloc(12*sizeof(char));
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
    return usr;

}
 


char telaAlterarUsuario(void) {
    char* registro;
    registro = (char*) malloc(12*sizeof(char));   
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
    return usr;
}



char telaExcluirUsuario(void) {
    char* registro;
    registro = (char*) malloc(12*sizeof(char));
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
    return usr;
}

