#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <stdexcept>

#include "dominios.h"

class Usuario{
  // cada objeto do tipo usuário vai possuir como atributo um objeto do tipo cpf e um objeto do tipo senha
    private:
        Cpf cpf; // objeto da classe cpf
        Senha senha; // objeto da classe senha

    public:
        // nos consideramos que o objeto imput da classe cpf possui valor válido, já que ele foi setado apartir do método cpf::Set
        void Set(const Cpf &input) throw(invalid_argument){ // seta o valor do cpf, imput é o cpf que será setado
            this->cpf = input;
        }

        inline Cpf GetCpf(){
            return cpf;
        }

        void Set(const Senha &input) throw(invalid_argument){ // seta o valor da senha, imput é a senha a ser setada
            this->senha = input;
        }

        inline Senha GetSenha(){
            return senha;
        }
};

class Evento{
  // cada objeto do tipo evento vai possuir como atributos objetos do tipo codigo_de_evento, nome_de_evento, cidade, estado, classe_de_evento e faixa_etaria
    private:
        Codigo_de_Evento codigo;
        Nome_de_Evento nome;
        Cidade cidade;
        Estado estado;
        Classe_de_Evento classe;
        Faixa_Etaria faixa;

    public:
        void Set(const Codigo_de_Evento &input) throw(invalid_argument){
            this->codigo= input;
        }

        inline Codigo_de_Evento GetCodigo(){
            return codigo;
        }

        void Set(const Nome_de_Evento &input) throw(invalid_argument){
            this->nome = input;
        }

        inline Nome_de_Evento GetNome(){
            return nome;
        }

        void Set(const Cidade &input) throw(invalid_argument){
            this->cidade = input
        }

        inline Cidade GetCidade(){
            return cidade;
        }

        void Set(const Estado &input) throw(invalid_argument){
            this->estado = input;
        }

        inline Estado GetEstado(){
            return estado;
        }

        void Set(const Classe_de_Evento &input) throw(invalid_argument){
            this->classe = input;
        }

        inline Classe_de_Evento GetClasse(){
            return classe;
        }

        void Set(const Faixa_Etaria &input) throw(invalid_argument){
            this->faixa = input;
        }

        inline Faixa_Etaria GetFaixa(){
            return faixa;
        }
};

class Apresentacao{
// cada objeto da classe Apresentação possui como atributo um objeto da classe Codigo_de_Apresentação, Data, Horario, Preço, Número_de_Sala e Disponibilidade
    private:
        Codigo_de_Apresentação codigo;
        Data data;
        Horario horario;
        Preco preco;
        Numero_de_Sala sala;
        Disponibilidade disponibilidade;

    public:
        void Set(const Codigo_de_Apresentação &input) throw(invalid_argument){
            this->codigo = input;
        }

        inline Codigo_de_Apresentação GetCodigo(){
            return codigo;
        }

        void Set(const Data &input) throw(invalid_argument){
            this->data = input;
        }

        inline Data GetData(){
            return data;
        }

        void Set(const Horario &input) throw(invalid_argument){
            this->horario = input;
        }

        inline Horario GetHorario(){
            return horario;
        }

        void Set(const Preco &input) throw(invalid_argument){
            this->preco = input;
        }

        inline Preco GetPreco(){
            return preco;
        }

        void Set(const Numero_de_Sala &input) throw(invalid_argument){
            this->sala = input;
        }

        inline Numero_de_Sala GetSala(){
            return sala;
        }

        void Set(const Disponibilidade &input) throw(invalid_argument){
            this->disponibilidade = input;
        }

        inline Disponibilidade GetDisponibilidade(){
            return disponibilidade;
        }
};

class Ingresso{
// a classe ingresso possui como único atributo um objeto da classe código_de_ingresso
    private:
        Codigo_de_Ingresso codigo;

    public:
        void Set(const Codigo_de_Ingresso &input) throw(invalid_argument){
            this->codigo = input;
        }

        inline Codigo_de_Ingresso GetCodigo(){
            return codigo;
        }
};

class Cartao_de_Credito{
// a classe Cartao_de_Credito possui como atributos objetos das classer numero_de_cartao, codigo_de_seguranca e data_de_validade
    private:
        Numero_de_Cartao numero;
        Codigo_de_Seguranca codigo;
        Data_de_Validade data;

    public:
        void Set(const Numero_de_Cartao &input) throw(invalid_argument){
            this->numero = input;
        }

        inline Numero_de_Cartao GetNumero(){
            return numero;
        }

        void Set(const Codigo_de_Seguranca &input) throw(invalid_argument){
            this->codigo = input;
        }

        inline Codigo_de_Seguranca GetCodigo(){
            return codigo;
        }

        void Set(const Data_de_Validade &input) throw(invalid_argument){
            this->data = input;
        }

        inline Data_de_Validade GetData(){
            return data;
        }
};

#endif //ENTIDADES_H_INCLUDED
