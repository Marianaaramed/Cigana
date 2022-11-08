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
////// Assisnaturas das funcões Módulo Consultor
//////

typedef struct consultor Consultor;
struct consultor {
    char CPF[12];
    char nome[51];
    char especialidade[51];
    char email[51];
    char nasc[11];
    char celular[12];
    int status;
};

void moduloConsultor(void);
char menuConsultor(void);
Consultor* telaPreencherConsultor(void);
char* telaPesquisarConsultor(void);
char* telaAlterarConsultor(void);
char* telaExcluirConsultor(void);
void telaErroArquivo(void);
void cadastrarConsultor(void);
void pesquisarConsultor(void);
void alterarConsultor(void);
void excluirConsultor(void);
void gravarConsultor(Consultor*);
void exibirConsultor(Consultor*);
Consultor* buscarConsultor(char*);
void exibirConsultor(Consultor*);
void regravarConsultor(Consultor*);
