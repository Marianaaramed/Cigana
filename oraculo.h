/////////////////////////////////////////////////////////////////////////////////////////
///                                                                                   ///
///                   Universidade Federal do Rio Grande do Norte                     ///
///                   Centro de Ensino Superior do Seridó                             ///
///                   Departamento de Computação e Tecnologia                         ///
///                   Disciplina DCT1106 - Programação                                ///
///                   Projeto Sistema de Planejamento de Dieta                        ///
///                   Desenvolvido por mariana                                        ///
///                                                                                   ///
/////////////////////////////////////////////////////////////////////////////////////////



typedef struct  oraculo Oraculo;

struct oraculo {
    char codOraculo[4];
    char tipoOraculo[31];
    char duração[15];
    char criacao[11];
    int status;
};


void moduloOraculo(void);
char telamenuOraculo(void);
Oraculo* telaCadastrarOraculo(void);
void telaPesquisarOraculo(void);
void telaAlterarOraculo(void);
void telaExcluirOraculo(void);
void cadastrarOraculo(void);
void pesquisarOraculo(void);
void alterarOraculo(void);
void excluirOraculo(void);
void gravarOraculo(Oraculo*);
