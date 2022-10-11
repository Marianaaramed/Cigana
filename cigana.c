#include <stdio.h>
#include <stdlib.h>
#include <unistd>
#include "Usuario.h"
#include "Consultor.h"
#include "Oraculo.h"

/////
// Assinatura das funções

void telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);



/////
//Programa principal

int main(void) {
    char opcao;

    do{
        opcao = telaPrincipal();
        switch(opcao) {
            case '1': moduloUsuario();
                      break;
            case '2': moduloConsultor(); 
                      break;
            case '3': moduloOraculo();             
                      break;
            case '4': // Módulo Tempo
                      break;  
            case '5': // Módulo Relatórios
                      break;           
            case '6': telaSobre();
                      telaEquipe();
                      break;
        } 	
    } while (opcao != '0');
    return 0;
}



/////
// Funções

void telaPrincipal(void) {
    char op;
    sistema("clear||cls");
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
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}
