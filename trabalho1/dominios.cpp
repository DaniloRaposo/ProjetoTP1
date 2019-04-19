#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
#include "dominios.h"

// Todos os invalidarguments sao input invalido, o catch deve mostrar como deve ser um input correto

void codigo_de_evento::Validar(string input) throw (invalid_argument){

    //inicio da investigacao de input
    if (input.length() != 3){
        throw invalid_argument("input invalido");
    }
    //input tem 3 caracteres
    for(int n = 0, n<3, n++){
        if (isdigit(input[n]) == false){
            throw invalid_argument("input invalido");
        }
    }
}

void codigo_de_apresentacao::Validar(string input) throw (invalid_argument){

    //inicio da investigacao de input
    if (input.length() != 4){
        throw invalid_argument("input invalido");
    }
    //input tem 4 caracteres
    for(int n = 0, n<4, n++){
        if (isdigit(input[n]) == false){
            throw invalid_argument("input invalido");
        }
    }
}

void codigo_de_ingresso::Validar(string input) throw (invalid_argument){

    //inicio da investigacao de input
    if (input.length() != 5){
        throw invalid_argument("input invalido");
    }
    //input tem 5 caracteres
    for(int n = 0, n<5, n++){
        if (isdigit(input[n]) == false){
            throw invalid_argument("input invalido");
        }
    }
}

void nome_de_evento::Validar(string input) throw (invalid_argument){

    //inicio da investigacao de input
    if (input.length() != 20){
        throw invalid_argument("input invalido");
    }
    //input tem 20 caracteres
    for(int n = 0, n<20, n++){
        if (isdigit(input[n]) == false && isalpha(input[n]) == false && input[n] != ' '){
            //checa digitos validos
            throw invalid_argument("input invalido");
        }
        if (n<19 && input[n] == ' ' && input[n+1] == ' '){
            //checa espacos seguidos
            throw invalid_argument("input invalido");
        }
    }
}

void data::Validar(string input) throw (invalid_argument){
    if(input.lenght() != 8){
        throw invalid_argument("input invalido");
    }

    if(input[2] != '/' && input[5] != '/'){
        throw invalid_argument("input invalido");
    }

    for(int n = 0, n<8, n++){
        if(n == 2 || n == 5) n++;
        if (isdigit(input[n]) == false){
            throw invalid_argument("input invalido");
        }
    }

    int dia = atoi(input.substr(0,2).c_str());
    int mes = atoi(input.substr(3,2).c_str());
    int ano = atoi(input.substr(6,2).c_str());

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if(dia<1 || dia>31){
            throw invalid_argument("input invalido");
        }
    }
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia<1 || dia>30){
            throw invalid_argument("input invalido");
        }
    }
    else if(mes == 2){
        /*Como ano deve estar entre 2000 e 2099, o cálculo do ano bissexto pode ser simplificado
        para apenas a congruência com 4*/
        if(ano%4 != 0){
            if(dia<1 || dia>28){
                throw invalid_argument("input invalido");
            }
        }
        else{
            if(dia<1 || dia>29){
                throw invalid_argument("input invalido");
            }
        }
    }
    else throw invalid_argument("input invalido"); //mes invalido
}

void horario::Validar(string input) throw (invalid_argument){
    if(input.lenght() != 5){
        throw invalid_argument("input invalido");
    }

    if(input[2] != ':'){
        throw invalid_argument("input invalido");
    }

    for(int n = 0, n<5, n++){
        if(n == 2) n++;
        if (isdigit(input[n]) == false){
            throw invalid_argument("input invalido");
        }
    }

    int hora = atoi(input.substr(0,2).c_str());
    int minuto = atoi(input.substr(3,2).c_str());

    if(hora < 7 || hora > 22){
        throw invalid_argument("input invalido");
    }

    if(minuto != 00 || minuto != 15 || minuto != 30 || minuto != 45){
        throw invalid_argument("input invalido");
    }
}

void preco::Validar(float input) throw (invalid_argument){
    input = floorf(input * 100) / 100; //arredonda para duas casas decimais
    if ( 0 < input || input > 1000){
        throw invalid_argument("input invalido");
    }
}

void numero_de_sala::Validar(int input) throw (invalid_argument){
    if ( 1 < input || input > 10){
        throw invalid_argument("input invalido");
    }
}

void cidade::Validar(string input) throw (invalid_argument){

    //inicio da investigacao de input
    if (input.length() != 16){
        throw invalid_argument("input invalido");
    }
    //input tem 16 caracteres
    for(int n = 0, n<16, n++){
        if (isalpha(input[n]) == false && input[n] != '.' && input[n] != ' '){
            //checa digitos validos
            throw invalid_argument("input invalido");
        }
        if (n>0 && input[n] == '.' && isalpha(input[n-1]) == false ){
            //checa se alpha precede ponto
            throw invalid_argument("input invalido");
        }
        if (n<19 && input[n] == ' ' && input[n+1] == ' '){
            //checa espacos seguidos
            throw invalid_argument("input invalido");
        }
        //nao é necessário checar se tem no min uma letra, pois isso é uma regra emergente
    }
}

