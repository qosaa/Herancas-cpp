#include "carro.h"
#include <iostream>
using namespace std;

void Carro::mostraDetalhes() const {
    cout << "Carro: " << nome << "Numero de portas: " << numeroPortas << endl;
}
