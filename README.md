# <p align="center">Atividade2-LabAEDS</p>

<p align="center">
  <img src="https://github.com/Ak4ai/Atividade2-LabAEDS/assets/129908980/6b2bcc3f-bc94-4c8b-b4f4-21bfc66c9c0c">
</p>


| All | 1 | 2 | 3 | 12 |
|--------|---|---|---|----|
| ![MinMax](minmax.png) | ![1](minmax1.png) | ![2](minmax2.png) | ![3](minmax3.png) | ![12](minmax12.png) |

# Programa de Análise de Desempenho do Algoritmo MinMax

## Descrição
Este programa realiza uma análise de desempenho de diferentes implementações do algoritmo MinMax, comparando seus tempos de execução para vetores de diferentes tamanhos e estados de ordenação.

## Introdução
Otimização de algoritmos é uma área fundamental da ciência da computação, buscando melhorar a eficiência e o desempenho das soluções computacionais. Uma das métricas mais comuns para avaliar o desempenho de algoritmos é o tempo de execução, que mede quanto tempo um algoritmo leva para processar dados de entrada e produzir resultados.

Neste contexto, o presente projeto visa realizar uma análise de desempenho de diferentes implementações do algoritmo MinMax. O algoritmo MinMax é amplamente utilizado para encontrar o valor máximo e mínimo em um conjunto de dados, sendo essencial em uma variedade de aplicações computacionais.

A análise de desempenho será conduzida utilizando vetores de diferentes tamanhos e estados de ordenação. Serão consideradas três implementações do algoritmo MinMax, variando desde uma abordagem simples até uma otimização mais complexa, com o objetivo de comparar o tempo de execução de cada implementação em diferentes cenários.

Através desta análise, esperamos identificar qual implementação do algoritmo MinMax apresenta o melhor desempenho em diferentes contextos, contribuindo para uma melhor compreensão das estratégias de otimização de algoritmos e sua aplicação prática.

## Objetivos
- Realizar uma análise de desempenho das implementações do algoritmo MinMax.
- Comparar o tempo de execução das implementações para vetores de diferentes tamanhos.
- Avaliar o impacto da ordenação dos vetores no desempenho das implementações.
- Identificar qual implementação do algoritmo MinMax apresenta o melhor desempenho em diferentes cenários.

## Funcionalidades
- Geração de vetores aleatórios de diferentes tamanhos.
- Ordenação dos vetores em ordem crescente ou decrescente.
- Cálculo do valor máximo e mínimo utilizando três implementações do algoritmo MinMax.
- Medição do tempo de execução para cada implementação e configuração de vetor.
- Geração de um arquivo de saída contendo os resultados da análise de desempenho.

## Arquivos

### Dataset
- `tempos_execucao.txt`: Arquivo de saída contendo os tempos de execução de cada implementação do algoritmo MinMax para cada método de ordenação utilizado.

### Código-fonte
- `main.cpp`: Programa principal responsável pela análise de desempenho.
- `minmax.hpp`, `minmax.cpp`: Implementações das funções do algoritmo MinMax.
- `vetor.hpp`, `vetor.cpp`: Implementação da classe Vetor para manipulação de vetores.


## Compilação e Execução
* | Comando           | Função                           |                     
  | ------------------| -------------------------------- |
  | `make clean`      | Limpa os arquivos de compilação  |
  | `make`            | Compila o programa               |
  | `make run`        | Executa o programa compilado     |

## Funcionamento do Código
O programa gera vetores aleatórios de diferentes tamanhos, realiza a ordenação desses vetores e calcula o máximo e mínimo utilizando três implementações do algoritmo MinMax. Os tempos de execução são medidos e registrados para análise posterior.

## Testes
Os resultados dos testes realizados são registrados no arquivo `geracoes.txt`, incluindo o tempo de execução de cada implementação do MinMax para vetores de diferentes tamanhos e estados de ordenação.

## Conclusão
A análise de desempenho realizada fornece informações importantes sobre a eficiência das diferentes implementações do algoritmo MinMax. Esses resultados podem ser úteis na seleção da implementação mais adequada para diferentes cenários de uso.

## Contato
Para mais informações, entre em contato com o autor do projeto:
- Nome: [Nome do Autor]
- Email: [Endereço de Email]

## Referências
- [Referência 1]
- [Referência 2]
