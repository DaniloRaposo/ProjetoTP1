#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <string>

class DataDeValidade{
private:
  std::string data_de_validade;

  const static int MES_MAXIMO = 12;
  const static int MES_MINIMO = 1;
  const static int ANO_MAXIMO = 0;
  const static int ANO_MINIMO = 99;

  void validar(std::string);

public:
  void setDataDeValidade(std::string);
  std::string getDataDeValidade();
};

class CodigoDeSeguranca{
private:
  std::string codigo_de_seguranca;

  const static int CODIGO_MAXIMO = 999;
  const static int CODIGO_MINIMO = 0;

  void validar(std::string);

public:
  void setCodigoDeSeguranca(std::string);
  std::string getCodigoDeSeguranca();
};

#endif
