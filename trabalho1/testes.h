#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"


class TUUsuario{
    private:
    // definição das constantes utiizadas
        std::string VALOR_VALIDO_CPF; //= "106.506.924-38";
        std::string VALOR_VALIDO_SENHA; //= "12345A";
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

        bool RunTesteCpf();
        bool RunTesteSenha();
};

class TUEvento{
    private:
    // definição das constantes utilizadas
        std::string VALOR_VALIDO_CODIGO; //= "041";
        std::string VALOR_VALIDO_NOME; //= "abcdefghijklmnopqrst";
        std::string VALOR_VALIDO_CIDADE; //= "abcdefghijklmnop";
        std::string VALOR_VALIDO_ESTADO; //= "RN";
        int VALOR_VALIDO_CLASSE; //= 1; // Teatro
        std::string VALOR_VALIDO_FAIXA; //= "16";
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

        bool RunTesteCodigoEvento();
        bool RunTesteNomeEvento();
        bool RunTesteCidade();
        bool RunTesteEstado();
        bool RunTesteClasseEvento();
        bool RunTesteFaixaEtaria();
};

class TUApresentacao{
    private:
    // definição de constantes utilizadas
        std::string VALOR_VALIDO_CODIGO; //= "0234";
        std::string VALOR_VALIDO_DATA; //= "02/09/19";
        std::string VALOR_VALIDO_HORARIO; //= "09:30";
        float VALOR_VALIDO_PRECO; //= 200.00;
        int VALOR_VALIDO_SALA; //= 2;
        int VALOR_VALIDO_DISPONIBILIDADE; //= 40;
    // objeto a ser testado
        Apresentacao *apresentacao;
    // estado do teste
        bool estado;

        void SetUp();// aloca memória para o objeto usado como teste
        void TearDown();// desaloca a memória do objeto usado como teste
        void TestarCodigoApresentacao();
        void TestarData();
        void TestarHorario();
        void TestarPreco();
        void TestarNumeroSala();
        void TestarDisponibilidade();

    public:
    // constantes que indicam o sucesso ou a falha do teste

        bool RunTesteCodigoApresentacao();
        bool RunTesteData();
        bool RunTesteHorario();
        bool RunTestePreco();
        bool RunTesteNumeroSala();
        bool RunTesteDisponibilidade();
};

class TUIngresso{
    private:
    // definição das constantes utilizadas
        std::string VALOR_VALIDO_CODIGO; //= "12346";
    // objeto a ser testado
        Ingresso *ingresso;
    // estado do teste
        bool estado;

        void SetUp();// aloca memória para o objeto usado como teste
        void TearDown();// desaloca a memória do objeto usado como teste
        void TestarCodigoIngresso();

    public:
    // constantes que indicam o sucesso ou a falha do teste

        bool RunTesteCodigoIngresso();
};

class TUCartao_de_Credito{
    private:
    // definição das constantes utilizadas
        std::string VALOR_VALIDO_NUMERO; //= "0000000000002311";
        std::string VALOR_VALIDO_CODIGO; //= "000";
        std::string VALOR_VALIDO_DATA; //= "10/10";
    // objeto a ser testado
        Cartao_de_Credito *cartao;
    //estado do teste
        bool estado;

        void SetUp();// aloca memória para o objeto usado como teste
        void TearDown();// desaloca a memória do objeto usado como teste
        void TestarNumeroCartao();
        void TestarCodigoSeguranca();
        void TestarDataValidade();

    public:
    // constantes que indicam o sucesso ou a falha do teste

        bool RunTesteNumeroCartao();
        bool RunTesteCodigoSeguranca();
        bool RunTesteDataValidade();
};

#endif// TESTES_H_INCLUDED
