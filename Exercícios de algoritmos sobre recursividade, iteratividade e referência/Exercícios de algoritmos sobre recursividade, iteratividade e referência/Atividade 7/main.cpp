#include <iostream>

using namespace std;

int fibonacciRecursivo(int N) {
    if (N < 0) {
        cout << "Erro, a posição deve ser um número positivo!" << endl;
        return -1;
    }

    if (N == 0)
        return 0;
    if (N == 1)
        return 1;

    return fibonacciRecursivo(N - 1) + fibonacciRecursivo(N - 2);
}

int fibonacciIterativo(int N) {
    if (N < 0) {
        cout << "Erro, a posicao deve ser um número positivo!" << endl;
        return -1;
    }

    if (N == 0)
        return 0;
    if (N == 1)
        return 1;

    int a = 0, b = 1, fib = 0;

    for (int i = 2; i <= N; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}

int main() {
    int N, recursivo, iterativo;

    cout << "Digite a posicao desejada da sequência de Fibonacci: ";
    cin >> N;

    if (N < 0) {
        cout << "Erro, a posicao deve ser um numero positivo!" << endl;
        return 1;
    }

    recursivo = fibonacciRecursivo(N);
    cout << "O valor recursivo na posicao " << N << " da sequencia de Fibonacci: " << recursivo << endl;

    iterativo = fibonacciIterativo(N);
    cout << "O valor iterativo na posicao " << N << " da sequencia de Fibonacci: " << iterativo << endl;

    return 0;
}
