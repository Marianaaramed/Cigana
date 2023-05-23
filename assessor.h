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

typedef struct assessor Assessor;

struct assessor{
    char cpf[12]; 
    char nome[51];
    char ramo[51];
    int status;
};

void moduloAssessor(void);
char menuAssessor(void);
Assessor* telaCadastrarAssessor(void);
void telaPesquisarAssessor(void);
void telaAlterarAssessor(void);
void telaExcluirAssessor(void);

void cadastrarAssessor(void);
void pesquisarAssessor(void);
void alterarAssessor(void);
void excluirAssessor(void);

Assessor* buscarAssessor(char);
void exibirAssessor(Assessor*);
void regravarAssessor(Assessor*);