void estado::Validar(string input) throw (invalid_argument){

    /*AC, AL, AP, AM, BA, CE, DF, ES, GO, MA, MT, MS, MG, PA,
      PB, PR, PE, PI, RJ, RN, RS, RO, RR, SC, SP, SE, TO*/
    if(input!="AC" && input!="AL" && input!="AP" && input!="AM" && input!="BA" &&
       input!="CE" && input!="DF" && input!="ES" && input!="GO" && input!="MA" &&
       input!="MT" && input!="MS" && input!="MG" && input!="PA" && input!="PB" &&
       input!="PR" && input!="PE" && input!="PI" && input!="RJ" && input!="RN" &&
       input!="RS" && input!="RO" && input!="RR" && input!="SC" && input!="SP" &&
       input!="SE" && input!="TO"){
        throw invalid_argument("input invalido");
    }
}

void disponibilidade::Validar(int input) throw (invalid_argument){

    if ( 0 < input || input > 250){
        throw invalid_argument("input invalido");
    }
}

void classe_de_evento::Validar(int input) throw (invalid_argument){

    if ( 1 < input || input > 4){
        throw invalid_argument("input invalido");
    }
}

void faixa_etaria::Validar(string input) throw (invalid_argument){

    /*AC, AL, AP, AM, BA, CE, DF, ES, GO, MA, MT, MS, MG, PA,
      PB, PR, PE, PI, RJ, RN, RS, RO, RR, SC, SP, SE, TO*/
    if(input!="L" && input!="10" && input!="12" && input!="14" && input!="16" && input!="18"){
        throw invalid_argument("input invalido");
    }
}

void cpf::Validar(string input) throw (invalid_argument){

    // XXX.XXX.XXX-XX
    // 01234567890123

    // 111.444.777-35 é válido, por exemplo

    if (input.length() != 14){
        throw invalid_argument("input invalido");
    }

    if (input[3]!='.' || input[7]!='.' || input[11]!='-'){
        throw invalid_argument("input invalido");
    }

    for(int n = 0, n<14, n++){
        if(n=3 || n=7 || n=11) n++;
        if (isdigit(input[n]) == false){
            throw invalid_argument("input invalido");
        }
    }
    // a partir daqui só falta checar digitos verificadores


    int soma = 0;
    int multiplicador = 10;

    //checa digito verificador 1
    for(int n = 0, n<11, n++){
        if(n=3 || n=7 || n=11) n++;
        soma += multiplicador * (int (input[n] - '0'))
        multiplicador--;
    }

    soma = soma%11;
    if (soma<2) {
        if ( int(input[12]-'0') != 0 ) throw invalid_argument("input invalido");
    }
    else {
        if ( int(input[12]-'0') != 11-soma ) throw invalid_argument("input invalido");
    }

    //checar digito verificador 2
    soma = 0;
    multiplicador = 11;

    for(int n = 0, n<13, n++){
        if(n=3 || n=7 || n=11) n++;
        soma += multiplicador * (int (input[n] - '0'))
        multiplicador--;
    }

    soma = soma%11;
    if (soma<2) {
        if ( int(input[13]-'0') != 0 ) throw invalid_argument("input invalido");
    }
    else {
        if ( int(input[13]-'0') != 11-soma ) throw invalid_argument("input invalido");
    }
}

void senha::Validar(string input) throw (invalid_argument){

    //inicio da investigacao de input
    if (input.length() != 6){
        throw invalid_argument("input invalido");
    }
    int upper = 0, lower = 0, digit = 0;
    for(int n = 0, n<6, n++){
        // checa digitos validos
        if (isalpha(input[n]) == false && isdigit(input[n]) == false) throw invalid_argument("input invalido");

        if ( isupper(input[n]) == true ) upper++;
        if ( islower(input[n]) == true ) lower++;
        if ( isdigit(input[n]) == true ) digit++;
        //nao é necessário checar se tem no min uma letra, pois isso é uma regra emergente
    }

    if( upper == 0 || lower == 0 || digit == 0 )  throw invalid_argument("input invalido");
}

void cartao_de_credito::Validar(string input) throw (invalid_argument){

    if (input.length() != 16){
        throw invalid_argument("input invalido");
    }
    for(int n = 0; n < 16; n++){
        if (isdigit(input[n]) == false){
            throw invalid_argument("input invalido");
        }
    }
    int numeros[16];

    for(int n = 0; n<16; n++){
        numeros[15-n] = input[n]-'0';
    }
    int soma = 0;
    for(int n = 0; n<16; n++){
        if(n%2 == 1) numeros[n] *= 2;
        if(numeros[n] > 9) numeros[n] -= 9;
        soma += numeros[n];
    }

    if(soma%10 != 0){
        throw invalid_argument("input invalido");
    }

};

void codigo_de_seguranca::Validar(string input) throw (invalid_argument){

    if (input.length() != 3){
        throw invalid_argument("input invalido");
    }
    for(int n = 0; n < 3; n++){
        if (isdigit(input[n]) == false){
            throw invalid_argument("input invalido");
        }
    }
};

void data_de_validade::Validar(string input) throw (invalid_argument){

    // MM/AA
    // 01234

    if(input.lenght() != 5){
        throw invalid_argument("input invalido");
    }

    if(input[2] != '/'){
        throw invalid_argument("input invalido");
    }

    for(int n = 0, n<5, n++){
        if(n == 2) n++;
        if (isdigit(input[n]) == false){
            throw invalid_argument("input invalido");
        }
    }

    int mes = atoi(input.substr(0,2).c_str());

    if(mes<1 || mes>12){
            throw invalid_argument("input invalido");
    }

}

//
