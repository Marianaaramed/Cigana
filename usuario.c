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
            regravarUsuario(usr);
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



void telaErroArquivoUsuario(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
    printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
    printf("///           = = = com informações sobre o Usuário = = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = =  Pedimos desculpas pelos inconvenientes = =             ///\n");	
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\n\nTecle ENTER para continuar!\n\n");
    getchar();
    exit(1);
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
    printf("///                  Registro (apenas números): ");
    scanf("%[0-9]", usr->registro);
    getchar();    
    printf("///                  CPF (apenas números): ");
    scanf("%[0-9]", usr->cpf);
    getchar();
    printf("///                  Nome completo: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", usr->nome);
    getchar();
    printf("///                  E-mail: ");
    scanf("%[A-Za-z0-9@._]", usr->email);
    getchar();
    do {
        printf("///                  Data de Nascimento (dd/mm/aaaa): ");  
        scanf("%[0-9]", usr->nasc);
        getchar();
    } while (!validar_data(usr->nasc));    
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return usr;
}



char* telaPesquisarUsuario(void) {
    char* registro;
    registro = (char*) malloc(12*sizeof(char));
	
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///             = = = = = = = = Pesquisar Usuário  = = = = = = = =                ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe o registro (apenas números): ");
    scanf("%[0-9]", registro);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return registro;
}
 


char* telaAlterarUsuario(void) {
    char* registro;

    registro = (char*) malloc(12*sizeof(char));
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Alterar Usuário  = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                   Informe o registro (apenas números): ");
    scanf("%[0-9]", registro);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                                ///n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return registro;
}



char* telaExcluirUsuario(void) {
    char* registro;

    registro = (char*) malloc(12*sizeof(char));
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///              = = = = = = = = Excluir Usuário  = = = = = = = = =               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                               ///\n");
    printf("///               Informe o registro (apenas números): ");
    scanf("%[0-9]", registro);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1); 
    return registro;
}



void gravarUsuario(Usuario* usr) {
    FILE* fp;

    fp = fopen("usuarios.dat", "ab");
    if (fp == NULL) {
        telaErroArquivoUsuario();
    }
    fwrite(usr, sizeof(Usuario), 1, fp);
    fclose(fp);
}



Usuario* buscarUsuario(char* registro) {
    FILE* fp;
    Usuario* usr;

    usr = (Usuario*) malloc(sizeof(Usuario));
    fp = fopen("usuarios.dat", "rb");
    if (fp == NULL) {
        telaErroArquivoUsuario();
    }
    while(fread(usr, sizeof(Usuario), 1, fp)) {
        if ((strcmp(usr->registro, registro) == 0) && (usr->status == True)) {
            fclose(fp);
            return usr;    
        }
    }
    fclose(fp);
    return NULL;
}



void exibirUsuario(Usuario* usr) {
    if (usr == NULL) {
        printf("\n= = = Usuario Inexistente = = =\n");
    }
    else {
        printf("\n= = = Usuario Cadastrado = = =\n");
        printf("Registro do Usuario: %s\n", usr->registro);
        printf("CPF do Usuario: %s\n", usr->cpf);
        printf("Nome do Usuario: %s\n", usr->nome);        
        printf("E-mail do Usuario: %s\n", usr->email);
        printf("Data de Nasc: %s\n", usr->nasc);
        printf("Status: %d\n", usr->status);
    }
    printf("\n\nTecle ENTER para continuar!\n\n");
    getchar();
}  



void regravarUsuario(Usuario* usr) {
    int achou;
    FILE* fp;
    Usuario* usrLido;

    usrLido = (Usuario*) malloc(sizeof(Usuario));
    fp = fopen("usuarios.dat", "r+b");
    if (fp == NULL) {
            telaErroArquivoUsuario();
    }
    achou = False;
    while(fread(usrLido, sizeof(Usuario), 1, fp) && !achou) { 
          if (strcmp(usrLido->registro, usr->registro) == 0) {
                    achou = True;
                    fseek(fp, -1*sizeof(Usuario), SEEK_CUR);
            fwrite(usr, sizeof(Usuario), 1, fp);
             }
    }
    fclose(fp);
    free(usrLido);
   
}
