
#include <stdio.h>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"
#include "testesdominios.h"

    //este main roda todos os testes de dominio e entidade

int main(){

    // TESTES DE DOMINIOS

    TUCodigo_de_evento              testeCodigo_de_evento;
    TUCodigo_de_apresentacao        testeCodigo_de_apresentacao;
    TUCodigo_de_ingresso            testeCodigo_de_ingresso;
    TUNome_de_evento                testeNome_de_evento;
    TUData                          testeData;
    TUHorario                       testeHorario;
    TUPreco                         testePreco;
    TUNumero_de_sala                testeNumero_de_sala;
    TUCidade                        testeCidade;
    TUEstado                        testeEstado;
    TUDisponibilidade               testeDisponibilidade;
    TUClasse_de_evento              testeClasse_de_evento;
    TUFaixa_etaria                  testeFaixa_etaria;
    TUCpf                           testeCpf;
    TUSenha                         testeSenha;
    TUNumero_de_cartao_de_credito   testeNumero_de_cartao_de_credito;
    TUCodigo_de_seguranca           testeCodigo_de_seguranca;
    TUData_de_validade              testeData_de_validade;

    if (testeCodigo_de_evento.run() == FALHA) printf("Erro em testeCodigo_de_evento\n");
    else if (testeCodigo_de_apresentacao.run() == FALHA) printf("Erro em testeCodigo_de_apresentacao\n");
    else if (testeCodigo_de_ingresso.run() == FALHA) printf("Erro em testeCodigo_de_ingresso\n");
    else if (testeNome_de_evento.run() == FALHA) printf("Erro em testeNome_de_evento\n");
    else if (testeData.run() == FALHA) printf("Erro em testeData\n");
    else if (testeHorario.run() == FALHA) printf("Erro em testeHorario\n");
    else if (testePreco.run() == FALHA) printf("Erro em testePreco\n");
    else if (testeNumero_de_sala.run() == FALHA) printf("Erro em testeNumero_de_sala\n");
    else if (testeCidade.run() == FALHA) printf("Erro em testeCidade\n");
    else if (testeEstado.run() == FALHA) printf("Erro em testeEstado\n");
    else if (testeDisponibilidade.run() == FALHA) printf("Erro em testeDisponibilidade\n");
    else if (testeClasse_de_evento.run() == FALHA) printf("Erro em testeClasse_de_evento\n");
    else if (testeFaixa_etaria.run() == FALHA) printf("Erro em testeFaixa_etaria\n");
    else if (testeCpf.run() == FALHA) printf("Erro em testeCpf\n");
    else if (testeSenha.run() == FALHA) printf("Erro em testeSenha\n");
    else if (testeNumero_de_cartao_de_credito.run() == FALHA) printf("Erro em testeNumero_de_cartao_de_credito\n");
    else if (testeCodigo_de_seguranca.run() == FALHA) printf("Erro em testeCodigo_de_seguranca\n");
    else if (testeData_de_validade.run() == FALHA) printf("Erro em testeData_de_validade\n");
    else printf("\nTudo ok com testes de dominios.\n");

    // TESTES DE ENTIDADES

}
