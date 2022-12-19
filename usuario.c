#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Usuario.h"
#include "biblioteca.h"

typedef struct usuario Usuario;
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
}

void cadastrarUsuario(void){
    Usuario *usr;
    usr = telaPreencherUsuario();    
    gravarUsuario(usr);     
    free(usr);
}



void pesquisarUsuario(void) {
  Usuario* usr;
  char* cpf;	
  cpf = telaPesquisarUsuario();
  usr = buscarUsuario(cpf);
	    exibirUsuario(usr);
  free(usr);
  free(cpf);
}

	
  
void alterarUsuario(void) {
  Usuario* usr;
  char* cpf;
  cpf = telaAlterarUsuario();
  usr = buscarUsuario(cpf);
  if (usr == NULL) {    
  printf("\n\nUsuario não encontrado!\n\n");
  } else {
    regravarUsuario(usr, cpf);
            usr = telaPreencherUsuario();
            strcpy(usr->cpf, cpf);
            regravarUsuario(usr);
            // Outra opção:
            // excluirUsuario(cpf);
            // gravarUsuario(usr);
  }
  free(cpf);
}



void excluirUsuario(void) {	
  Usuario* usr;
  char *cpf;

	    cpf = telaExcluirUsuario();
  usr = (Usuario*) malloc(sizeof(Usuario));
  usr = buscarUsuario(cpf);
  if (usr == NULL) {
  printf("\n\nUsuario não encontrado!\n\n");
  } else {
            usr->status = False;
            regravarUsuario(usr);
            free(usr);
  }
  free(cpf);
}



char menuUsuario(void) {
    char op;

    limpaTela();
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
    limpaTela();
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
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Cadastrar Usuário  = = = = = = = =             ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
  do {
        printf("///                  CPF (apenas números): ");
        scanf("%[0-9]", usr->cpf);
        getchar();
  } while (!validarCPF(usr->cpf));
        printf("///                  Nome completo: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", usr->nome);
        getchar();
        printf("///                  E-mail: ");
        scanf("%[A-Za-z0-9@._]", usr->email);
        getchar();
        printf("///                  Data de Nascimento (dd/mm/aaaa): ");  
        scanf("%[0-9]", usr->nasc);
        getchar();
do {
        printf("///                  Celular (apenas números com DDD):  ");
        scanf("%[0-9]", usr->celular);
        getchar();
} while (!validarCelular(usr->celular));
        printf("///                                                                               ///\n");
        printf("///                                                                               ///\n");
        printf("/////////////////////////////////////////////////////////////////////////////////////\n");
        printf("\n");
        delay(1);
        return usr;
}



char telaPesquisarUsuario(void) {
    char* cpf;
    cpf = (char*) malloc(12*sizeof(char));
	
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///             = = = = = = = = Pesquisar Usuário  = = = = = = = =                ///\n");
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
 


char telaAlterarUsuario(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(char));
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Alterar Usuário  = = = = = = = = =             ///\n");
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



char telaExcluirUsuario(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(char));
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///              = = = = = = = = Excluir Usuário  = = = = = = = = =               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
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



void gravarUsuario(Usuario* usr) {
    FILE* fp;

  fp = fopen("usuarios.dat", "ab");
     if (fp == NULL) {
          telaErroArquivoUsuario();
  }
  fwrite(usr, sizeof(Usuario), 1, fp);
  fclose(fp);
}



Usuario* buscarUsuario(char* cpf) {
    FILE* fp;
    Usuario* usr;

    usr = (Usuario*) malloc(sizeof(Usuario));
    fp = fopen("usuarios.dat", "rb");
    if (fp == NULL) {
                telaErroArquivoUsuario();
    }
        while(fread(usr, sizeof(Usuario), 1, fp)) {
            if (strcm(usr->cpf, cpf) == 0) && (usr->status == True)) {
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
        printf("CPF do Usuario: %s\n", usr->cpf);
        printf("Nome do Usuario: %s\n", usr->nome);        
        printf("E-mail do Usuario: %s\n", usr->email);
        printf("Data de Nasc: %s\n", usr->nasc);
        printf("Celular: %s\n", usr->celular);
        printf("Status: %d\n", usr->status);
    }
    printf("\n\nTecle ENTER para continuar!\n\n");
    getchar();
}  



void regravarUsuario(Usuario* usr, char* cpf) {
    int achou;
    FILE* fp;
    Usuario* usrLido;

    usrLido = (Usuario*) malloc(sizeof(Usuario));
        fp = fopen("usuarios.dat", "r+b");
        if (fp == NULL) {
                telaErroArquivoUsuario();
        }
        //while(!feof(fp)) {
        achou = False;
        while(fread(usrLido, sizeof(Usuario), 1, fp) && !achou) {
                //fread(usrLido, sizeof(Usuario), 1, fp);
                if (strcmp(usrLido->cpf,, usr->cpf) == 0) {
                      achou = True;
                      fseek(fp, -1*sizeof(Usuario), SEEK_CUR);
                fwrite(usr, sizeof(Usuario), 1, fp);
                        //break;
                }
        }
        fclose(fp);
        free(usrLido)
}
