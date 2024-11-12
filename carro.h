#ifndef CARRO_H
#define CARRO_H

#include "veiculo.h"
#include <iostream>
using namespace std;

class Carro : public Veiculo {
private:
    int numeroPortas;

public:
    Carro(const string& nome, int numeroPortas) 
        : Veiculo(nome), numeroPortas(numeroPortas) {} //construtor direto

    void mostraDetalhes() const override {
        cout << "Carro: " << nome << " Numero de portas: " << numeroPortas << endl;
    }
};

#endif
