#include <stdio.h>
#include <stdlib.h>


/////
// Assinatura das funções
void telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);
void telaMenuUsuario(void);
void telaCadastrarUsuario(void);
void telaPesquisarUsuario(void);
void telaAlterarUsuario(void);
void telaExcluirUsuario(void);

void telaMenuAssessor(void);
void telaCadastrarAssessor(void);
void telaPesquisarAssessor(void);
void telaAlterarAssessor(void);
void telaExcluirAssessor(void);

void telaMenuConsulta(void);
void telaCadastrarConsulta(void);
void telaAlterarConsulta(void);
void telaPesquisarConsulta(void);
void telaExcluirConsulta(void);


/////
//Programa principal
int main(void) {
    telaPrincipal();
    telaSobre();
    telaEquipe();
    telaMenuUsuario();
    telaCadastrarUsuario();
    telaPesquisarUsuario();
    telaAlterarUsuario();
    telaExcluirUsuario();

    telaMenuAssessor();
    telaCadastrarAssessor();
    telaPesquisarAssessor();
    telaAlterarAssessor();
    telaExcluirAssessor();

    telaMenuConsulta();
    telaCadastrarConsulta();
    telaAlterarConsulta();
    telaPesquisarConsulta();
    telaExcluirConsulta();

    return 0;
}


/////
// Funções
void telaPrincipal(void) {
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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


void telaMenuUsuario(void) {
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaMenuConsulta(void) {
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
    printf("\t\t\t>>> Tecle<ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
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
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}
