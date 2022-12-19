#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "usuario.h"
#include "consultor.h"
#include "oraculo.h"
#include "biblioteca.h"
#include "relatolio.h"


/////
// Assinatura das funções

void menuPrincipal(void);
void moduloInformacoes(void);
void telaSobre(void);
void moduloRelatorio(void);
void delay(int);



/////
//Programa principal

int main(void) {
    char opcao;

    do{
        opcao = menuPrincipal();
        switch(opcao) {
            case '1': moduloUsuario();
                      break;
            case '2': moduloConsultor(); 
                      break;
            case '3': moduloOraculo();             
                      break;
            case '4': moduloRelatorio();
					  break;
			case '5': moduloInformacoes();
					  break;
        } 	
    } while (opcao != '0');
    return 0;
}



/////
// Funções

char menuPrincipal(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   Universidade Federal do Rio Grande do Norte                     ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                             ///\n");
    printf("///                   Departamento de Computação e Tecnologia                         ///\n");
    printf("///                   Disciplina DCT1106 - Programação                                ///\n");
    printf("///                   Projeto Cigana Virtual                                          ///\n");
    printf("///                   Desenvolvido por mariana - 2022.2                               ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                      = = = = = =  Cigana Virtual = = = = = =                      ///\n");
    printf("///                                                                                   ///\n");
    printf("///                        1. Módulo Usuário                                          ///\n");
    printf("///                        2. Módulo Consultor                                        ///\n");
    printf("///                        3. Módulo Oraculo                                          ///\n");
    printf("///                        4. Módulo Relatórios                                       ///\n");
    printf("///                        5. Módulo Sobre                                            ///\n");
    printf("///                        0. Sair                                                    ///\n");
    printf("///                                                                                   ///\n");
    printf("///                        Escolha a opção desejada:   ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                                   ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
    return op;
}



void telaSobre(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                    Universidade Federal do Rio Grande do Norte                    ///\n");
    printf("///                    Centro de Ensino Superior do Seridó                            ///\n");
    printf("///                    Departamento de Computação e Tecnologia                        ///\n");
    printf("///                    Disciplina DCT1106 - Programação                               ///\n");
    printf("///                    Projeto Cigana Virtual                                         ///\n");
    printf("///                    Desenvolvido por mariana - 2022.2                              ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                      = = = = = = Cigana Virtual  = = = = = =                      ///\n");
    printf("///                                                                                   ///\n");
    printf("///       Programa  utilizado na disciplina DCT1106 - Programação, para fins          ///\n");
    printf("///       avaliativo no Semestre 2021.2. O programa contém os principais módulos      ///\n");
    printf("///       e funcionalidades que serão exigidos ao longo da disciplina.                ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void moduloInformacoes(void) {
	// modulo em desenvolvimento
	telaSobre();
}
