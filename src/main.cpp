#include <iostream>
#include <chrono> // para medir o tempo de execução
#include "vetor.hpp"
#include "minmax.hpp"
#include <fstream> // Para lidar com arquivos de texto

using namespace std;
using namespace std::chrono;

int main() {
    Vetor vetor;
    vetor.run();
    return 0;
}
