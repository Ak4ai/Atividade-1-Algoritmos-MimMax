#include "vetor.hpp"
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <functional> // Adicione este cabeçalho para std::greater

Vetor::Vetor() {
    srand(time(0));
}

void Vetor::preencherAleatorio(int tamanho) {
    vetor.clear();
    for (int i = 0; i < tamanho; ++i) {
        vetor.push_back(rand() % 1000); // Gera números aleatórios entre 0 e 999
    }
}

std::vector<int> Vetor::getVetor() const {
    return vetor;
}

void Vetor::ordenarCrescente() {
    std::sort(vetor.begin(), vetor.end());
}

void Vetor::ordenarDecrescente() {
    std::sort(vetor.begin(), vetor.end(), std::greater<int>());
}
