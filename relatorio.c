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
			case '1': 	listra_usuario();
						break;
			case '2': 	listra_assessor();
						break;
			case '3': 	listra_consulta();
						break;
			} 		
	} while (opcao != '0');
}


void listra_usuario() {
	char* registro;
	registro = telaListra_usuario();
        relatListra_usuario(registro);
        free(registro);
}
	

void listra_assessor() {
	char* cpfasr;
	cpfasr = telaListra_assessor();
        relatListra_assessor();(cpfasr);
        free(cpfasr);
}
	

void listra_consulta() {
	char* codConsulta;
	codConsulta = telaListra_consulta();
        relatListra_consulta();(codConsulta);
        free(codConsulta);
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
	printf("///             1. Lista  usuarios                                        ///\n");
	printf("///             2. Lista  assessores                                      ///\n");
	printf("///             3. Lista  consultas                                       ///\n");
	printf("///             0. Voltar ao menu anterior                                ///\n");
	printf("///                                                                       ///\n");
	printf("///             Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return op;
}



char* telaListra_usuario();(void) {
    char* registro;
    registro = (char*) malloc(12*sizeof(char));
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
    printf("///           = = = = = = = = = =  Usuarios  = = = = = = = = =            ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///            Informe o registro do usuario: ");
    scanf("%[0-9]", registro;);
    getchar();
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return registro;
}



char* telaListra_assessor(void) {
	char* cpfasr;
	cpfasr = (char*) malloc(12*sizeof(char));
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
	printf("///           = = = = = = = = = = Assessores  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o CPF do Assessor (apenas números): ");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return cpfasr;
}



char* telaListra_consulta(void) {
	char* codConsulta; 
	codconsulta = (char*) malloc(11*sizeof(char));
        system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = Consultas = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///              Código do Consulta:      ");
	scanf("%[A-Z0-9]", 	codConsulta); 
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return codConsulta;
}



void lista_usuario(void) {
    FILE* fp;
    Usuario *usr;
    usr = (Usuario*) malloc(sizeof(Usuario));
    fp = fopen("usuario.dat", rb);
	while( fread(usr,sizeof(usuario), 1, fp)){
    }
    fclose(fp);
    free(usr);
