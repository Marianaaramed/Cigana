#include <stdio.h>
#include <stdlib.h>
#include "oraculo.h"
#include "biblioteca.h"

typedef struct oraculo Oraculo;

void moduloOraculo(void);
     char opcao;
     do {
        opcao = telaMenuOraculo();
        switch(opcao) {
            case '1':   telaCadastrarOraculo();
                        break;
	        case '2':   telaPesquisarOraculo();
	    		        break;
	        case '3':   telaAlterarOraculo();
	    		        break;
	        case '4':   telaExcluirOraculo();
	    		        break;
	    } 		
    } while (opcao != '0');
}


void cadastrarOraculo(void) {
    Oraculo* ocl;
    ocl = telaCadastrarOraculo();
    gravarOraculo(ocl);
    free(ocl);
}


void pesquisarOraculo(void) {
    Oraculo* ocl;
    char*  codOraculo;
    codOraculo = telaPesquisarOraculo();
    ocl = buscarOraculo(codOraculo);
	    exibirOraculo(ocl);
    free(ocl);
    free(codOraculo);
}
    

void alterarOraculo(void) {
    Oraculo* ocl;
    char*  codOraculo;
  codOraculo = telaAlterarOraculo();
  ocl = buscarUsuario(codOraculo);
  if (ocl == NULL) {    
  printf("\n\nOraculo não encontrado!\n\n");
  } else {
    regravarOraculo(ocl, codOraculo);
            ocl = telaPreencherOraculo();
            strcpy(ocl->codOraculo, codOraculo);
            regravarOraculo(ocl);
            // Outra opção:
            // excluirOraculo(codOraculo);
            // gravarOraculo(ocl);
  }
  free(codOraculo);
}
    


void excluirOraculo(void) {
    Oraculo* ocl;
    char*  codOraculo;
	codOraculo = telaExcluirOraculo();
  ocl = (Oraculo*) malloc(sizeof(Oraculo));
  ocl = buscarOraculo(codOraculo);
  if (ocl == NULL) {
  printf("\n\nUsuario não encontrado!\n\n");
  } else {
            ocl->status = False;
            regravarOraculo(ocl);
            free(ocl);
  }
  free(codOraculo);
}
    



char menuOraculo(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///              = = = = = = = = = Menu Oraculo = = = = = = = = =                 ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///               1. Cadastrar Oraculo                                            ///\n");
    printf("///               2. Pesquisar Oraculo                                            ///\n");
    printf("///               3. Alterar Oraculo                                              ///\n");
    printf("///               4. Excluir Oraculo                                              ///\n");
    printf("///               0. Voltar ao menu anterior                                      ///\n");
    primtf("///                                                                               ///\n");
    printf("///               Escolha a opção desejada: ");                                     
    scanf("%c", &op);
    getchar(); 
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");   
    delay(1);
    return op;       
}



void telaErroArquivoOraculo(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
    printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
    printf("///           = = = = com informações sobre o Oraculo = = = =             ///\n");
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


    
  Oraculo* telaCadastrarOraculo(void) {
    Oraculo ocl;
    ocl = (Oraculo*) malloc(sizeof(Oraculo));

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                   = = = = = = = = Cadastrar Oraculo = = = = = = =            ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
do{	  
    printf("///                    Código do Oráculo:      ");
    scanf("%[A-Z0-9]", ocl->codOraculo);
    getchar();
} while (!validarCod(ocl->codOraculo));	
do{
    printf("///                   Tipo do Oráculo:        ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ0-9]", tipoOraculo);
    getchar();
} while (!validarTipo(ocl->tipoOraculo));
do{
    printf("///                   Duração:       ");
    scanf("%[0-9]", ocl->horario);
    getchar();
} while (!validardelay(ocl->duracao));
do{
    printf("///                   Data da Criação (dd/mm/aaaa):     ");
    scanf("%[0-9/]", ocl->criacao);  
    getchar();
} while (!validarcria(ocl->criacao));
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return ocl;
}


char telaPesquisarOraculo(void) {
    char* codOraculo;
    codOraculo = (char*) malloc(12*sizeof(char));
   
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = Pesquisar Oráculo = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                   Código do Oráculo:      ");
    scanf("%[A-Z0-9]", codOraculo); 
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return codOraculo;
}



char telaAlterarOraculo(void) {
    char* codOraculo;
    codOraculo = (char*) malloc(12*sizeof(char));

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = Alterar Oraculo = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                     Código do Oráculo:      ");
    scanf("%[A-Z0-9]", codOraculo); 
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return codOraculo;
}



char telaExcluirOraculo(void) {
   char* codOraculo;
   codOraculo = (char*) malloc(12*sizeof(char));

    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = Excluir Oraculo = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                   Código do Oráculo:      ");
    scanf("%[A-Z0-9]", codOraculo); 
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return codOraculo;
}  



void gravarOraculo(Oraculo* ocl) {
    FILE* fp;

	fp = fopen("oraculo.dat", "ab");
	if (fp == NULL) {
		telaErroArquivoOraculo();
	}
	fwrite(ocl, sizeof(Oraculo), 1, fp);
	fclose(fp);
}

Oraculo* buscarOraculo(char* codOraculo) {
    FILE* fp;
    Oraculo* ocl;

    ocl = (Oraculo*) malloc(sizeof(Oraculo));
    fp = fopen("oraculo.dat", "rb");
    if (fp == NULL) {
                telaErroArquivoOraculo();
    }
        while(fread(ocl, sizeof(Oraculo), 1, fp)) {
            if (strcm(ocl->codOraculo, codOraculo) == 0) && (ocl->status == True)) {
                  fclose(fp);
                  return ocl;    
            }
    }
    fclose(fp);
    return NULL;
}



void exibirOraculo(Oraculo* ocl) {
    if (ocl == NULL) {
        printf("\n= = = Oraculo Inexistente = = =\n");
    }
    else {
        printf("\n= = = Oraculo Cadastrado = = =\n");
        printf("Codigo do Oraculo: %s\n", ocl->codOraculo);
        printf("Tipo do Oraculo: %s\n", ocl->tipoOraculo);        
        printf("Duração do Oraculo: %s\n", ocl->duração);
        printf("Data de Criação: %s\n", ocl->cria);
        printf("Status: %d\n", ocl->status);
    }
    printf("\n\nTecle ENTER para continuar!\n\n");
    getchar();
}  



void regravarOraculo(Oraculo* ocl, char* codOraculo) {
    int achou;
    FILE* fp;
    Oraculo* oclLido;

    oclLido = (Oraculo*) malloc(sizeof(Oraculo));
        fp = fopen("oraculo.dat", "r+b");
        if (fp == NULL) {
                telaErroArquivoOraculo();
        }
        //while(!feof(fp)) {
        achou = False;
        while(fread(oclLido, sizeof(Usuario), 1, fp) && !achou) {
                //fread(oclLido, sizeof(Oraculo), 1, fp);
                if (strcmp(oclLido->codOraculo,, ocl->codOraculo) == 0) {
                      achou = True;
                      fseek(fp, -1*sizeof(Oraculo), SEEK_CUR);
                fwrite(ocl, sizeof(Oraculo), 1, fp);
                        //break;
                }
        }
        fclose(fp);
        free(oclLido)
}
