#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

class TUUsuario{
    private:
    // definição das constantes utiizadas
        const static std::string VALOR_VALIDO_CPF = "106.506.924.38";
        const static std::string VALOR_VALIDO_SENHA = "12345A";
    // objeto a ser GetEstado
        Usuario *usuario;
    // estado do teste;
        bool estado;

        void SetUp(); // aloca memória para o objeto de teste e atribui aos seus atributos as constantes validas
        void TearDown(); // desaloca a memória do objeto de teste
        void TestarCpf();
        void TestarSenha();

    public:
    // atributos que designam o sucesso ou a falha no teste
        const static bool SUCESSO = true;
        const static bool FALHA = false;

        bool RunTesteCpf();
        bool RunTesteSenha();
};

#endif
