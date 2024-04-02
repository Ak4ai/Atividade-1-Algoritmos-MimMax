#include <iostream>
#include <chrono> // para medir o tempo de execução
#include "vetor.hpp"
#include "minmax.hpp"
#include <fstream> // Para lidar com arquivos de texto

using namespace std;
using namespace std::chrono;

int main() {
    ofstream outputFile("tempos_execucao.txt", ofstream::out | ofstream::trunc);
    Vetor vetor;
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
                vetor.preencherAleatorio(tamanhoVetor);
                if (j == 1) {
                    vetor.ordenarCrescente();
                    cout << "Crescente" << endl;
                }
                else if (j == 2) {
                    vetor.ordenarDecrescente();
                    cout << "Decrescente" << endl;
                }
                int Max, Min;
                minmax1(vetor.getVetor(), Max, Min);
                // Exibindo o resultado
                cout << "Maximo: " << Max << ", Minimo: " << Min << endl;
            }
            auto stop = high_resolution_clock::now(); // Finaliza a contagem de tempo novamente
            auto duration = duration_cast<microseconds>(stop - start); // Calcula a duração em nanossegundos
            cout << "Tempo de execução do MinMax1: " << (duration.count() / 10) << " microseconds" << endl;
                if (j == 1) {
                    vetor.ordenarCrescente();
                    outputFile << "Crescente: " << endl;
                }
                else if (j == 2) {
                    vetor.ordenarDecrescente();
                    outputFile << "Decrescente: " << endl;
                }
            outputFile << "Tempo de execução do MinMax1: " << (duration.count() / 10) << " microseconds" << endl;
        }

        start = high_resolution_clock::now(); // Inicia a contagem de tempo novamente

        // Executar MinMax2
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < 10; i++) {
                vetor.preencherAleatorio(tamanhoVetor);
                if (j == 1) {
                    vetor.ordenarCrescente();
                    cout << "Crescente" << endl;
                }
                else if (j == 2) {
                    vetor.ordenarDecrescente();
                    cout << "Decrescente" << endl;
                }
                int Max, Min;
                minmax2(vetor.getVetor(), Max, Min);
                // Exibindo o resultado
                cout << "Maximo: " << Max << ", Minimo: " << Min << endl;
            }
            auto stop = high_resolution_clock::now(); // Finaliza a contagem de tempo novamente
            auto duration = duration_cast<microseconds>(stop - start); // Calcula a duração em nanossegundos
            cout << "Tempo de execução do MinMax2: " << (duration.count() / 10) << " microseconds" << endl;
                            if (j == 1) {
                    vetor.ordenarCrescente();
                    outputFile << "Crescente: " << endl;
                }
                else if (j == 2) {
                    vetor.ordenarDecrescente();
                    outputFile << "Decrescente: " << endl;
                }
            outputFile << "Tempo de execução do MinMax2: " << (duration.count() / 10) << " microseconds" << endl;
        }

        // Executar MinMax3
        for (int j = 0; j < 3; j++) {
            for (int i = 0; i < 10; i++) {
                vetor.preencherAleatorio(tamanhoVetor); // Preenche o vetor novamente para cada iteração
                if (j == 1) {
                    vetor.ordenarCrescente(); // Ordena o vetor em ordem crescente
                    cout << "Crescente" << endl;
                }
                else if (j == 2) {
                    vetor.ordenarDecrescente(); // Ordena o vetor em ordem decrescente
                    cout << "Decrescente" << endl;
                }
                int Max, Min;
                minmax3(vetor.getVetor(), Max, Min);
                // Exibindo o resultado
                cout << "Maximo: " << Max << ", Minimo: " << Min << endl;
            }
            auto stop = high_resolution_clock::now(); // Finaliza a contagem de tempo novamente
            auto duration = duration_cast<microseconds>(stop - start); // Calcula a duração em nanossegundos
            cout << "Tempo de execução do MinMax2: " << (duration.count() / 10) << " microseconds" << endl;
                            if (j == 1) {
                    vetor.ordenarCrescente();
                    outputFile << "Crescente: " << endl;
                }
                else if (j == 2) {
                    vetor.ordenarDecrescente();
                    outputFile << "Decrescente: " << endl;
                }
            outputFile << "Tempo de execução do MinMax3: " << (duration.count() / 10) << " microseconds" << endl;
        }
    }

    return 0;
}
