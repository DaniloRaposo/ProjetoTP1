
#include "testesdominios.h"


// Codigo_de_evento

    void TUCodigo_de_evento::testarCenarioSucesso(){
        VALOR_VALIDO = "123";
        try{
            codigo_de_evento->Set(VALOR_VALIDO);
            if (codigo_de_evento->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUCodigo_de_evento::testarCenarioFalha(){
        VALOR_INVALIDO = "12c";
        bool houveException = false;
        try{
            codigo_de_evento->Set(VALOR_INVALIDO);
            if (codigo_de_evento->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Codigo_de_apresentacao

    void TUCodigo_de_apresentacao::testarCenarioSucesso(){
        VALOR_VALIDO = "1234";
        try{
            codigo_de_apresentacao->Set(VALOR_VALIDO);
            if (codigo_de_apresentacao->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUCodigo_de_apresentacao::testarCenarioFalha(){
        VALOR_INVALIDO = "123d";
        bool houveException = false;
        try{
            codigo_de_apresentacao->Set(VALOR_INVALIDO);
            if (codigo_de_apresentacao->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Codigo_de_ingresso

    void TUCodigo_de_ingresso::testarCenarioSucesso(){
        VALOR_VALIDO = "12345";
        try{
            codigo_de_ingresso->Set(VALOR_VALIDO);
            if (codigo_de_ingresso->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUCodigo_de_ingresso::testarCenarioFalha(){
        VALOR_INVALIDO = "1234e";
        bool houveException = false;
        try{
            codigo_de_ingresso->Set(VALOR_INVALIDO);
            if (codigo_de_ingresso->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Nome_de_evento

    void TUNome_de_evento::testarCenarioSucesso(){
        VALOR_VALIDO = "Jorge Party";
        try{
            nome_de_evento->Set(VALOR_VALIDO);
            if (nome_de_evento->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUNome_de_evento::testarCenarioFalha(){
        VALOR_INVALIDO = "Jorge  Party";
        bool houveException = false;
        try{
            nome_de_evento->Set(VALOR_INVALIDO);
            if (nome_de_evento->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Data

    void TUData::testarCenarioSucesso(){
        VALOR_VALIDO = "29/02/24";
        try{
            data->Set(VALOR_VALIDO);
            if (data->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUData::testarCenarioFalha(){
        VALOR_INVALIDO = "29/02/23";
        bool houveException = false;
        try{
            data->Set(VALOR_INVALIDO);
            if (data->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Horario

    void TUHorario::testarCenarioSucesso(){
        VALOR_VALIDO = "22:45";
        try{
            horario->Set(VALOR_VALIDO);
            if (horario->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUHorario::testarCenarioFalha(){
        VALOR_INVALIDO = "23:00";
        bool houveException = false;
        try{
            horario->Set(VALOR_INVALIDO);
            if (horario->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Preco

    void TUPreco::testarCenarioSucesso(){
        VALOR_VALIDO = 1000.00;
        try{
            preco->Set(VALOR_VALIDO);
            if (preco->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUPreco::testarCenarioFalha(){
        VALOR_INVALIDO = 1000.01;
        bool houveException = false;
        try{
            preco->Set(VALOR_INVALIDO);
            if (preco->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Numero_de_sala

    void TUNumero_de_sala::testarCenarioSucesso(){
        VALOR_VALIDO = 10;
        try{
            numero_de_sala->Set(VALOR_VALIDO);
            if (numero_de_sala->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUNumero_de_sala::testarCenarioFalha(){
        VALOR_INVALIDO = 11;
        bool houveException = false;
        try{
            numero_de_sala->Set(VALOR_INVALIDO);
            if (numero_de_sala->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Cidade

    void TUCidade::testarCenarioSucesso(){
        VALOR_VALIDO = "Frankenmuth. ";
        try{
            cidade->Set(VALOR_VALIDO);
            if (cidade->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUCidade::testarCenarioFalha(){
        VALOR_INVALIDO = "Frankenmuth.  ";
        bool houveException = false;
        try{
            cidade->Set(VALOR_INVALIDO);
            if (cidade->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Estado

    void TUEstado::testarCenarioSucesso(){
        VALOR_VALIDO = "PI";
        try{
            estadoObj->Set(VALOR_VALIDO);
            if (estadoObj->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUEstado::testarCenarioFalha(){
        VALOR_INVALIDO = "XX";
        bool houveException = false;
        try{
            estadoObj->Set(VALOR_INVALIDO);
            if (estadoObj->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Disponibilidade

    void TUDisponibilidade::testarCenarioSucesso(){
        VALOR_VALIDO = 250;
        try{
            disponibilidade->Set(VALOR_VALIDO);
            if (disponibilidade->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUDisponibilidade::testarCenarioFalha(){
        VALOR_INVALIDO = 251;
        bool houveException = false;
        try{
            disponibilidade->Set(VALOR_INVALIDO);
            if (disponibilidade->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Classe_de_evento

    void TUClasse_de_evento::testarCenarioSucesso(){
        VALOR_VALIDO = 4;
        try{
            classe_de_evento->Set(VALOR_VALIDO);
            if (classe_de_evento->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUClasse_de_evento::testarCenarioFalha(){
        VALOR_INVALIDO = 5;
        bool houveException = false;
        try{
            classe_de_evento->Set(VALOR_INVALIDO);
            if (classe_de_evento->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Faixa_etaria

    void TUFaixa_etaria::testarCenarioSucesso(){
        VALOR_VALIDO = "16";
        try{
            faixa_etaria->Set(VALOR_VALIDO);
            if (faixa_etaria->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUFaixa_etaria::testarCenarioFalha(){
        VALOR_INVALIDO = "17";
        bool houveException = false;
        try{
            faixa_etaria->Set(VALOR_INVALIDO);
            if (faixa_etaria->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Cpf

    void TUCpf::testarCenarioSucesso(){
        VALOR_VALIDO = "111.444.777-35";
        try{
            cpf->Set(VALOR_VALIDO);
            if (cpf->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUCpf::testarCenarioFalha(){
        VALOR_INVALIDO = "000.000.002-00";
        bool houveException = false;
        try{
            cpf->Set(VALOR_INVALIDO);
            if (cpf->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Senha

    void TUSenha::testarCenarioSucesso(){
        VALOR_VALIDO = "A2abcd";
        try{
            senha->Set(VALOR_VALIDO);
            if (senha->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUSenha::testarCenarioFalha(){
        VALOR_INVALIDO = "A2abcc";
        bool houveException = false;
        try{
            senha->Set(VALOR_INVALIDO);
            if (senha->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Numero_de_cartao_de_credito

    void TUNumero_de_cartao_de_credito::testarCenarioSucesso(){
        VALOR_VALIDO = "0000000000002311";
        try{
            numero_de_cartao_de_credito->Set(VALOR_VALIDO);
            if (numero_de_cartao_de_credito->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUNumero_de_cartao_de_credito::testarCenarioFalha(){
        VALOR_INVALIDO = "0000000000002310";
        bool houveException = false;
        try{
            numero_de_cartao_de_credito->Set(VALOR_INVALIDO);
            if (numero_de_cartao_de_credito->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Codigo_de_seguranca

    void TUCodigo_de_seguranca::testarCenarioSucesso(){
        VALOR_VALIDO = "000";
        try{
            codigo_de_seguranca->Set(VALOR_VALIDO);
            if (codigo_de_seguranca->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUCodigo_de_seguranca::testarCenarioFalha(){
        VALOR_INVALIDO = "00a";
        bool houveException = false;
        try{
            codigo_de_seguranca->Set(VALOR_INVALIDO);
            if (codigo_de_seguranca->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }

// Data_de_validade

    void TUData_de_validade::testarCenarioSucesso(){
        VALOR_VALIDO = "12/20";
        try{
            data_de_validade->Set(VALOR_VALIDO);
            if (data_de_validade->Get() != VALOR_VALIDO)
                estado = false;
        }
        catch(std::exception &e){
            estado = false;
        }
    }

    void TUData_de_validade::testarCenarioFalha(){
        VALOR_INVALIDO = "13/20";
        bool houveException = false;
        try{
            data_de_validade->Set(VALOR_INVALIDO);
            if (data_de_validade->Get() == VALOR_INVALIDO)
                estado = false;
        }
        catch(std::exception &e){
            houveException = true;
        }
        if(houveException == false) estado = false; // se nao houver exce��o, houve um erro no teste
    }