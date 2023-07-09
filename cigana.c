#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/////
// Assinatura das funções
char telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);
char telaMenuUsuario(void);
void telaCadastrarUsuario(void);
void telaPesquisarUsuario(void);
void telaAlterarUsuario(void);
void telaExcluirUsuario(void);

char telaMenuAssessor(void);
void telaCadastrarAssessor(void);
void telaPesquisarAssessor(void);
void telaAlterarAssessor(void);
void telaExcluirAssessor(void);

char telaMenuConsulta(void);
void telaCadastrarConsulta(void);
void telaAlterarConsulta(void);
void telaPesquisarConsulta(void);
void telaExcluirConsulta(void);


/////
//Programa principal
int main(void) {
    char opcao;
    do {
        opcao = telaPrincipal();
        switch (opcao) {
             case '1':  moduloUsuario();
                        break;
            case '2':   moduloAssessor();
                        break;
            case '3':   moduloConsulta();
                        break;
            case '4':   // Módulo Registro
                        break;
            case '5':   // Módulo Relatórios
                        break;
            case '6':   telaSobre();
                        telaEquipe();
                        break;
        }
    } while (opcao != '0');
    return 0;
}
    
   
/////
// Funções
char telaPrincipal(void) {
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
    printf("///                   Desenvolvido por mariana - 2023.1                               ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                      = = = = = =  Cigana Virtual = = = = = =                      ///\n");
    printf("///                                                                                   ///\n");
    printf("///                        1. Módulo Usuário                                          ///\n");
    printf("///                        2. Módulo Assessor                                         ///\n");
    printf("///                        3. Módulo Consulta                                         ///\n");
    printf("///                        4. Módulo Registro                                         ///\n");
    printf("///                        5. Módulo Relatórios                                       ///\n");
    printf("///                        6. Módulo Sobre                                            ///\n");
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
    printf("///                    Desenvolvido por mariana - 2023.1                              ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                      = = = = = = Cigana Virtual  = = = = = =                      ///\n");
    printf("///                                                                                   ///\n");
    printf("///        Programa  utilizado na disciplina DCT1106 - Programação, para fins         ///\n");
    printf("///        avaliativo no Semestre 2023.1. O programa contém os principais módulos     ///\n");
    printf("///        e funcionalidades que serão exigidos ao longo da disciplina.               ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


void telaEquipe(void) {
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                   Universidade Federal do Rio Grande do Norte                     ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                             ///\n");
    printf("///                   Departamento de Computação e Tecnologia                         ///\n");
    printf("///                   Disciplina DCT1106 - Programação                                ///\n");
    printf("///                   Projeto Cigana Virtual                                          ///\n");
    printf("///                   Desenvolvido por mariana - 2023.1                               ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                                   ///\n");
    printf("///                 = = = = = = = = Cigana Virtual = = = = = = = =                    ///\n");
    printf("///                                                                                   ///\n");
    printf("///             Este projeto exemplo foi desenvolvido por:                            ///\n");
    printf("///                                                                                   ///\n");
    printf("///             Mariana Araújo de Medeiros                                            ///\n");
    printf("///             E-mail: mariana.medeiros.017@ufrn.edu.br                              ///\n");
    printf("///             Repositório: https://github.com/Marianaaramed/Cigana.git              ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}


//////
/// Funções do Módulo Usuario  
void moduloUsuario(void) {
    char opcao;
    do {
        opcao = telaMenuUsuario();
        switch(opcao) {
            case '1': 	telaCadastrarUsuario ();
                        break;
            case '2': 	telaPesquisarUsuario();
                        break;
            case '3': 	telaAlterarUsuario();
                        break;
            case '4': 	telaExcluirUsuario();
                        break;
        } 		
    } while (opcao != '0');
}


char telaMenuUsuario(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                 = = = = = = = = = Menu Usuário = = = = = = = = =              ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
    printf("///                     1. Cadastrar Usuário                                      ///\n");
    printf("///                     2. Pesquisar dados do Usuário                             ///\n");
    printf("///                     3. Atualizar o cadastro do Usuário                        ///\n");
    printf("///                     4. Excluir Usuário do sistema                             ///\n");
    printf("///                     0. Voltar ao menu anterior                                ///\n");
    printf("///                                                                               ///\n");
    printf("///                     Escolha a opção desejada:    ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}


void telaCadastrarUsuario(void) {
    char registro[12];
    char cpf[12];
    char nome[51];
    char email[51];
    char nasc[11];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = Cadastrar Usuário = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Registro (apenas números): ");
    scanf("%[0-9]", registro);
    getchar();
    printf("///                  CPF (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                  Nome completo: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("///                  E-mail: ");
    scanf("%[A-Za-z0-9@._]", email);
    getchar();
    printf("///                  Data de Nascimento (dd/mm/aaaa): ");  
    scanf("%[0-9]", nasc);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}


void telaPesquisarUsuario(void) {
    char registro[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = Pesquisar Usuário = = = = = = = =               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Registro (apenas números): ");
    scanf("%[0-9]", registro);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}


void telaAlterarUsuario(void) {
    char registro[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = Alterar Usuário = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Registro (apenas números): ");
    scanf("%[0-9]", registro);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}


void telaExcluirUsuario(void) {
    char registro[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = Excluir Usuário = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Registro (apenas números): ");
    scanf("%[0-9]", registro);
    getchar(); 
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}


//////
/// Funções do Módulo Assessor  
void moduloAssessor(void) {
    char opcao;
    do {
        opcao = telaMenuAssessor();
        switch(opcao) {
            case '1': 	telaCadastrarAssessor();
                        break;
            case '2': 	telaPesquisarAssessor();
                        break;
            case '3': 	telaAlterarAssessor();
                        break;
            case '4': 	telaExcluirAssessor();
                        break;
        } 		
    } while (opcao != '0');
}


char telaMenuAssessor(void) {
    char op;
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                   = = = = = = = = Menu Assessor = = = = = = = = =             ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
    printf("///                      1. Cadastrar Assessor                                    ///\n");
    printf("///                      2. Pesquisar Assessor                                    ///\n");
    printf("///                      3. Atualizar cadastro do Assessor                        ///\n");
    printf("///                      4. Excluir Assessor                                      ///\n");
    printf("///                      0. Voltar ao menu anterior                               ///\n");
    printf("///                                                                               ///\n");
    printf("///                      Escolha a opção desejada:   ");
    scanf("%c", &op);
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}



void telaCadastrarAssessor(void) {
    char cpf[12]; 
    char nome[51];
    char ramo [51];
    char celular[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = Cadastrar Assessor = = = = = = =             ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  CPF (apenas números):          ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                  Nome completo:                 ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();
    printf("///                  Ramo do Assessor:                 ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ,]", ramo);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}



void telaPesquisarAssessor(void) {
    char cpf[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///              = = = = = = = Pesquisar Assessor = = = = = = =                   ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe o CPF (apenas números):    ");                         
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}



void telaAlterarAssessor(void) {
    char cpf[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = Atualizar Assessor = = = = = = =                ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                    Informe o CPF (apenas números):     ");                      
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}



void telaExcluirAssessor(void) {
    char cpf[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                = = = = = = = Excluir Assessor = = = = = = = =                 ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                 Informe o CPF (apenas números):      ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}


//////
/// Funções do Módulo Consulta 
void moduloConsulta(void) {
    char opcao;
    do {
        opcao = telaMenuConsulta();
        switch(opcao) {
            case '1': 	telaCadastrarConsulta();
                        break;
            case '2': 	telaPesquisarConsulta();
                        break;
            case '3': 	telaAlterarConsulta();
                        break;
            case '4': 	telaExcluirConsulta();
                        break;
        } 		
    } while (opcao != '0');
}


char telaMenuConsulta(void) {
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
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}



void telaCadastrarConsulta(void) {
    char registro[12];
    char codConsulta[8];
    char horario[8];
    char data[8];
    char cpf[12];
    system("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                  = = = = = = = Cadastrar Consulta = = = = = =                 ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Registro:      ");
    scanf("%[0-9]", registro);
    printf("///                  Código da Consulta:      ");
    scanf("%[A-Z0-9]", codConsulta);
    getchar();
    printf("///                  Duração:       ");
    scanf("%[0-9]", horario);
    getchar();
    printf("///                  Data (apenas números): ");
    scanf("%[0-9]", data);
    getchar();
    printf("///                  CPF do Assesssor (apenas números): ");
    scanf("%[0-9]", cpf);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
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
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
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
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
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
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
}
