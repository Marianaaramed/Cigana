#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "consulta.h"
#include "usuario.h"
#include "assessor.h"
#include "biblioteca.h"

typedef struct consulta Consulta;
void moduloConsulta(void){
     char opcao;
     do {
        opcao = menuConsulta();
        switch(opcao) {
		case '1': cadastrarConsulta();
                          break;
	        case '2': pesquisarConsulta();
	    		  break;
	        case '3': alterarConsulta();
	    		  break;
	        case '4': excluirConsulta();
	    		  break;
	} 		
    } while (opcao != '0');
}


void cadastrarConsulta(void) {
	Consulta *csa;
	csa = telaPreencherConsulta();
	gravarConsulta(csa);
	free(csa);
}
	

void pesquisarConsulta(void) {
	Consulta *csa;
	char* codConsulta;
	codConsulta = telaPesquisarConsulta();
	csa = buscarConsulta(codConsulta);
	      exibirConsulta(csa);
	free(csa);
	free(codConsulta);
}
    

void alterarConsulta(void) {
	Consulta *csa;
	char* codConsulta;
	codConsulta = telaPesquisarConsulta();
	csa = buscarConsulta(codConsulta);
	if (csa == NULL) {
		printf("\n\nConsulta não encontrado!\n\n");
	} else {
		regravarConsulta(csa);
		csa = telaPreencherConsulta();
		strcpy(csa->codConsulta, codConsulta);
		regravarConsulta(csa);
		// Outra opção:
		// excluirConsulta(codConsulta);
		// gravarConsulta(csa);
	}
	free(codConsulta);
}	
  


void excluirConsulta(void) {
	Consulta *csa;
	char* codConsulta;
	codConsulta = telaExcluirConsulta();
	csa = (Consulta*) malloc(sizeof(Consulta));
	csa = buscarConsulta(codConsulta);
	if (csa == NULL) {
		printf("\n\nConsulta não encontrado!\n\n");
	} else {
		csa->status = False;
		regravarConsulta(csa);
		free(csa);
	}
	free(codConsulta);
}
  


char menuConsulta(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = =                    ///\n");
    printf("///                  = = = = = = = Menu Consulta = = = = = = =                    ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = =                    ///\n");
    printf("///                                                                               ///\n");
    printf("///                     1. Cadastrar Consulta                                     ///\n");
    printf("///                     2. Pesquisar Consulta                                     ///\n");
    printf("///                     3. Atualizar Consulta                                     ///\n");
    printf("///                     4. Excluir Consulta                                       ///\n");
    printf("///                     0. Voltar ao menu anterior                                ///\n");
    printf("///                                                                               ///\n");
    printf("///                     Escolha a opção desejada:     ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return op;
}



void telaErroArquivoConsulta(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
    printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
    printf("///           = = = com informações sobre a Consulta  = = = =             ///\n");
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
    
    
    
Consulta* telaPreencherConsulta(void) {    
    Consulta* csa;
    csa = (Consulta*) malloc(sizeof(Consulta));
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = Cadastrar Consulta = = = = = =                 ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Registro do usuário(apenas números): ");
    scanf("%[0-9]", csa->registro);
    getchar();
    do {
        printf("///                  Código da Consulta:      ");
    	scanf("%[A-Z0-9]", csa->codConsulta);
    	getchar();
    } while (!validar_codConsulta(csa->codConsulta));
    printf("///                      Hora da Consulta:        ");
    getchar();
    printf("///                      Data da Consulta:(dd/mm/aaaa):     ");     
    scanf("%[0-9]", csa->data);
    getchar();
    printf("///                      CPF do Assesssor(apenas números): ");
    scanf("%[0-9]", csa->cpf);
    getchar();  
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return csa;
}



char* telaPesquisarConsulta(void) {
    char* codConsulta;
    codConsulta = (char*) malloc(8*sizeof(char));	
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///               = = = = = = = Pesquisar Consulta = = = = = =                    ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Código da Consulta:      ");
    scanf("%[A-Z0-9]", codConsulta); 
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return codConsulta;	
}



char* telaAlterarConsulta(void) {
    char* codConsulta;
    codConsulta = (char*) malloc(8*sizeof(char));	
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = Alterar Consulta = = = = = = =                 ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                    Código da Consulta:      ");
    scanf("%[A-Z0-9]", codConsulta); 
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return codConsulta;
}



char* telaExcluirConsulta(void) {
    char* codConsulta;
    codConsulta = (char*) malloc(8*sizeof(char));	
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///               = = = = = = = Excluir Consulta = = = = = = =                    ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Código da Consulta:      ");
    scanf("%[A-Z0-9]", codConsulta); 
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return codConsulta;	
}
	   
	   
	   
void gravarConsulta(Consulta* csa) {
    FILE *fp;
	fp = fopen("consulta.dat", "ab");
	if (fp == NULL) {
		telaErroArquivoConsulta();
	}
	fwrite(csa, sizeof(Consulta), 1, fp);
	fclose(fp);
}



Consulta* buscarConsulta(char *codConsulta) {
    FILE *fp;
    Consulta *csa;
    csa = (Consulta*) malloc(sizeof(Consulta));
    fp = fopen("consulta.dat", "rb");
    if (fp == NULL) {
	    telaErroArquivoConsulta();
    }
	while(fread(csa, sizeof(Consulta), 1, fp)) {
		if ((strcmp(csa->codConsulta, codConsulta) == 0) && (csa->status == True)) {
		  fclose(fp);
                  return csa;    
            }
    }
    fclose(fp);
    return NULL;
}




void exibirConsulta(Consulta* csa) {
    if (csa == NULL) {
        printf("\n= = = Consulta Inexistente = = =\n");
    }
    else {
        printf("\n= = = Consulta Cadastrado = = =\n");
        printf("Registro do Usuario: %s\n", csa->registro);
	    printf("Codigo da Consulta: %s\n", csa->codConsulta);
	    printf("Hora da Consulta: %s\n", csa->hora);
	    printf("Data da Consulta: %s\n", csa->data);
        printf("CPF do Assessor: %s\n", csa->cpf);
	    printf("Status: %d\n", csa->status);
    }
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
}  



void regravarConsulta(Consulta* csa) {
    int achou;
    FILE* fp;
    Consulta* csaLido;

    csaLido = (Consulta*) malloc(sizeof(Consulta));
        fp = fopen("consulta.dat", "r+b");
        if (fp == NULL) {
                telaErroArquivoConsulta();
        }
         achou = False;
        while(fread(csaLido, sizeof(Consulta), 1, fp) && !achou) {
                //fread(csaLido, sizeof(Consulta), 1, fp);
                if (strcmp(csaLido->codConsulta, csa->codConsulta) == 0) {
                      achou = True;
                      fseek(fp, -1*sizeof(Consulta), SEEK_CUR);
                fwrite(csa, sizeof(Consulta), 1, fp);
                        //break;
                }
        }
        fclose(fp);
        free(csaLido);
}
