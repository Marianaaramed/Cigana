/////////////////////////////////////////////////////////////////////////////////////////
///                                                                                   ///
///                   Universidade Federal do Rio Grande do Norte                     ///
///                   Centro de Ensino Superior do Seridó                             ///
///                   Departamento de Computação e Tecnologia                         ///
///                   Disciplina DCT1106 - Programação                                ///
///                   Projeto Cigana Virtual                                          ///
///                   Desenvolvido por mariana                                        ///
///                                                                                   ///
/////////////////////////////////////////////////////////////////////////////////////////


//////
////// Assisnaturas das funcões Módulo Usuario
//////

typedef struct usuario Usuario;
struct usuario {
  char registro[12];
    char cpf[12];
    char nome[51];
    char email[51];
    char nasc[11];
  int status;
};

void moduloUsuario(void);
char menuUsuario(void);
Usuario* telaCadastrarUsuario(void);
void telaPesquisarUsuario(void);
void telaAlterarUsuario(void);
void telaExcluirUsuario(void);

void cadastrarUsuario(void);
void pesquisarUsuario(void);
void alterarUsuario(void);
void excluirUsuario(void);
