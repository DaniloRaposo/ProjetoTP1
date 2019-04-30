#ifndef TESTESDOMINIOS_H_INCLUDED
#define TESTESDOMINIOS_H_INCLUDED

#include "dominios.h"

using namespace std;


class TUCodigo_de_evento{
    private:

    // constantes

    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "123";
    std::string VALOR_INVALIDO; //= "12c";

    Codigo_de_evento *codigo_de_evento;

    void setUp(){
        codigo_de_evento = new Codigo_de_evento();
        estado = true;
    };

    void tearDown(){
        delete codigo_de_evento;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUCodigo_de_apresentacao{
    private:

    // constantes

    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "1234";
    std::string VALOR_INVALIDO; //= "123d";

    Codigo_de_apresentacao *codigo_de_apresentacao;

    void setUp(){
        codigo_de_apresentacao = new Codigo_de_apresentacao();
        estado = true;
    };

    void tearDown(){
        delete codigo_de_apresentacao;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUCodigo_de_ingresso{
    private:

    // constantes

    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "12345";
    std::string VALOR_INVALIDO; //= "1234e";

    Codigo_de_ingresso *codigo_de_ingresso;

    void setUp(){
        codigo_de_ingresso = new Codigo_de_ingresso();
        estado = true;
    };

    void tearDown(){
        delete codigo_de_ingresso;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUNome_de_evento{
    private:

    // constantes
    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "Jorge Party";
    std::string VALOR_INVALIDO; //= "Jorge  Party";

    Nome_de_evento *nome_de_evento;

    void setUp(){
        nome_de_evento = new Nome_de_evento();
        estado = true;
    };

    void tearDown(){
        delete nome_de_evento;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUData{
    private:


    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "29/02/23";
    std::string VALOR_INVALIDO; //= "29/02/24";

    Data *data;

    void setUp(){
        data = new Data();
        estado = true;
    };

    void tearDown(){
        delete data;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUHorario{
    private:

    // constantes

    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "22:45";
    std::string VALOR_INVALIDO; //= "23:00";

    Horario *horario;

    void setUp(){
        horario = new Horario();
        estado = true;
    };

    void tearDown(){
        delete horario;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUPreco{
    private:

    // constantes

    bool estado;

    // especificos do dominio

    float VALOR_VALIDO;   //= 1000.00;
    float VALOR_INVALIDO; //= 1000.01;

    Preco *preco;

    void setUp(){
        preco = new Preco();
        estado = true;
    };

    void tearDown(){
        delete preco;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUNumero_de_sala{
    private:

    // constantes


    bool estado;

    // especificos do dominio

    int VALOR_VALIDO;   //= 10;
    int VALOR_INVALIDO; //= 11;

    Numero_de_sala *numero_de_sala;

    void setUp(){
        numero_de_sala = new Numero_de_sala();
        estado = true;
    };

    void tearDown(){
        delete numero_de_sala;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUCidade{
    private:

    // constantes


    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;  //= "Frankenmuth. ";
    std::string VALOR_INVALIDO; //= "Frankenmuth.  ";

    Cidade *cidade;

    void setUp(){
        cidade = new Cidade();
        estado = true;
    };

    void tearDown(){
        delete cidade;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUEstado{
    private:

    // constantes


    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "PI";
    std::string VALOR_INVALIDO; //= "XX";

    Estado *estadoObj;

    void setUp(){
        estadoObj = new Estado();
        estado = true;
    };

    void tearDown(){
        delete estadoObj;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUDisponibilidade{
    private:

    // constantes

    bool estado;

    // especificos do dominio

    int VALOR_VALIDO;   //= 250;
    int VALOR_INVALIDO; //= 251;

    Disponibilidade *disponibilidade;

    void setUp(){
        disponibilidade = new Disponibilidade();
        estado = true;
    };

    void tearDown(){
        delete disponibilidade;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUClasse_de_evento{
    private:

    // constantes

    bool estado;

    // especificos do dominio

    int VALOR_VALIDO;   //= 4;
    int VALOR_INVALIDO; //= 5;

    Classe_de_evento *classe_de_evento;

    void setUp(){
        classe_de_evento = new Classe_de_evento();
        estado = true;
    };

    void tearDown(){
        delete classe_de_evento;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUFaixa_etaria{
    private:

    // constantes

    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "16";
    std::string VALOR_INVALIDO; //= "17";

    Faixa_etaria *faixa_etaria;

    void setUp(){
        faixa_etaria = new Faixa_etaria();
        estado = true;
    };

    void tearDown(){
        delete faixa_etaria;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUCpf{
    private:

    // constantes


    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "111.444.777-35";
    std::string VALOR_INVALIDO; //= "000.000.002-00";

    Cpf *cpf;

    void setUp(){
        cpf = new Cpf();
        estado = true;
    };

    void tearDown(){
        delete cpf;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUSenha{
    private:

    // constantes


    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "A1abcd";
    std::string VALOR_INVALIDO; //= "A1abcc";

    Senha *senha;

    void setUp(){
        senha = new Senha();
        estado = true;
    };

    void tearDown(){
        delete senha;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUNumero_de_cartao_de_credito{
    private:

    // constantes


    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "0000000000002311";
    std::string VALOR_INVALIDO; //= "0000000000002310";

    Numero_de_cartao_de_credito *numero_de_cartao_de_credito;

    void setUp(){
        numero_de_cartao_de_credito = new Numero_de_cartao_de_credito();
        estado = true;
    };

    void tearDown(){
        delete numero_de_cartao_de_credito;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUCodigo_de_seguranca{
    private:

    // constantes


    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "000";
    std::string VALOR_INVALIDO; //= "00a";

    Codigo_de_seguranca *codigo_de_seguranca;

    void setUp(){
        codigo_de_seguranca = new Codigo_de_seguranca();
        estado = true;
    };

    void tearDown(){
        delete codigo_de_seguranca;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};

class TUData_de_validade{
    private:

    // constantes

    bool estado;

    // especificos do dominio

    std::string VALOR_VALIDO;   //= "12/20";
    std::string VALOR_INVALIDO; //= "13/20";

    Data_de_validade *data_de_validade;

    void setUp(){
        data_de_validade = new Data_de_validade();
        estado = true;
    };

    void tearDown(){
        delete data_de_validade;
    };

    void testarCenarioSucesso();
    void testarCenarioFalha();

    public:

    bool run(){
        setUp();
        testarCenarioSucesso();
        testarCenarioFalha();
        tearDown();
        return estado;
    };
};


#endif // TESTESDOMINIOS_H_INCLUDED