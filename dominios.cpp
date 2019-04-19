#include <string>
#include <iostream>

#include "dominios.hpp"

void DataDeValidade::validar(std::string data_de_validade){
  int mes, ano;
  std::string mes_string = "", ano_string = ""; // inicia strings auxiliares para a verificação de validação


  if(data_de_validade.size() != 5){

  }

  if(data_de_validade.at(2) != '/'){

  }
 // pega os dois primeiros caracteres, que correspondem ao mes e coloca eles na string auxiliar
  mes_string += data_de_validade.at(0);
  mes_string += data_de_validade.at(1);
 // pega os ultimos dois caracteres, que correspondem ao ano e coloca eles na string auxiliar
  ano_string = data_de_validade.at(3);
  ano_string = data_de_validade.at(4);
// transforma as duas strings em inteiros a partir da função std::stoi.
  mes = std::stoi(mes_string);
  ano = std::stoi(ano_string);

  if(mes > MES_MAXIMO || mes < MES_MINIMO){

  }

  if (ano > ANO_MAXIMO || ano < ANO_MINIMO) {

  }
}

void DataDeValidade::setDataDeValidade(std::string data_de_validade){
  validar(data_de_validade);
  this->data_de_validade = data_de_validade;
}

int DataDeValidade::getDataDeValidade(){
  return this->data_de_validade;
}

void CodigoDeSeguranca::validar(std::string codigo_de_seguranca){
  if(codigo_de_seguranca.size() != 3){

  }
  if(std::stoi(codigo_de_seguranca) > CODIGO_MAXIMO || std::stoi(codigo_de_seguranca) < CODIGO_MINIMO){

  }
}

void CodigoDeSeguranca::setCodigoDeSeguranca(std::string codigo_de_seguranca){
  validar(codigo_de_seguranca);
  this->codigo_de_seguranca = codigo_de_seguranca;
}

std::string CodigoDeSeguranca::getCodigoDeSeguranca(){
  return this->codigo_de_seguranca;
}
