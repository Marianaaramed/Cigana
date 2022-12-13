#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relatorio.h"
#include "biblioteca.h"
#include "oraculo.h"

void moduloRelatorio(void) {
	char opcao;
	do {
		opcao = menuRelatorio();
		switch(opcao) {
			case '1': 	usuarioPororaculo();
						break;
			case '2': 	oraculoPorconsultor();
						break;
			case '3': 	oraculoPortempo();
						break;
			} 		
	} while (opcao != '0');
}


UsuarioPororaculo* telaUsuariosPorconsultor(void){
	char* codOraculo;
	codOraculo = (char*) malloc(4*sizeof(char));
	limpaTela();
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
	printf("///           = = = = = =  Usuario Por oraculo  = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	 do{
        printf("\t === Insira o CPF do Usuario:    ");
        scanf("%s", codOraculo->cpf);
        getchar();
	 }while(!validarCPF(codOraculo->cpf));
	printf("\t === Insira o codigo do servico:  ");
	scanf("%10[^\n]", codOraculo->codigo_servico);
	getchar();
	printf("\t === Insira a data de agendamento:   ");
	scanf("%s", codOraculo->data);
	getchar();
	printf("\t === Insira o horario:   ");
	scanf("%s", codOraculo->hora);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
    	return codOraculo;
}



void gravaUsuario(UsuarioPororaculo* codOraculo){
    FILE* fp;
    fp = fopen("usuario.dat", "ab");
    if(fp==NULL){
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possivel continuar esse programa...\n");
        exit(1);
    }
    fwrite(age,sizeof(UsuarioPororaculo),1,fp);
    fclose(fp);
}
UsuarioPororaculo* buscarUsuario(){
    FILE* fp;
    UsuarioPororaculo* codOraculo;
    char codOraculo[15];
    printf("\n ===== Buscar Usuario Por oraculo ======");
    printf("\n Informe o codigo de servico: ");
    scanf("%s", codOraculo);
    getchar();
    
    codOraculo = (UsuarioPororaculo*) malloc(sizeof(UsuarioPororaculo));
    fp = fopen("usuario.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu  ko um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
    }
    while(!feof(fp)){
        fread(codOraculo, sizeof(UsuarioPororaculo), 1, fp);
        if ((strcmp(codOraculo -> codigo_servico, codOraculo) == 0) &&(codOraculo->status != 'x')){
            fclose(fp);
            return codOraculo;
        }
    }
fclose(fp);
return NULL;
}



UsuarioPororaculo* buscarUsuario(){
    FILE* fp;
    UsuarioPororaculo* codOraculo;
    char codOraculo[15];
    printf("\n ===== Buscar Usuario por oraculo ======");
    printf("\n Informe o codigo de servico: ");
    scanf("%s", codOraculo);
    getchar();
    
    codOraculo = (UsuarioPororaculo*) malloc(sizeof(UsuarioPororaculo));
    fp = fopen("usuario.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Ocorreu  ko um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
    }
    while(!feof(fp)){
        fread(codOraculo, sizeof(UsuarioPororaculo), 1, fp);
        if ((strcmp(codOraculo -> codigo_servico, codOraculo) == 0) &&(codOraculo->status != 'x')){
            fclose(fp);
            return codOraculo;
        }
    }
fclose(fp);
return NULL;
}



void exibeUsuarioPororaculo(UsuarioPororaculo* codOraculo) {
    printf(" | Codigo da Consultar: %s\n", codOraculo->codigo_servico);
    printf(" | CPF: %s\n", codOraculo->cpf);
    printf(" | Tipo de Consultar: %s\n", codOraculo->tipo);
    printf(" | Tempo do Agendamento: %s\n", codOraculo->hora);
    printf(" | Status: %c\n", codOraculo->status);
    printf("\n");
}



