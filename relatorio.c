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
			case '1': 	Listar_usuario_por_assessor();
				        	break;
			case '2': 	Listrar_consulta_por_assessor();
						break;
			case '3':       Listrar_consulta_por_horario();
						break;
		} 
	} while (opcao != '0');
}


void Listar_usuario_por_assessor() {
	char* cpf;
	cpf = telaListar_usuario_por_assessor();
	relatListar_usuario_por_assessor(cpf);
	free(cpf);
}
	

void Listrar_consulta_por_assessor() {
	char* cpf;
	cpf = telaListrar_consulta_por_assssor();
     	relatListrar_consulta_por_assssor(cpf);
    	free(cpf);
}


void Listrar_consulta_por_horario() {
	char* horario;
    	horario = telaListrar_consulta_por_horario();
    	relatListrar_consulta_por_horario(horario);
   	 free(horario);
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
	printf("///             1. Listar usuarios por Assessor                           ///\n");
	printf("///             2. Listar consulta por Assessor                           ///\n");
	printf("///             3. Exibir horário da consulta                             ///\n");
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



char* telaListar_usuario_por_assessor(void) {
    char *cpf;
    cpf = (char*) malloc(12*sizeof(char));
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
    printf("///           = = = = = Usuarios por Assessor = = = = = = = =             ///\n");
    printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                       ///\n");
    printf("///            Informe o CPF do Assessor: ");
    scanf("%[0-9]", cpf;);
    getchar();
    printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return cpf;
}



char* telaListrar_consulta_por_assessor(void) {
	char *cpf;
    	cpf = (char*) malloc(12*sizeof(char));
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
	printf("///           = = = = = = Consultas por Assessor  = = = = = =             ///\n");
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



char* telaListrar_consulta_por_horario(void) {
	char *horario;
    	horario = (char*) malloc(12*sizeof(char));
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
	printf("///           = = = = = = Consultas por horario  = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o horário desejado (Ex. 3M1): ");
	scanf("%[A-Za-z0-9]", horario);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	delay(1);
	return horario;
}



void relatListar_usuario_por_assessor(char* cpf){
	system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = Usuarios: %12 = = = = = = = =             ///\n", cpf);
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



void relatListrar_consulta_por_assssor(char* cpf){
	system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = Consulta: %12s = = = = = = =              \n", cpf);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
   	printf("///           ===============================================             ///\n");
	printf("///           ||  Cod consulta  ||     Nome do Assessor     ||            ///\n");
    	printf("///           ===============================================             ///\n");
   	printf("///           ||      1357      || Artrur Barbosa Castro    ||            ///\n");
    	printf("///           ||      2468      || Bryan de Araújo Cardoso  ||            ///\n");
   	printf("///           ||      3579      || Clecio Barbosa Alves     ||            ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
   	printf("///Tecle <ENTER> para continuar...///");
   	getchar();
}




void relatListrar_consulta_por_horario(char* horario){
	system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = Horário: %11s  = = = = = = =              ///\n", horario);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
        printf("///           ===============================================             ///\n");
	printf("///           ||               Cod Consulta                ||             ///\n");
        printf("///           ===============================================             ///\n");
	printf("///           ||                   1357                    ||             ///\n");
    	printf("///           ||                   2468                    ||             ///\n");
   	printf("///           ||                   3579                    ||             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
   	printf("///Tecle <ENTER> para continuar...///");
   	getchar();
}




void Listar_usuario_por_assessor(char* cpfAsr){
    FILE *fp_usr, *fp_asr;
    Assessor *asr;
    Usuario *usr;
    asr = (Assessor*) malloc(sizeof(Assessor));
    usr = (Usuario*) malloc(sizeof(Usuario));
    asr = _Assessor* malloc
}



void listaTempoPorConsulta(char* tempo) {
    FILE* fp;
    Consulta* cs;
    char codCs[10];
    int tam;

    trm = (Consulta*) malloc(sizeof(Consulta));
    fp = fopen("consulta.dat", "rb");
    while (fread(csa, sizeof(Consulta), 1, fp)) {
        if (strcmp(csa->tempo, tempo) == 0) {
            tam = strlen(csa->codConsulta);
            strncpy(codCs, csa->codConsulta, tam);
            for (int i = tam; i < 25; i++) {
                codCsa[i] = ' ';
            }
            codConsulta[5] = '\0';
            printf("///           ||     %-3s     || %-26s ||             ///\n", csa->codConsulta, codConsulta);
        }
    }
    fclose(fp);
    free(cs);
}

