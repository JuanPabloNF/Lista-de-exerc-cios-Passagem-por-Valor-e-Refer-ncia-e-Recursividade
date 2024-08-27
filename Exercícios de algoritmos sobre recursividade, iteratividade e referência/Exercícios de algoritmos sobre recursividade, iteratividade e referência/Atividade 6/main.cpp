#include <iostream>

using namespace std;


int somatorioRecursivo(int N) {
    if (N <= 0) {
        cout << "Erro, só é permitido valores maiores que 0!" << endl;
        return 0;
    }

    if (N == 1) {
        return 1;
    } else {
        return N + somatorioRecursivo(N - 1);
    }
}


int somatorioIterativo(int N) {
    int somatorio = 0;

    if (N <= 0) {
        cout << "Erro, só é permitido valores maiores que 0!" << endl;
        return 0;
    }


    for (int i = 1; i <= N; i++) {
        somatorio += i;
    }
    return somatorio;
}


int main() {
    int N, recursivo, iterativo;

    cout << "Digite um limite para o somatorio: " << endl;
    cin >> N;

    recursivo = somatorioRecursivo(N);
    cout << "O resultado do somatorio recursivo de 1 ate " << N << ":" << endl << recursivo << endl;

    cout << endl;

    iterativo = somatorioIterativo(N);
    cout << "O resultado do somatorio iterativo de 1 ate " << N << ":" << endl << iterativo << endl;


    return 0;
}
