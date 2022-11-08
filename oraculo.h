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



//////
////// Assistenaturas das funções 
//////
typedef struct  oraculo Oraculo;

struct oraculo {
    char temas[50];
    char horoscopo[50];
    char previsoes[50];
    int status;
};


void moduloOraculo(void);
char telaMenuOraculo(void);
void telaCadastrarOraculo(void);
void telaPesquisarOraculo(void);
void telaAlterarOraculo(void);
void telaExcluirOraculo(void);
void CadastrarOraculo(void);
void PesquisarOraculo(void);
void AlterarOraculo(void);
void ExcluirOraculo(void);
