#include "testesdominios.h"


// Codigo_de_evento

    void TUCodigo_de_evento::testarCenarioSucesso(){
        try{
            codigo_de_evento->Set(VALOR_VALIDO);
            if (codigo_de_evento->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUCodigo_de_evento::testarCenarioFalha(){
        try{
            codigo_de_evento->Set(VALOR_INVALIDO);
            if (codigo_de_evento->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Codigo_de_apresentacao

    void TUCodigo_de_apresentacao::testarCenarioSucesso(){
        try{
            codigo_de_apresentacao->Set(VALOR_VALIDO);
            if (codigo_de_apresentacao->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUCodigo_de_apresentacao::testarCenarioFalha(){
        try{
            codigo_de_apresentacao->Set(VALOR_INVALIDO);
            if (codigo_de_apresentacao->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Codigo_de_ingresso

    void TUCodigo_de_ingresso::testarCenarioSucesso(){
        try{
            codigo_de_ingresso->Set(VALOR_VALIDO);
            if (codigo_de_ingresso->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUCodigo_de_ingresso::testarCenarioFalha(){
        try{
            codigo_de_ingresso->Set(VALOR_INVALIDO);
            if (codigo_de_ingresso->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Nome_de_evento

    void TUNome_de_evento::testarCenarioSucesso(){
        try{
            nome_de_evento->Set(VALOR_VALIDO);
            if (nome_de_evento->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUNome_de_evento::testarCenarioFalha(){
        try{
            nome_de_evento->Set(VALOR_INVALIDO);
            if (nome_de_evento->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Data

    void TUData::testarCenarioSucesso(){
        try{
            data->Set(VALOR_VALIDO);
            if (data->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUData::testarCenarioFalha(){
        try{
            data->Set(VALOR_INVALIDO);
            if (data->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Horario

    void TUHorario::testarCenarioSucesso(){
        try{
            horario->Set(VALOR_VALIDO);
            if (horario->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUHorario::testarCenarioFalha(){
        try{
            horario->Set(VALOR_INVALIDO);
            if (horario->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Preco

    void TUPreco::testarCenarioSucesso(){
        try{
            preco->Set(VALOR_VALIDO);
            if (preco->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUPreco::testarCenarioFalha(){
        try{
            preco->Set(VALOR_INVALIDO);
            if (preco->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Numero_de_sala

    void TUNumero_de_sala::testarCenarioSucesso(){
        try{
            numero_de_sala->Set(VALOR_VALIDO);
            if (numero_de_sala->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUNumero_de_sala::testarCenarioFalha(){
        try{
            numero_de_sala->Set(VALOR_INVALIDO);
            if (numero_de_sala->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Cidade

    void TUCidade::testarCenarioSucesso(){
        try{
            cidade->Set(VALOR_VALIDO);
            if (cidade->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUCidade::testarCenarioFalha(){
        try{
            cidade->Set(VALOR_INVALIDO);
            if (cidade->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Estado

    void TUEstado::testarCenarioSucesso(){
        try{
            estadoObj->Set(VALOR_VALIDO);
            if (estadoObj->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUEstado::testarCenarioFalha(){
        try{
            estadoObj->Set(VALOR_INVALIDO);
            if (estadoObj->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Disponibilidade

    void TUDisponibilidade::testarCenarioSucesso(){
        try{
            disponibilidade->Set(VALOR_VALIDO);
            if (disponibilidade->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUDisponibilidade::testarCenarioFalha(){
        try{
            disponibilidade->Set(VALOR_INVALIDO);
            if (disponibilidade->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Classe_de_evento

    void TUClasse_de_evento::testarCenarioSucesso(){
        try{
            classe_de_evento->Set(VALOR_VALIDO);
            if (classe_de_evento->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUClasse_de_evento::testarCenarioFalha(){
        try{
            classe_de_evento->Set(VALOR_INVALIDO);
            if (classe_de_evento->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Faixa_etaria

    void TUFaixa_etaria::testarCenarioSucesso(){
        try{
            faixa_etaria->Set(VALOR_VALIDO);
            if (faixa_etaria->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUFaixa_etaria::testarCenarioFalha(){
        try{
            faixa_etaria->Set(VALOR_INVALIDO);
            if (faixa_etaria->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Cpf

    void TUCpf::testarCenarioSucesso(){
        try{
            cpf->Set(VALOR_VALIDO);
            if (cpf->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUCpf::testarCenarioFalha(){
        try{
            cpf->Set(VALOR_INVALIDO);
            if (cpf->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Senha

    void TUSenha::testarCenarioSucesso(){
        try{
            senha->Set(VALOR_VALIDO);
            if (senha->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUSenha::testarCenarioFalha(){
        try{
            senha->Set(VALOR_INVALIDO);
            if (senha->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Numero_de_cartao_de_credito

    void TUNumero_de_cartao_de_credito::testarCenarioSucesso(){
        try{
            numero_de_cartao_de_credito->Set(VALOR_VALIDO);
            if (numero_de_cartao_de_credito->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUNumero_de_cartao_de_credito::testarCenarioFalha(){
        try{
            numero_de_cartao_de_credito->Set(VALOR_INVALIDO);
            if (numero_de_cartao_de_credito->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Codigo_de_seguranca

    void TUCodigo_de_seguranca::testarCenarioSucesso(){
        try{
            codigo_de_seguranca->Set(VALOR_VALIDO);
            if (codigo_de_seguranca->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUCodigo_de_seguranca::testarCenarioFalha(){
        try{
            codigo_de_seguranca->Set(VALOR_INVALIDO);
            if (codigo_de_seguranca->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

// Data_de_validade

    void TUData_de_validade::testarCenarioSucesso(){
        try{
            data_de_validade->Set(VALOR_VALIDO);
            if (data_de_validade->Get() != VALOR_VALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }

    void TUData_de_validade::testarCenarioFalha(){
        try{
            data_de_validade->Set(VALOR_INVALIDO);
            if (data_de_validade->Get() == VALOR_INVALIDO)
                estado = FALHA;
        }
        catch(std::exception &e){
            estado = FALHA;
        }
    }