#include <iostream>
#include <chrono> // para medir o tempo de execução
#include "vetor.hpp"
#include "minmax.hpp"

using namespace std;
using namespace std::chrono;

int main() {
    int tamanhoVetor;
    int escolha = 0; // Inicialize escolha para garantir que entre no loop
    while (escolha != 5) {
        cout << "Digite o tamanho do vetor: ";
        cin >> tamanhoVetor;

        do {
            cout << "1. MinMax1, 2. MinMax2, 3. MinMax3, 4. Default (sem calcular o minmax), 5. Sair: ";
            cin >> escolha;
        } while (escolha <= 0 || escolha > 5); // Ajuste na condição do loop

        if (escolha == 5) // Verifique se a escolha é para sair antes de criar o vetor
            break;

        Vetor vetor;
        auto start = high_resolution_clock::now(); // Inicia a contagem de tempo
        for (int i = 0; i < 10; i++) {
            vetor.preencherAleatorio(tamanhoVetor);

            // Exibindo o vetor preenchido
            cout << "Vetor preenchido aleatoriamente com " << tamanhoVetor << " elementos:" << endl;
            for (int num : vetor.getVetor()) {
                cout << num << " ";
            }
            cout << endl;

            int Max, Min;

            switch (escolha) {
                case 1:
                    minmax1(vetor.getVetor(), Max, Min);
                    break;
                case 2:
                    minmax2(vetor.getVetor(), Max, Min);
                    break;
                case 3:
                    minmax3(vetor.getVetor(), Max, Min);
                    break;
                default:
                    // Não faz nada, apenas continua sem calcular minmax
                    break;
            }

            if (escolha != 4) { // Exibir apenas para os casos que calculam minmax
                cout << "Maximo: " << Max << ", Minimo: " << Min << endl;
            }

        }
        auto stop = high_resolution_clock::now(); // Finaliza a contagem de tempo
        auto duration = duration_cast<nanoseconds>(stop - start); // Calcula a duração em microssegundos
        cout << "Tempo de execução: " << (duration.count() / 10) << " microseconds" << endl;
    }

    return 0;
}
