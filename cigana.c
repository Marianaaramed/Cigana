#include <stdio.h>
#include <stdlib.h>
#include <unistd>

/////
// Assinatura das funções

void telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);

void moduloUsuario(void);
void telaMenuUsuario(void);
void telaCadastrarUsuario(void);
void telaPesquisarUsuario(void);
void telaAlterarUsuario(void);
void telaExcluirUsuario(void);

void moduloConsultor(void);
void telaMenuConsultor(void);
void telaCadastrarConsultor(void);
void telaPesquisarConsultor(void);
void telaAlterarConsultor(void);
void telaExcluirConsultor(void);

void moduloOraculo(void);
void telaMenuOraculo(void);
void telaCadastrarOraculo(void);
void telaAlterarOraculo(void);
void telaPesquisarOraculo(void);
void telaExcluirOraculo(void);


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



void telaSobre(void) {
    sistema("clear || cls");
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
    printf("///          Programa  utilizado na disciplina DCT1106 - Programação, para fins       ///\n");
    printf("///          avaliativo no Semestre 2021.2. O programa contém os principais módulos   ///\n");
    printf("///          e funcionalidades que serão exigidos ao longo da disciplina.             ///\n");
    printf("///                                                                                   ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void telaEquipe(void) {
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
    printf("///                      = = = = = = Cigana Virtual = = = = = =                       ///\n");
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
////// Funções do Módulo Usuario

void moduloUsuario(void) {
    char opcao;
    do {
        opcao = telaMenuUsuario();
        switch(opcao) {
            case '1': 	telaCadastrarUsuario();
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



void telaMenuUsuario(void) {
    char op;
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///               = = = = = = = = = = Menu Usuário = = = = = = = = = =            ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = = = =            ///\n");
    printf("///                                                                               ///\n");
    printf("///                     1. Cadastrar Usuário                                      ///\n");
    printf("///                     2. Pesquisar o CPF do Usuário                             ///\n");
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
    return op;
}
    


void telaCadastrarUsuario(void) {
    char CPF[12];
    char nome[51];
    char email[51];
    char nasc[11];
    char celular[12];
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = = Cadastrar Usuário = = = = = = = =            ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                  CPF (apenas números): ");
    scanf("%[0-9]", CPF);
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
    printf("///                  Celular (apenas números):  ");
    scanf("%[0-9]", celular);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}
   


void telaPesquisarUsuario(void) {
    char CPF[12];
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///               = = = = = = = = Pesquisar Usuário = = = = = = = =               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                     Informe o CPF (apenas números):  ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}
    


void telaAlterarUsuario(void) {
    char CPF[12];
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Alterar Usuário = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                               ///\n");
    printf("///                     Informe o CPF (apenas números):    ");
    scanf("%[0-9]", CPF);
    getchar();
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}
    


void telaExcluirUsuario(void) {
    char CPF[12];
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///               = = = = = = = = Excluir Usuário = = = = = = = = =               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                 Informe o CPF (apenas números):     ");
    scanf("%[0-9]", CPF);
    getchar();    
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}



//////
////// Funções do Módulo Consultor

void moduloConsultor(void) {
    char opcao;
    do {
        opcao = telaMenuConsultor();
        switch(opcao) {
            case '1': 	telaCadastrarConsultor();
                        break;
            case '2': 	telaPesquisarConsultor();
                        break;
            case '3': 	telaAlterarConsultor();
                        break;
            case '4': 	telaExcluirConsultor();
                        break;
        } 		
    } while (opcao != '0');
}  



void telaMenuConsultor(void) {
    char op;
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                  = = = = = = = = = Menu Consultor = = = = = = = = =           ///\n");
    printf("///                   = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                               ///\n");
    printf("///                    1. Cadastrar um novo Consultor                             ///\n");
    printf("///                    2. Pesquisar por Consultor                                 ///\n");
    printf("///                    3. Atualizar o cadastro de um Consultor                    ///\n");
    printf("///                    4. Excluir Consultor do sistema                            ///\n");
    printf("///                    0. Voltar ao menu anterior                                 ///\n");
    printf("///                                                                               ///\n");
    printf("///                    Escolha a opção desejada:                                  ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}



void telaCadastrarConsultor(void) {
    char CPF[12];
    char nome[51];
    char especialdade[20];
    char email[51];
    char nasc[11];
    char celular[12];
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                = = = = = = = = Cadastrar Consultor = = = = = = = =            ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                  CPF (apenas números):                                        ///\n");
    printf("///                  Nome completo:                                               ///\n");
    printf("///                  Especialidade:                                               ///\n");
    printf("///                  E-mail:                                                      ///\n");
    printf("///                  Data de Nascimento (dd/mm/aaaa):                             ///\n");
    printf("///                  Celular (apenas números):                                    ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}



void telaPesquisarConsultor(void) {
    char CPF[12];
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///            = = = = = = = = Pesquisar Consultor = = = = = = = =                ///\n");
    printf("///              = = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///                                                                               ///\n");
    printf("///                  Informe o CPF (apenas números):                              ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}
    


void telaAlterarConsultor(void) {
    char CPF[12];
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///               = = = = = = = = Alterar Consultor = = = = = = = = =             ///\n");
    printf("///                 = = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
    printf("///                                                                               ///\n");
    printf("///                   Informe o CPF (apenas números):                             ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}



void telaExcluirConsultor(void) {
    char CPF[12];
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///              = = = = = = = = Excluir Consultor = = = = = = = = =              ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                               ///\n");
    printf("///                Informe o CPF (apenas números):                                ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}
    


//////
////// Funções do Módulo Consultor

void moduloOraculo(void) {
    char opcao;
    do {
        opcao = telaMenuOraculo();
        switch(opcao) {
            case '1': 	telaCadastrarOraculo();
                        break;
            case '2': 	telaPesquisarOraculo();
                        break;
            case '3': 	telaAlterarOraculo();
                        break;
            case '4': 	telaExcluirOraculo();
                        break;
        } 		
    } while (opcao != '0');
}  



void telaMenuOraculo(void) {
    char op;
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = =                    ///\n");
    printf("///             = = = = = = = = = Menu Oráculo = = = = = = = = =                  ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                               ///\n");
    printf("///                1. Cadastrar Oráculo                                           ///\n");
    printf("///                2. Pesquisar Oráculo                                           ///\n");
    printf("///                3. Alterar Oráculo                                             ///\n");
    printf("///                3. Excluir Oráculo                                             ///\n");
    printf("///                0. Voltar ao menu anterior                                     ///\n");
    primtf("///                                                                               ///\n");
    printf("///                Escolha a opção desejada:                                      ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}
        
    
    
    void telaCadastrarOraculo(void) {
    char num[50];
    char criacao[8];    
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                = = = = = = = = Cadastrar Oráculo = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                    Numeração (apenas números):                                ///\n");
    printf("///                    Data da Criação (dd/mm/aaaa):                              ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}
     
 
 
void telaPesquisarOraculo(void) {
    char num[50];
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///             = = = = = = = = Pesquisar Oráculo = = = = = = = =                 ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = =                   ///\n");
    printf("///                                                                               ///\n");
    printf("///                Informe a numeração (apenas números):                          ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}



void telaAlterarOraculo(void) {
    char num[50];
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                = = = = = = = = Alterar Oráculo = = = = = = = = =              ///\n");
    printf("///                  = = = = = = = = = = = = = = = = = = = = = = =                ///\n");
    printf("///                                                                               ///\n");
    printf("///                Informe a numeração (apenas números):                          ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}



void telaExcluirOraculo(void) {
    char num[50];
    sistema("clear||cls");
    printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                               ///\n");
    printf("///                = = = = = = = = = = = = = = = = = = = = = = =                  ///\n");
    printf("///              = = = = = = = = Excluir Oráculo = = = = = = = = =                ///\n");
    printf("///               = = = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
    printf("///                                                                               ///\n");
    printf("///                Informe a numeração (apenas números):                          ///\n");
    printf("///                                                                               ///\n");
    printf("///                                                                               ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}
