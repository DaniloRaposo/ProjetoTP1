#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

class TUUsuario{
    private:
    // definição das constantes utiizadas
        const static std::string VALOR_VALIDO_CPF = "106.506.924.38";
        const static std::string VALOR_VALIDO_SENHA = "12345A";
    // objeto a ser testado
        Usuario *usuario;
    // estado do teste;
        bool estado;

        void SetUp(); // aloca memória para o objeto de teste e atribui aos seus atributos as constantes validas
        void TearDown(); // desaloca a memória do objeto de teste
        void TestarCpf();
        void TestarSenha();

    public:
    // constantes que designam o sucesso ou a falha no teste
        const static bool SUCESSO = true;
        const static bool FALHA = false;

        bool RunTesteCpf();
        bool RunTesteSenha();
};

class TUEvento{
    private:
    // definição das constantes utilizadas
        const static std::string VALOR_VALIDO_CODIGO = "041";
        const static std::string VALOR_VALIDO_NOME = "abcdefghijklmnopqrst";
        const static std::string VALOR_VALIDO_CIDADE = "abcdefghijklmnop";
        const static std::string VALOR_VALIDO_ESTADO = "RN";
        const static int VALOR_VALIDO_CLASSE = 1; // Teatro
        const static std::string VALOR_VALIDO_FAIXA = "16";
    // objeto a ser testado
        Evento *evento;
    // estado do teste
        bool estado;

        void SetUp(); // aloca memória para o objeto de teste
        void TearDown(); // desaloca a memória do objeto usado como teste
        void TestarCodigoEvento();
        void TestarNomeEvento();
        void TestarCidade();
        void TestarEstado();
        void TestarClasseEvento();
        void TestarFaixaEtaria();

    public:
    // constantes que indicam sucesso ou falha no teste
        const static bool SUCESSO = true;
        const static bool FALHA = false;

        bool RunTesteCodigoEvento();
        bool RunTesteNomeEvento();
        bool RunTesteCidade();
        bool RunTesteEstado();
        bool RunTesteClasseEvento();
        bool RunTesteFaixaEtaria();
};

#endif
