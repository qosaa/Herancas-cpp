#ifndef VEICULO_H
#define VEICULO_H

#include <string>
#include <iostream>
using namespace std;

class Veiculo {
protected:
    string nome;

public:
    Veiculo(const string& nome) : nome(nome) {} //construtor
    virtual void mostraDetalhes() const = 0; //metodo virtual
    virtual ~Veiculo() {} //desconstrutor
};

#endif
