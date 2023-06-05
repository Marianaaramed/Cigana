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


void relatTempoPorconsulta(char* codOraculo){
	system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =  Tempo da Consulta: %11s  = = = = =             ///\n", Tempo);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
   	printf("///           ===============================================             ///\n");
	printf("///           ||  Cod Oraculo  ||     Nome do Consultor    ||             ///\n");
    	printf("///           ===============================================             ///\n");
	listaTTempoPorconsultar(Tempo);
   	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
   	printf("///Tecle <ENTER> para continuar...///");
   	getchar();
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

