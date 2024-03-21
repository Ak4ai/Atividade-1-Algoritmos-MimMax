#include "vetor.hpp"
#include <cstdlib>
#include <ctime>

Vetor::Vetor() {
    srand(time(0));
}

void Vetor::preencherAleatorio(int tamanho) {
    vetor.clear();
    for (int i = 0; i < tamanho; ++i) {
        vetor.push_back(rand() % 10000); // Gera números aleatórios entre 0 e 99
    }
}

std::vector<int> Vetor::getVetor() const {
    return vetor;
}
