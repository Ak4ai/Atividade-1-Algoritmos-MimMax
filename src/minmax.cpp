#include "minmax.hpp"
#include "vetor.hpp"
#include <cstdlib>

void minmax1(const std::vector<int>& A, int& Max, int& Min) {
    Max = A[0];
    Min = A[0];
    for (size_t i = 1; i < A.size(); ++i) {
        if (A[i] > Max) {
            Max = A[i];
        }
        if (A[i] < Min) {
            Min = A[i];
        }
    }
}

void minmax2(const std::vector<int>& A, int& Max, int& Min) {
    Max = A[0];
    Min = A[0];
    for (size_t i = 1; i < A.size(); ++i) {
        if (A[i] > Max) {
            Max = A[i];
        } else if (A[i] < Min) {
            Min = A[i];
        }
    }
}

void minmax3(const std::vector<int>& A, int& Max, int& Min) {
    size_t n = A.size();
    int FimDoAnel; // Declare FimDoAnel como int
    if (n % 2 != 0) {
        std::vector<int> temp = A;
        temp.push_back(A[n - 1]);
        FimDoAnel = static_cast<int>(n); // Converta n para int
    } else {
        FimDoAnel = static_cast<int>(n - 1); // Converta n - 1 para int
    }
    if (A[0] > A[1]) {
        Max = A[0];
        Min = A[1];
    } else {
        Max = A[1];
        Min = A[0];
    }
    for (int i = 2; i <= FimDoAnel; i += 2) { // Use int em vez de size_t
        if (A[i] > A[i + 1]) {
            if (A[i] > Max) {
                Max = A[i];
            }
            if (A[i + 1] < Min) {
                Min = A[i + 1];
            }
        } else {
            if (A[i + 1] > Max) {
                Max = A[i + 1];
            }
            if (A[i] < Min) {
                Min = A[i];
            }
        }
    }
}
