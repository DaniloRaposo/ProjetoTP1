#include <stdexcept>

#include "testes.h"
#include "dominios.h"
#include "entidades.h"

// Usuario:
// private:

void TUUsuario::SetUp(){
    usuario = new Usuario(); // aloca espaço de memória para o objeto usuario
    estado = SUCESSO;
}

void TUUsuario::TearDown(){
    delete usuario; // desaloca espaço de memória alocado para usuario
}

void TUUsuario::TestarCpf(){
    Cpf cpf_auxiliar; // objeto auxiliar para dar um Usuario::Set

    try{
        cpf_auxiliar.Set(VALOR_VALIDO_CPF); // seta o atributo do cpf para o valor valido
        usuario->Set(cpf_auxiliar); // seta o cpf do usuario como o cpf auxiliar
        if(usuario->GetCpf().Get() == VALOR_VALIDO_CPF) // se o atributo do objeto cpf que é objeto do usuario for igual ao valor valido, entao estado = true
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUUsuario::TestarSenha(){
    Senha senha_auxiliar;// objeto auxiliar para dar um Usuario::Set

    try{
        senha_auxiliar.Set(VALOR_VALIDO_SENHA) // seta o atributo da senha para o valor valido
        usuario->Set(senha_auxiliar); // seta a senha do usuario como a senha auxiliar
        if(usuario->GetSenha().Get() == VALOR_VALIDO_SENHA)
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

// public:

bool TUUsuario::RunTesteCpf(){
    SetUp(); // aloca memoria para um objeto do tipo usuario
    TestarCpf(); // caso de teste do cpf
    TearDown(); // desaloca memoria do objeto do tipo usuario
    return estado; // retorna resultado do teste
}

bool TUUsuario::RunTesteSenha(){
    SetUp(); // aloca memoria para um objeto do tipo usuario
    TestarSenha(); // caso teste da senha
    TearDown(); // desaloca memoria do objeto do tipo usuario
    return estado; // retorna resultado do teste
}

// Evento:
// private:

void TUEvento::SetUp(){
    evento = new Evento(); // aloca espaço de memória para o objeto usuario
    estado = SUCESSO;
}

void TUEvento::TearDown(){
    delete evento;  // desaloca espaço de memória alocado para usuario
}

void TUEvento::TestarCodigoEvento(){
    Codigo_de_Evento codigo_auxiliar; // objeto auxiliar para dar um Evento::Set

    try{
        codigo_auxiliar.Set(VALOR_VALIDO_CODIGO); // seta o atributo do codigo de evento para o valor valido
        evento->Set(codigo_auxiliar); // seta o codigo de evento do evento como o codigo auxiliar
        if(evento->GetCodigo().Get() == VALOR_VALIDO_CODIGO) // se o atributo do objeto codigo de evento que é objeto do evento for igual ao valor valido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUEvento::TestarNomeEvento(){
    Nome_de_Evento nome_auxiliar; // objeto auxiliar para dar um Evento::Set

    try{
        nome_auxiliar.Set(VALOR_VALIDO_NOME); // seta o atributo do nome de evento para o valor valido
        evento->Set(nome_auxiliar); // seta o nome do evento  do evento como o nome auxiliar
        if(evento->GetNome().Get() == VALOR_VALIDO_NOME) // se o atributo do objeto nome de evento que é objeto do evento for igual ao valor valido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUEvento::TestarCidade(){
    Cidade cidade_auxiliar; // objeto auxiliar para dar um Evento::Set

    try{
        cidade_auxiliar.Set(VALOR_VALIDO_CIDADE);// seta o atributo da cidade para o valor valido
        evento->Set(cidade_auxiliar); // seta a cidade do evento como a cidade auxiliar
        if(evento->GetCidade().Get() == VALOR_VALIDO_CIDADE) // se o atributo do objeto cidade que é objeto do evento for igual ao valor valido, então estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUEvento::TestarEstado(){
    Estado estado_auxiliar; // objeto auxiliar para dar um Evento::Set

    try{
        estado_auxiliar.Set(VALOR_VALIDO_ESTADO);// seta o atributo do estado para o valor valido
        evento->Set(estado_auxiliar);// seta o estado do evento com o estado auxiliar
        if(evento->GetEstado().Get() == VALOR_VALIDO_ESTADO) // se o atributo do objeto estado que é objeto do evento for igual ao valor valido, então o atributo do teste estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUEvento::TestarClasseEvento(){
    Classe_de_Evento classe_auxiliar; // objeto auxiliar para dar um Evento::Set

    try{
        classe_auxiliar.Set(VALOR_VALIDO_CLASSE);// seta o atributo da classe para o valor valido
        evento->Set(classe_auxiliar);// seta a classe do evento com a classe auxiliar
        if(evento->GetClasse().Get() == VALOR_VALIDO_CLASSE)// se o atributo do objeto classe de evento que é objeto do evento for igual ao valor valido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUEvento::TestarFaixaEtaria(){
    Faixa_Etaria faixa_auxiliar;// objeto auxiliar para dar um Evento::Set

    try{
        faixa_auxiliar.Set(VALOR_VALIDO_FAIXA);// seta o atributo da faixa para o valor valido
        evento->Set(faixa_auxiliar);// seta a faixa do evento com a faixa auxiliar
        if(evento->GetFaixa().Get() == VALOR_VALIDO_FAIXA)// se o atributo do objeto faixa etaria que é objeto do evento for igual ao valor valido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

bool TUEvento::RunTesteCodigoEvento(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarCodigoEvento(); // caso de teste do codigo de eventos
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

bool TUEvento::RunTesteNomeEvento(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarNomeEvento(); // caso de teste do nome do evento
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

bool TUEvento::RunTesteCidade(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarCidade(); // caso de teste da cidade
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

bool TUEvento::RunTesteEstado(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarEstado(); // caso de teste do estado
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

bool TUEvento::RunTesteClasseEvento(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarClasseEvento(); // caso de teste da classe do evento
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

bool TUEvento::RunTesteFaixaEtaria(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarFaixaEtaria(); // caso de teste da faixa etaria
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

void TUApresentacao::SetUp(){
    apresentacao = new Apresentacao(); // aloca espaço de memória para o objeto apresentacao
    estado = SUCESSO;
}

void TUApresentacao::TearDown(){
    delete apresentacao;  // desaloca espaço de memória alocado para apresentacao
}

void TUApresentacao::TestarCodigoApresentacao(){
    Codigo_de_Apresentacao codigo_auxiliar; // objeto auxiliar para dar um Apresentacao::Set

    try{
        codigo_auxiliar.Set(VALOR_VALIDO_CODIGO); // seta o atributo do codigo de apresentacao para o valor válido
        apresentacao->Set(codigo_auxiliar); // seta o codigo de apresentacao da apresentacao como o codigo auxiliar
        if(apresentacao->GetCodigo().Get() == VALOR_VALIDO_CODIGO) // se o atributo do objeto codigo de apresentacao que é objeto da apresentacao for igual ao valor válido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUApresentacao::TestarData(){
    Data data_auxiliar; // objeto auxiliar para dar um Apresentacao::Set

    try{
        data_auxiliar.Set(VALOR_VALIDO_DATA); // seta o atributo da data para o valor válido
        apresentacao->Set(data_auxiliar); // seta a data da apresentacao como a data auxiliar
        if(apresentacao->GetData().Get() == VALOR_VALIDO_DATA) // se o atributo do objeto data que é objeto da apresentacao for igual ao valor válido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUApresentacao::TestarHorario(){
    Horario horario_auxiliar; // objeto auxiliar para dar um Apresentacao::Set

    try{
        horario_auxiliar.Set(VALOR_VALIDO_HORARIO); // seta o atributo do horario para o valor válido
        apresentacao->Set(horario_auxiliar); // seta o horario da apresentacao como o horario auxiliar
        if(apresentacao->GetHorario().Get() == VALOR_VALIDO_HORARIO) // se o atributo do objeto horario que é objeto da apresentacao for igual ao valor válido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUApresentacao::TestarPreco(){
    Preco preco_auxiliar; // objeto auxiliar para dar um Apresentacao::Set

    try{
        preco_auxiliar.Set(VALOR_VALIDO_PRECO); // seta o atributo do preco para o valor válido
        apresentacao->Set(preco_auxiliar); // seta o preco da apresentacao como o preco auxiliar
        if(apresentacao->GetPreco().Get() == VALOR_VALIDO_PRECO) // se o atributo do objeto preco que é objeto da apresentacao for igual ao valor válido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUApresentacao::TestarNumeroSala(){
    Numero_de_Sala sala_auxiliar; // objeto auxiliar para dar um Apresentacao::Set

    try{
        sala_auxiliar.Set(VALOR_VALIDO_SALA); // seta o atributo do numero da sala para o valor válido
        apresentacao->Set(sala_auxiliar); // seta o numero da sala da apresentacao como a sala auxiliar
        if(apresentacao->GetSala().Get() == VALOR_VALIDO_SALA) // se o atributo do objeto sala que é objeto da apresentacao for igual ao valor válido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUApresentacao::TestarDisponibilidade(){
    Disponibilidade disponibilidade_auxiliar; // objeto auxiliar para dar um Apresentacao::Set

    try{
        disponibilidade_auxiliar.Set(VALOR_VALIDO_DISPONIBILIDADE); // seta o atributo da disponibilidade para o valor válido
        apresentacao->Set(disponibilidade_auxiliar); // seta a disponibilidade da apresentacao como a disponibilidade auxiliar
        if(apresentacao->GetDisponibilidade().Get() == VALOR_VALIDO_DISPONIBILIDADE) // se o atributo do objeto disponibilidade que é objeto da apresentacao for igual ao valor válido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

bool TUApresentacao::RunTesteCodigoApresentacao(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarCodigoApresentacao(); // caso de teste do codigo de apresentacao
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

bool TUApresentacao::RunTesteData(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarData(); // caso de teste da data
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

bool TUApresentacao::RunTesteHorario(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarHorario(); // caso de teste do horário
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

bool TUApresentacao::RunTestePreco(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarPreco(); // caso de teste do preço
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

bool TUApresentacao::RunTesteNumeroSala(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarNumeroSala(); // caso de teste do número da sala
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

bool TUApresentacao::RunTesteDisponibilidade(){
    SetUp(); // aloca memoria para um objeto do tipo evento
    TestarDisponibilidade(); // caso de teste da disponibilidade
    TearDown(); // desaloca memoria do objeto do tipo evento
    return estado; // retorna resultado do teste
}

void TUIngresso::SetUp(){
    ingresso = new Ingresso(); // aloca espaço de memória para o objeto ingresso
    estado = SUCESSO;
}

void TUIngresso::TearDown(){
    delete ingresso;  // desaloca espaço de memória alocado para ingresso
}

void TUIngresso::TestarCodigoIngresso(){
     Codigo_de_Ingresso codigo_auxiliar; // objeto auxiliar para dar um Ingresso::Set

    try{
        codigo_auxiliar.Set(VALOR_VALIDO_CODIGO); // seta o atributo do codigo de ingresso para o valor válido
        ingresso->Set(codigo_auxiliar); // seta o codigo do ingresso do ingresso como o codigo auxiliar
        if(ingresso->GetCodigo().Get() == VALOR_VALIDO_CODIGO) // se o atributo do objeto codigo de ingresso que é objeto do ingresso for igual ao valor válido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

bool TUIngresso::RunTesteCodigoIngresso(){
    SetUp(); // aloca memoria para um objeto do tipo ingresso
    TestarDisponibilidade(); // caso de teste do codigo de ingresso
    TearDown(); // desaloca memoria do objeto do tipo ingresso
    return estado; // retorna resultado do teste
}

void TUCartao_de_Credito::SetUp(){
    cartao = new Cartao_de_Credito(); // aloca espaço de memória para o objeto cartao
    estado = SUCESSO;
}

void TUCartao_de_Credito::TearDown(){
    delete cartao;  // desaloca espaço de memória alocado para cartao
}

void TUCartao_de_Credito::TestarNumeroCartao(){
     Numero_de_cartao_de_credito numero_auxiliar; // objeto auxiliar para dar um Cartao_de_Credito::Set

    try{
        numero_auxiliar.Set(VALOR_VALIDO_NUMERO); // seta o atributo do numero de cartao de credito para o valor válido
        cartao->Set(numero_auxiliar); // seta o numero de cartao de credito do cartao como o numero auxiliar
        if(cartao->GetNumero().Get() == VALOR_VALIDO_NUMERO) // se o atributo do objeto numero de cartao de credito que é objeto do cartao for igual ao valor válido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUCartao_de_Credito::TestarCodigoSeguranca(){
     Codigo_de_Seguranca codigo_auxiliar; // objeto auxiliar para dar um Cartao_de_Credito::Set

    try{
        codigo_auxiliar.Set(VALOR_VALIDO_CODIGO); // seta o atributo do codigo de seguranca para o valor válido
        cartao->Set(codigo_auxiliar); // seta o codigo de seguranca do cartao como o codigo auxiliar
        if(cartao->GetCodigo().Get() == VALOR_VALIDO_CODIGO) // se o atributo do objeto codigo de seguranca que é objeto do cartao for igual ao valor válido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

void TUCartao_de_Credito::TestarDataValidade(){
     Data_de_Validade data_auxiliar; // objeto auxiliar para dar um Cartao_de_Credito::Set

    try{
        data_auxiliar.Set(VALOR_VALIDO_DATA); // seta o atributo da data de validade para o valor válido
        cartao->Set(data_auxiliar); // seta a data de validade do cartao como a data auxiliar
        if(cartao->GetData().Get() == VALOR_VALIDO_DATA) // se o atributo do objeto data de validade que é objeto do cartao for igual ao valor válido, entao estado = sucesso
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}

bool TUCartao_de_Credito::RunTesteNumeroCartao(){
    SetUp(); // aloca memoria para um objeto do tipo cartao de crédito
    TestarNumeroCartao(); // caso de teste do numero do cartao de crédito
    TearDown(); // desaloca memoria do objeto do tipo cartao de crédito
    return estado; // retorna resultado do teste
}

bool TUCartao_de_Credito::RunTesteCodigoSeguranca(){
    SetUp(); // aloca memoria para um objeto do tipo cartao de crédito
    TestarCodigoSeguranca(); // caso de teste do codigo de segurança
    TearDown(); // desaloca memoria do objeto do tipo cartao de crédito
    return estado; // retorna resultado do teste
}

bool TUCartao_de_Credito::RunTesteDataValidade(){
    SetUp(); // aloca memoria para um objeto do tipo cartao de crédito
    TestarDataValidade(); // caso de teste da data de validade
    TearDown(); // desaloca memoria do objeto do tipo cartao de crédito
    return estado; // retorna resultado do teste
}
