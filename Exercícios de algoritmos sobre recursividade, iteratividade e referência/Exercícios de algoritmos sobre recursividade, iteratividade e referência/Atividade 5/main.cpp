#include <iostream>

    using namespace std;

    int busca(const int *vetor, int chave, int inicio, int fim ) {
        int meio;

        while (inicio <= fim) {

            meio = (inicio + fim) / 2;

            if (chave == vetor[meio])
                return meio;


            if (chave < vetor[meio]) {
                fim = meio - 1;

            }else {

                inicio = meio + 1;

            }

        }

        return -1;
    }


int main()
{
    int vetor[10] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
        int valor, op;
        int inicio = 0;
        int fim = 9;
        int resultado;


    do {
        cout << "Insira o valor para ser buscado: " << endl;
        cin >> valor;

        resultado = busca(vetor, valor, inicio, fim);

        cout << "Indice: " << resultado << endl;

        cout << "\n0 - Sair\n1 - Nova busca\n";
        cin >> op;

    }while (op != 0);


    return 0;
}
