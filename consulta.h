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
////// Assisnaturas das funcões Módulo Consulta
//////

typedef struct consulta Consulta;

struct consulta {
    char registro[12];
    char codConsulta[8];
    char hora[8];
    char data[8];
    int status;
};

void moduloConsulta(void);
char menuConsulta(void);
Consulta* telaPreencherConsulta(void);
char* telaPesquisarConsulta(void);
char* telaAlterarConsulta(void);
char* telaExcluirConsulta(void);

void cadastrarConsulta(void);
void pesquisarConsulta(void);
void alterarConsulta(void);
void gravarConsulta(Consulta*);
void excluirConsulta(void);

Consulta* buscarConsulta(char*);
void exibirConsulta(Consulta*);
void regravarConsulta(Consulta*);
