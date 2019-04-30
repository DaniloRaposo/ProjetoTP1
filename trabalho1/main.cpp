

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

    printf("(o sistema avisa em caso de erro)\nTestes de dominios:\n\n");

    if      (testeCodigo_de_evento.run() == false)          printf("Erro em testeCodigo_de_evento\n");
    else if (testeCodigo_de_apresentacao.run() == false)    printf("Erro em testeCodigo_de_apresentacao\n");
    else if (testeCodigo_de_ingresso.run() == false)        printf("Erro em testeCodigo_de_ingresso\n");
    else if (testeNome_de_evento.run() == false)            printf("Erro em testeNome_de_evento\n");
    else if (testeData.run() == false)                      printf("Erro em testeData\n");
    else if (testeHorario.run() == false)                   printf("Erro em testeHorario\n");
    else if (testePreco.run() == false)                     printf("Erro em testePreco\n");
    else if (testeNumero_de_sala.run() == false)            printf("Erro em testeNumero_de_sala\n");
    else if (testeCidade.run() == false)                    printf("Erro em testeCidade\n");
    else if (testeEstado.run() == false)                    printf("Erro em testeEstado\n");
    else if (testeDisponibilidade.run() == false)           printf("Erro em testeDisponibilidade\n");
    else if (testeClasse_de_evento.run() == false)          printf("Erro em testeClasse_de_evento\n");
    else if (testeFaixa_etaria.run() == false)              printf("Erro em testeFaixa_etaria\n");
    else if (testeCpf.run() == false)                       printf("Erro em testeCpf\n");
    else if (testeSenha.run() == false)                     printf("Erro em testeSenha\n");
    else if (testeNumero_de_cartao_de_credito.run() == false) printf("Erro em testeNumero_de_cartao_de_credito\n");
    else if (testeCodigo_de_seguranca.run() == false)       printf("Erro em testeCodigo_de_seguranca\n");
    else if (testeData_de_validade.run() == false)          printf("Erro em testeData_de_validade\n");
    else printf("Tudo ok com testes de dominios.\n");



    // TESTES DE ENTIDADES

    TUUsuario               testeUsuario;
    TUEvento                testeEvento;
    TUApresentacao          testeApresentacao;
    TUIngresso              testeIngresso;
    TUCartao_de_Credito     testeCartao_de_credito;

    printf("\nTestes de entidades:\n\n");

    if      (testeUsuario.RunTesteCpf() == false)           printf("Erro em testeUsuario.RunTesteCpf\n");
    else if (testeUsuario.RunTesteSenha() == false)         printf("Erro em testeUsuario.RunTesteSenha\n");
    else if (testeEvento.RunTesteCidade() == false)             printf("Erro em testeEvento.RunTesteCidade\n");
    else if (testeEvento.RunTesteClasseEvento() == false)       printf("Erro em testeEvento.RunTesteClasseEvento\n");
    else if (testeEvento.RunTesteCodigoEvento() == false)       printf("Erro em testeEvento.RunTesteCodigoEvento\n");
    else if (testeEvento.RunTesteEstado() == false)             printf("Erro em testeEvento.RunTesteEstado\n");
    else if (testeEvento.RunTesteFaixaEtaria() == false)        printf("Erro em testeEvento.RunTesteFaixaEtaria\n");
    else if (testeEvento.RunTesteNomeEvento() == false)         printf("Erro em testeEvento.RunTesteNomeEvento\n");
    else if (testeEvento.RunTesteEstado() == false)             printf("Erro em testeEvento.RunTesteEstado\n");
    else if (testeApresentacao.RunTesteCodigoApresentacao() == false)      printf("Erro em testeApresentacao.RunTesteCodigoApresentacao\n");
    else if (testeApresentacao.RunTesteData() == false)         printf("Erro em testeApresentacao.RunTesteData\n");
    else if (testeApresentacao.RunTesteDisponibilidade() == false)      printf("Erro em testeApresentacao.RunTesteDisponibilidade\n");
    else if (testeApresentacao.RunTesteHorario() == false)      printf("Erro em testeApresentacao.RunTesteHorario\n");
    else if (testeApresentacao.RunTesteNumeroSala() == false)   printf("Erro em testeApresentacao.RunTesteNumeroSala\n");
    else if (testeApresentacao.RunTestePreco() == false)      printf("Erro em testeApresentacao.RunTestePreco\n");
    else if (testeIngresso.RunTesteCodigoIngresso() == false)   printf("Erro em testeIngresso.RunTesteCodigoIngresso\n");
    else if (testeCartao_de_credito.RunTesteCodigoSeguranca() == false) printf("Erro em testeCartao_de_credito.RunTesteCodigoSeguranca\n");
    else if (testeCartao_de_credito.RunTesteDataValidade() == false) printf("Erro em testeCartao_de_credito.RunTesteDataValidade\n");
    else if (testeCartao_de_credito.RunTesteNumeroCartao() == false) printf("Erro em testeCartao_de_credito.RunTesteNumeroCartao\n");
    else printf("Tudo ok com testes de entidade.\n");

    return 0;
}
