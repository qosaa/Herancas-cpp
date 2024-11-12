#include "carro.h"
#include "mota.h"
#include <iostream>
using namespace std;

int main() {
    //Objetos
    Veiculo* carro = new Carro("Porsche", 2);
    Veiculo* mota = new Mota("Kawasaki", "Volante");

    //chama metodos
    carro->mostraDetalhes();
    mota->mostraDetalhes();

    //limpa memoria
    delete carro;
    delete mota;

    return 0;
}
