#include <stdio.h>
#include <stdlib.h>
#include "consulta.h"
#include "biblioteca.h"

void moduloConsulta(void);
     char opcao;
     do {
        opcao = menuConsulta();
        switch(opcao) {
            case '1':   cadastrarConsulta();
                        break;
	          case '2':   pesquisarConsulta();
	    		              break;
	          case '3':   alterarConsulta();
	    		              break;
	          case '4':   excluirConsulta();
	    		              break;
	            } 		
    } while (opcao != '0');
}


void cadastrarConsulta(void) {
  // função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaCadastrarConsulta();
}


void pesquisarConsulta(void) {
  // função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaPesquisarConsulta();
}
    

void alterarConsulta(void) {
  // função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaAlterarConsulta();
}    


void excluirConsulta(void) {
  // função ainda em desenvolvimento
	// exibe a tela apenas para testes
	telaExcluirConsulta();
}
    


char menuConsulta(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = =                    ///\n");
    printf("///                  = = = = = = = Menu Consulta = = = = = = =                    ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = =                    ///\n");
    printf("///                                                                               ///\n");
    printf("///                     1. Cadastrar Consulta                                     ///\n");
    printf("///                     2. Pesquisar Consulta                                     ///\n");
    printf("///                     3. Atualizar Consulta                                     ///\n");
    printf("///                     4. Excluir Consulta                                       ///\n");
    printf("///                     0. Voltar ao menu anterior                                ///\n");
    primtf("///                                                                               ///\n");
    printf("///                     Escolha a opção desejada:     ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
  return op;
    }
    
    
    
void telaCadastrarConsulta(void) {
    char registro[12]
    char codConsulta[8];
    char tipoConsulta[31];
    char duração[15];
    char cpf[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = Cadastrar Consulta = = = = = =                 ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Registro do usuário(apenas números): ");
    scanf("%[0-9]", registro);
    getchar();
    printf("///                  Código da Consulta:      ");
    scanf("%[A-Z0-9]", codConsulta);
    getchar();
    printf("///                  Tipo da Consulta:        ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ0-9]", tipoConsulta);
    getchar();
    printf("///                  Duração:       ");
    scanf("%[0-9]", horario);
    getchar();
    printf("///                  CPF do Assesssor (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();  
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
}



void telaPesquisarConsulta(void) {
    char codConsulta[8];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///               = = = = = = = Pesquisar Consulta = = = = = =                    ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Código da Consulta:      ");
    scanf("%[A-Z0-9]", codConsulta); 
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
}



void telaAlterarConsulta(void) {
    char codConsulta[8];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = Alterar Consulta = = = = = = =                 ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                    Código da Consulta:      ");
    scanf("%[A-Z0-9]", codConsulta); 
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
   delay(1);
}



void telaExcluirConsulta(void) {
    char codConsulta[8];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///               = = = = = = = Excluir Consulta = = = = = = =                    ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Código da Consulta:      ");
    scanf("%[A-Z0-9]", codConsulta); 
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    delay(1);
}
