// vetor.hpp
#ifndef VETOR_HPP
#define VETOR_HPP

#include <vector>

class Vetor {
public:
    Vetor();
    void preencherAleatorio(int tamanho);
    std::vector<int> getVetor() const; // Changed to const
private:
    std::vector<int> vetor;
};

#endif
