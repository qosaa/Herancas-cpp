#ifndef MOTA_H
#define MOTA_H

#include "veiculo.h"
#include <iostream>
using namespace std;

class Mota : public Veiculo {
private:
    string tipoVolante;

public:
    Mota(const string& nome, const string& tipoVolante) : Veiculo(nome), tipoVolante(tipoVolante) {}

    void mostraDetalhes() const override;
};

#endif //mota h
