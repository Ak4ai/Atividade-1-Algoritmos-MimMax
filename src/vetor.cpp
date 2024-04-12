#include "vetor.hpp"
#include <cstdlib>
#include <algorithm>
#include <functional> // Adicione este cabeçalho para std::greater#include <iostream>
#include <chrono> // para medir o tempo de execução
#include <fstream> // Para lidar com arquivos de texto
#include <iostream>

using namespace std;
using namespace std::chrono;


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

void Vetor::run() {
        ofstream outputFile("datasets/tempos_execucao.txt", ofstream::out | ofstream::trunc);
        for (int tamanhoVetor = 1000; tamanhoVetor <= 1000000; tamanhoVetor *= 10) {
        if (tamanhoVetor == 1000000) {
            tamanhoVetor = 500000;
        }
        cout << "----------------------------------------------------------------------" << tamanhoVetor << endl;
        outputFile << "----------------------------------------------------------------------" << tamanhoVetor << endl;
        auto start = high_resolution_clock::now(); // Inicia a contagem de tempo

        // Executar MinMax1
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < 10; i++) {
                preencherAleatorio(tamanhoVetor);
                if (j == 1) {
                    ordenarCrescente();
                    cout << "Crescente" << endl;
                }
                else if (j == 2) {
                    ordenarDecrescente();
                    cout << "Decrescente" << endl;
                }
                int Max, Min;
                minmax1(getVetor(), Max, Min);
                // Exibindo o resultado
                cout << "Maximo: " << Max << ", Minimo: " << Min << endl;
            }
            auto stop = high_resolution_clock::now(); // Finaliza a contagem de tempo novamente
            auto duration = duration_cast<microseconds>(stop - start); // Calcula a duração em nanossegundos
            cout << "Tempo de execução do MinMax1: " << (duration.count() / 10) << " microseconds" << endl;
                if (j == 1) {
                    ordenarCrescente();
                    outputFile << "Crescente: " << endl;
                }
                else if (j == 2) {
                    ordenarDecrescente();
                    outputFile << "Decrescente: " << endl;
                }
            outputFile << "Tempo de execução do MinMax1: " << (duration.count() / 10) << " microseconds" << endl;
        }

        start = high_resolution_clock::now(); // Inicia a contagem de tempo novamente

        // Executar MinMax2
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < 10; i++) {
                preencherAleatorio(tamanhoVetor);
                if (j == 1) {
                    ordenarCrescente();
                    cout << "Crescente" << endl;
                }
                else if (j == 2) {
                    ordenarDecrescente();
                    cout << "Decrescente" << endl;
                }
                int Max, Min;
                minmax2(getVetor(), Max, Min);
                // Exibindo o resultado
                cout << "Maximo: " << Max << ", Minimo: " << Min << endl;
            }
            auto stop = high_resolution_clock::now(); // Finaliza a contagem de tempo novamente
            auto duration = duration_cast<microseconds>(stop - start); // Calcula a duração em nanossegundos
            cout << "Tempo de execução do MinMax2: " << (duration.count() / 10) << " microseconds" << endl;
                            if (j == 1) {
                    ordenarCrescente();
                    outputFile << "Crescente: " << endl;
                }
                else if (j == 2) {
                    ordenarDecrescente();
                    outputFile << "Decrescente: " << endl;
                }
            outputFile << "Tempo de execução do MinMax2: " << (duration.count() / 10) << " microseconds" << endl;
        }

        // Executar MinMax3
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < 10; i++) {
                preencherAleatorio(tamanhoVetor); // Preenche o vetor novamente para cada iteração
                if (j == 1) {
                    ordenarCrescente(); // Ordena o vetor em ordem crescente
                    cout << "Crescente" << endl;
                }
                else if (j == 2) {
                    ordenarDecrescente(); // Ordena o vetor em ordem decrescente
                    cout << "Decrescente" << endl;
                }
                int Max, Min;
                minmax3(getVetor(), Max, Min);
                // Exibindo o resultado
                cout << "Maximo: " << Max << ", Minimo: " << Min << endl;
            }
            auto stop = high_resolution_clock::now(); // Finaliza a contagem de tempo novamente
            auto duration = duration_cast<microseconds>(stop - start); // Calcula a duração em nanossegundos
            cout << "Tempo de execução do MinMax2: " << (duration.count() / 10) << " microseconds" << endl;
                            if (j == 1) {
                    ordenarCrescente();
                    outputFile << "Crescente: " << endl;
                }
                else if (j == 2) {
                    ordenarDecrescente();
                    outputFile << "Decrescente: " << endl;
                }
            outputFile << "Tempo de execução do MinMax3: " << (duration.count() / 10) << " microseconds" << endl;
        }
    }
}