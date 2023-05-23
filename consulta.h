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
    char registro[12]
    char codConsulta[8];
    char tipoConsulta[31];
    char duracao[15];
    char cpf[12];
    int status;
};

void moduloConsulta(void);
char menuConsulta(void);
Consulta* telaCadastrarConsulta(void);
void telaPesquisarConsulta(void);
void telaAlterarConsulta(void);
void telaExcluirConsulta(void);

void cadastrarConsulta(void);
void pesquisarConsulta(void);
void alterarConsulta(void);
void excluirConsulta(void);