int listarUsuarioPororaculo(void){
    FILE* fp;
    UsuarioPororaculo* codOraculo;
    fp = fopen("usuario.dat", "rb");
    if (fp == NULL) {
        printf("Ops! Erro na abertura do arquivo!\n");
        return 0;
    }
    codOraculo = (UsuarioPororaculo*)malloc(sizeof(UsuarioPororaculo));
    while(fread(codOraculo, sizeof(UsuarioPororaculo), 1, fp)) {
	    if (cpf->status == 'x') {
        system(" cls || clear");
        printf(" | ===================== Lista Usuarios ======================== | \n");
        printf(" |                                                           | \n");
        exibeusuario(cpf);    
        printf(" | Pressione qualquer tecla para sair...");
        getchar();
		    else {
            printf(" | Nenhum Usuario excluido...\n");
            printf(" | Pressione qualquer tecla para sair...");
            getchar();
             }
    }
    fclose(fp);
    free(codOraculo);
    return 0;

}    



char menuRelatorio(void) {
	char op;
    	limpaTela();
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
	printf("///           3. Listar oraculos por consultor                            ///\n");
	printf("///           4. Exibir tempo por consultar                               ///\n");
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



char* telaUsuarioPororaculo(void) {
    char* codOraculo;
    codOraculo = (char*) malloc(4*sizeof(char));
    limpaTela();
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
	printf("///           = = = = = =  Usuario Por oraculo  = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o código do oraculo (Ex. T01, T02): ");
	scanf("%[A-Za-z0-9]", codOraculo);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
    	return codOraculo;
}



char* telaOraculoPorconsultor(void) {
	char *cpfConsultor;
    	cpf = (char*) malloc(4*sizeof(char));
    	limpaTela();
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
	printf("///           = = = = = =  Oraculo Por consultor  = = = = = =             ///\n");
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
    	return cpf;
}



char* telaOraculoPortempo(void) {
	char* tempo;

        tempo = (char*) malloc(7*sizeof(char));

        limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =    Oraculo Por tempo    = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o tempo (Ex. 1.00): ");
	scanf("%[0-9.]", tempo);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
        return tempo;
}



void relatTempoPorconsultar(char* codClt){
	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =  Código da Consultar: %-5s  = = = = =             ///\n", codClt);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
   	printf("///           =============================================               ///\n");
	printf("///           ||    Tempo    ||     Nome do Consultor    ||               ///\n");
    	printf("///           =============================================               ///\n");
   	printf("///           ||             || Artrur Barbosa Castro    ||               ///\n");
    	printf("///           || 	     || Bryan de Araújo Cardoso  ||               ///\n");
   	printf("///           ||  	     || Clecio Barbosa Alves     ||               ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
   	printf("///Tecle <ENTER> para continuar...///");
   	getchar();
}



void relatUsuariosPorconsultor(char* cpfCsr){
	 // posteriormente, esta função irá buscar o nome do Consultor no arquivo 
    	// por enquanto, o nome será preenchido com um valor predefinido
    nomeCsr = (char*) malloc(10*sizeof(char));
    strcpy(nomeCsr,"Alexandre");
	limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =   Consultor: %21s \n", nomeCsr);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
   	printf("///           =============================================               ///\n");
	printf("///           ||    Tempo    ||     Nome do Usuario      ||               ///\n");
    	printf("///           =============================================               ///\n");
   	printf("///           ||             || Artrur Barbosa Castro    ||               ///\n");
    	printf("///           || 	     || Bryan de Araújo Cardoso  ||               ///\n");
   	printf("///           ||  	     || Clecio Barbosa Alves     ||               ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
   	printf("///Tecle <ENTER> para continuar...///");
   	getchar();
}



void relatrelatOraculosPorconsultor(char* cpfCsr){
	 // posteriormente, esta função irá buscar o nome do Consultor no arquivo 
    	// por enquanto, o nome será preenchido com um valor predefinido
    nomeCsr = (char*) malloc(10*sizeof(char));
    strcpy(nomeCsr,"Alexandre");
	limpaTela();
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
   	printf("///           ||  135792468    || Artrur Barbosa Castro    ||             ///\n");
    	printf("///           ||  246813579    || Bryan de Araújo Cardoso  ||             ///\n");
   	printf("///           ||  357912468    || Clecio Barbosa Alves     ||             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
   	printf("///Tecle <ENTER> para continuar...///");
   	getchar();
}



void listaOraculosPorconsultor(char* cpfCsr) {
    FILE* fp;
    Oraculo* ocl;
    char nomeOrunc[26];
    int tam;

    ocl = (Oraculo*) malloc(sizeof(Oraculo));
    fp = fopen("Oraculo.dat", "rb");
    while (fread(ocl, sizeof(Oraculo), 1, fp)) {
        if (strcmp(ocl->tipo, tipo) == 0) {
            tam = strlen(ocl->nomeOraculo);
            strncpy(nomeOrunc, ocl->nomeOraculo, tam);
            for (int i = tam; i < 25; i++) {
                nomeOrunc[i] = ' ';
            }
            nomeOrunc[25] = '\0';
            printf("///           ||     %-5s     || %-29s ||             ///\n", ocl->codOraculo, nomeOrunc);
        }
    }
    fclose(fp);
    free(ocl);
}
