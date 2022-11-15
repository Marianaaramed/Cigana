#include <stdio.h>
#include <stdlib.h>
#include "oraculo.h"
#include "biblioteca.h"


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
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaPesquisarOraculo();
}


void alterarOraculo(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaAlterarOraculo();
}


void excluirOraculo(void) {
    // função ainda em desenvolvimento
	// exibe a tela apenas para testes
    telaExcluirOraculo();
}



void menuOraculo(void) {
    char op;

    system("clear||cls");
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///              = = = = = = = = = Menu Oraculo = = = = = = = = = =               ///\n");
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
    limpaTela();
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

    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = Cadastrar Oraculo = = = = = = = =            ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
    printf("///                    Numeração (apenas números): ");  
    scanf("%[0-9]", num);
    getchar();
    printf("///                    Tema:       ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", tema);
    getchar();
    printf("///                    Horoscopo:  ");
    scanf("%[0-9]", horoscopo);
    getchar();
    printf("///                    Previsoes:  ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", previsoes);    
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return rct;
}



void telaPesquisarOraculo(void) {
    char num[12];
    
    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = Pesquisar Oraculo = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe a numeração(apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
}



void telaAlterarOraculo(void) {
    char num[12];

    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = Alterar Oraculo = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe a numeração(apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
}



void telaExcluirOraculo(void) {
    char num[12];

    limpaTela();
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = Excluir Oraculo = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                 Informe a numeração (apenas números): ");
    scanf("%[0-9]", num);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
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
