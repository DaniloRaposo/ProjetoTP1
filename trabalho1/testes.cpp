#include <stdexcept>

#include "testes.h"
#include "dominios.h"
#include "entidades.h"

void TUUsuario::SetUp(){
    usuario = new Usuario(); // aloca espaço de memória para o objeto usuario
    estado = true;
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
            estado = true;
        else
            estado = false;
    }
    catch{
        estado = false
    }
}

void TUUsuario::TestarSenha(){
    Senha senha_auxiliar;// objeto auxiliar para dar um Usuario::Set

    try{
        senha_auxiliar.Set(VALOR_VALIDO_SENHA) // seta o atributo da senha para o valor valido
        usuario->Set(senha_auxiliar); // seta a senha do usuario como a senha auxiliar
        if(usuario->GetSenha().Get() == VALOR_VALIDO_SENHA)
            estado = true;
        else
            estado = false;
    }
    catch{
        estado = false;
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
