#include <stdexcept>

#include "testes.h"
#include "dominios.h"
#include "entidades.h"

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
        if(evento->GetCodigo().Get() == VALOR_VALIDO_CODIGO) // se o atributo do objeto codigo de evvento que é objeto do evento for igual ao valor valido, entao estado = sucesso
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
    Classe_de_Evento classe_auxiliar;

    try{
        classe_auxiliar.Set(VALOR_VALIDO_CLASSE);
        evento->Set(classe_auxiliar);
        if(evento->GetClasse().Get() == VALOR_VALIDO_CLASSE)
            estado = SUCESSO;
        else
            estado = FALHA;
    }
    catch{
        estado = FALHA;
    }
}
