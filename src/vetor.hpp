// vetor.hpp
#ifndef VETOR_HPP
#define VETOR_HPP

#include <vector>
#include <ctime> // inclua ctime para srand e time
#include "minmax.hpp"

class Vetor {
public:
    Vetor();
    void preencherAleatorio(int tamanho);
    std::vector<int> getVetor() const; // Changed to const
    void ordenarCrescente();
    void ordenarDecrescente();
    void run();
private:
    std::vector<int> vetor;
};

#endif