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
			case '1': 	Listrar_usuario();
						break;
			case '2': 	Listrar_assessor();
						break;
			case '3': 	Listrar_consulta();
						break;
			} 		
	} while (opcao != '0');
}


void Listrar_usuario() {
	char* registro;
	registro = telaListrar_usuario();
        relatListrar_usuario(registro);
        free(registro);
}
	

void Listrar_assessor() {
	char* cpf;
	cpf = telaListrar_assessor();
        relatListrar_assessor(cpf);
        free(cpf);
}
	

void Listrar_consulta() {
	char* codConsulta;
	codConsulta = telaListrar_consulta();
        relatListrar_consulta(codConsulta);
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
	printf("///             1. Listar  usuarios                                       ///\n");
	printf("///             2. Listar  assessores                                     ///\n");
	printf("///             3. Listar  consultas                                      ///\n");
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



char* telaListrar_usuario(void) {
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
    scanf("%[0-9]", registro);
    getchar();
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return registro;
}



char* telaListrar_assessor(void) {
	char* cpf;
	cpf = (char*) malloc(17*sizeof(char));
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
	return cpf;
}



char* telaListrar_consulta(void) {
	char* codConsulta; 
	codConsulta = (char*) malloc(11*sizeof(char));
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



void relatListrar_usuario(char* registro) {
	//nomeUsr = (char*) malloc(10*sizeof(char));
	//strcpy(nomeUsr,"Arthur");
	system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	//printf("///           = = = = =   Consultor: %21s \n", nomeCsr);
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



void relatListrar_assessor( char*cpf_asr) {
	//cpf_asr = (char*) malloc(17*sizeof(char));
    //strcpy(nome_asr,"Arthur");
	system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	//printf("///           = = = = =   Consultor: %21s \n", nomeCsr);
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



void relatListrar_consulta(char* codConsulta) {
	//tela em desenvolvimento
	
	

void Listar_usuario(void) {
    FILE* fp;
    Usuario *usr;
    usr = (Usuario*) malloc(sizeof(Usuario));
    fp = fopen("usuario.dat", rb);
	while( fread(usr,sizeof(usuario), 1, fp)){
    }
    fclose(fp);
    free(usr);
	
	
void Listar_assessor(void) {
	FILE* fp;
    Assessor* asr;
	asr = (Assessor*) malloc(sizeof(Assessor));
	fp = fopen("assessor.dat", rb);
	while( fread(usr,sizeof(assessor), 1, fp)){
	}
	fclose(fp);
	free(usr);
	
	
	
void Listar_consulta(void) {
	FILE* fp;
        consulta* codConsulta;
	codConsulta = (Consulta*) malloc(sizeof(Consulta));
	fp = fopen("consulta.dat", rb);
	while( fread(usr,sizeof(consulta), 1, fp)){
	}
	fclose(fp);
	free(usr);	
