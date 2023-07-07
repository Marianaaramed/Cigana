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
////// Assisnaturas das funcões Módulo Assessor ////

typedef struct assessor Assessor;

struct assessor{
    char cpf[12]; 
    char nome[51];
    char ramo[51];
    int status;
};

void moduloAssessor(void);
char menuAssessor(void);
Assessor* telaPreencherAssessor(void);
char* telaPesquisarAssessor(void);
char* telaAlterarAssessor(void);
char* telaExcluirAssessor(void);

void cadastrarAssessor(void);
void pesquisarAssessor(void);
void alterarAssessor(void);
void excluirAssessor(void);
void gravarAssessor(Assessor*);

Assessor* buscarAssessor(char*);
void exibirAssessor(Assessor*);
void regravarAssessor(Assessor*);
