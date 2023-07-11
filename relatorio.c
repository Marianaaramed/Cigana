#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relatorio.h"
#include "usuario.h"
#include "assessor.h"
#include "consulta.h"
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
			case '3':   Listrar_consulta_por_horario();
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
	cpf = telaListrar_consulta_por_assessor();
	relatListrar_consulta_por_assessor(cpf);
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
    scanf("%[0-9]", cpf);
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
	printf("///           = = = = = = = = = Usuarios: %12s = = = = = = =              \n", cpf);
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
   	printf("///         =====================================================         ///\n");
	printf("///         ||   CPF do Usuario    ||     Nome do Usuario      ||         ///\n");
    printf("///         =====================================================         ///\n");
   	printf("///         ||    012.351.497-00   || Artrur Barbosa Castro    ||         ///\n");
    printf("///         ||    120.153.974-01   || Bryan de Araújo Cardoso  ||         ///\n");
   	printf("///         ||    274.597.823-02   || Clecio Barbosa Alves     ||         ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
   	printf("///Tecle <ENTER> para continuar...///");
   	getchar();
}



void relatListrar_consulta_por_assessor(char* cpf){
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


void Listar_usuario_por_assessor(char* cpf) {
    Assessor *asr;
    asr = (Assessor*) malloc(sizeof(Assessor));
    asr = buscar_assessor(cpf);
    printf(" ||         Assessor: %s \n", asr->nome);
    printf(" ||                                                                 ||\n");
    printf(" ||  <<    Registro     |         Nome          |      CPF      >>  ||\n");
    printf(" ||   -----------------------------------------------------------   ||\n");
    Listar_usuario(cpf);
    free(asr);
}


void Listrar_consulta_por_assessor(char* cpf) {
    Assessor *asr;
    asr = (Assessor*) malloc(sizeof(Assessor));
    asr = buscar_assessor(cpf);
    printf(" ||         Assessor: %s \n", asr->nome);
    printf(" ||                                                                 ||\n");
    printf(" ||  <<  cod consulta   |         Nome          |      CPF      >>  ||\n");
    printf(" ||   -----------------------------------------------------------   ||\n");
    Listrar_consulta(cpf);
    free(asr);
}

void Listrar_consulta_por_horario(char* horario) {
    FILE* fp;
    Consulta* csa;
    char codConsulta[8];
    int tam;

    csa = (Consulta*) malloc(sizeof(Consulta));
    fp = fopen("consulta.dat", "rb");
    while (fread(csa, sizeof(Consulta), 1, fp)) {
        if (strcmp(csa->horario, horario) == 0) {
            tam = strlen(csa->codConsulta);
            strncpy(codConsulta, csa->codConsulta, tam);
            for (int i = tam; i < 25; i++) {
                codConsulta[i] = ' ';
            }
            codConsulta[25] = '\0';
            printf("///           ||     %-3s     || %-26s ||             ///\n", csa->codConsulta, codConsulta);
        }
    }
    fclose(fp);
    free(csa);
}


void  relat_or_Listrar_usuario(Usuario **lista) {
    FILE *fp;
    Usuario *usr;

    excluir_lista_usr(&(*lista));
    *lista = NULL;
    fp = fopen("usuario.dat", "rb");
    if (fp == NULL) {
        tela_erro();
    }
    else {
        usr = (Usuario*) malloc(sizeof(Usuario));
        while (fread(usr, sizeof(Usuario), 1, fp)) {
            if ((*lista == NULL) || (strcmp(usr->nome, (*lista)->nome) < 0)) {
                usr->prox = *lista;
                *lista = usr;
            }
            else {
                Usuario *ant = *lista;
                Usuario *atu =  (*lista)->prox;
                while ((atu != NULL) && (strcmp(atu->nome, usr->nome) < 0)) {
                    ant = atu;
                    atu = atu->prox;
                }
                ant->prox = usr;
                usr->prox = atu;
            }
            usr = (Usuario*) malloc(sizeof(Usuario));
        }
        free(usr);
        fclose(fp);
    }
} // by: @FlaviusGorgonio
