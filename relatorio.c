#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relatorio.h"
#include "biblioteca.h"


void moduloRelatorio(void) {
	char opcao;
	do {
		opcao = menuRelatorio();
		switch(opcao) {
			case '1': 	usuarioPorConsultor();
						break;
			case '2': 	oraculoPorConsultor();
						break;
			case '3': 	tempoPorOraculo();
						break;
			} 		
	} while (opcao != '0');
}


void usuarioPorConsultor() {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaUsuarioPorConsultor();
}


void oraculoPorConsultor() {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaOraculoPorConsultor();
}


void tempoPorOraculo() {
	// função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaTempoPorOraculo();
}



char menuRelatorio(void) {
	char op;
    	system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = = = = = = =  Cigana Virtual   = = = = = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Relatório = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Listar usuarios por consultor                            ///\n");
	printf("///           2. Exibir oraculos de um consultor                          ///\n");
	printf("///           3. Exibir tempo por consultar                               ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return op;
}



void telaUsuarioPorConsultor(void) {
    char cpf[12];
    
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///          = = = = = = = = =  Cigana Virtual   = = = = = = = =          ///\n");
    printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                       ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///           = = = = = =  Usuario Por Consultor  = = = = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///           Informe o CPF do Consultor: ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
}



void telaOraculoPorConsultor(void) {
	char cpf[12];
    	
    	system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = = = = = = =  Cigana Virtual   = = = = = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =  Oraculo Por Consultor  = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o CPF do consultor (apenas números): ");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}



void telaTempoPorOraculo(void) {
	char codOraculo[4];      

        system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =   Tempo Por Oraculo    = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///              Código do Oráculo:      ");
        scanf("%[A-Z0-9]", codOraculo); 
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
}
