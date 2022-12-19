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
	char* cpfCsr;
	cpfCsr = telaUsuarioPorConsultor();
    relatUsuarioPorConsultor(cpfCsr);
    free(cpfCsr);
}
	

void oraculoPorConsultor() {
	char* cpfCsr;
	cpfCsr = telaOraculoPorConsultor();
    relatOraculoPorConsultor();(cpfCsr);
    free(cpfCsr);
}
	

void tempoPorOraculo() {
	char* codOraculo;
	codOraculo = telaTempoPorOraculo();
    relatTempoPorOraculo();(codOraculo);
    free(codOraculo);
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



char* telaUsuarioPorConsultor(void) {
    char* cpfCsr;
    cpfCsr = (char*) malloc(4*sizeof(char));
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
    printf("///            Informe o CPF do Consultor: ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return cpfCsr;
}



char* telaOraculoPorConsultor(void) {
	char* cpfCsr;
    	cpfCsr = (char*) malloc(4*sizeof(char));
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
	return cpfCsr;
}



char* telaTempoPorOraculo(void) {
	char* codOraculo[4]; 
	codOraculo = (char*) malloc(4*sizeof(char));
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
	return codOraculo;
}



void relatUsuarioPorConsultor(char* cpfCsr){
	 // posteriormente, esta função irá buscar o nome do Consultor no arquivo 
    	// por enquanto, o nome será preenchido com um valor predefinido
    nomeCsr = (char*) malloc(10*sizeof(char));
    strcpy(nomeCsr,"Alexandre");
	system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =   Consultor: %21s \n", nomeCsr);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
   	printf("///           =====================================================       ///\n");
	printf("///           ||   CPF do Usuario    ||     Nome do Usuario      ||       ///\n");
    	printf("///           =====================================================       ///\n");
   	printf("///           ||    012.351.497-00   || Artrur Barbosa Castro    ||       ///\n");
    	printf("///           ||    120.153.974-01   || Bryan de Araújo Cardoso  ||       ///\n");
   	printf("///           ||    274.597.823-02   || Clecio Barbosa Alves     ||       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
   	printf("///Tecle <ENTER> para continuar...///");
   	getchar();
}


void relatOraculoPorConsultor(char* cpfCsr){
	 // posteriormente, esta função irá buscar o nome do Consultor no arquivo 
    	// por enquanto, o nome será preenchido com um valor predefinido
    nomeCsr = (char*) malloc(10*sizeof(char));
    strcpy(nomeCsr,"Alexandre");
	system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =   Consultor: %21s \n", nomeCsr);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
   	printf("///           ===============================================             ///\n");
	printf("///           ||  Cod Oraculo  ||     Nome do Consultor    ||             ///\n");
    	printf("///           ===============================================             ///\n");
   	printf("///           ||     1357      || Artrur Barbosa Castro    ||             ///\n");
    	printf("///           ||     2468      || Bryan de Araújo Cardoso  ||             ///\n");
   	printf("///           ||     3579      || Clecio Barbosa Alves     ||             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
   	printf("///Tecle <ENTER> para continuar...///");
   	getchar();
}


void relatTempoPorconsultar(char* codOraculo){
	system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =  Tempo da Consultar: %11s  = = = = =             ///\n", Tempo);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
   	printf("///           ===============================================             ///\n");
	printf("///           ||  Cod Oraculo  ||     Nome do Consultor    ||             ///\n");
    	printf("///           ===============================================             ///\n");
   	printf("///           ||     1357      || Artrur Barbosa Castro    ||             ///\n");
    	printf("///           ||     2468      || Bryan de Araújo Cardoso  ||             ///\n");
   	printf("///           ||     3579      || Clecio Barbosa Alves     ||             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
   	printf("///Tecle <ENTER> para continuar...///");
   	getchar();
}      
