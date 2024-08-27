#include <iostream>

using namespace std;

void preencherMatriz(int **vMatriz, int N, int M) {
    for (int i = 0; i < N; i++) {
        //Gera a quantidade de linhas e colunas inserida pelo usuário
        for (int j = 0; j < M; j++) {
            cout << "Insira um valor na posicao[" << i << "][" << j << "]: " << endl; //Fluxo de entrada
            cin >> vMatriz[i][j]; //Alocamento de memória
        }
    }
}

void matrizTransposta(int **vMatriz, int **transposta, int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            transposta[j][i] = vMatriz[i][j]; //Inverte linha e coluna.
        }
    }

    cout << "Matriz transposta: " << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    /*
    Exemplo:

    {11, 12}          {11, 21, 31, 41}
    {21, 22}  ---->>  {12, 22, 32, 42}
    {31, 32}
    {41, 42}

    */
}

void multiplicaçãoMatriz(int **vMatriz, int N, int M, int fatK) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            vMatriz[i][j] *= fatK; //Multiplicação da matriz por um fator k.
        }
    }

    cout << "Matriz multiplicada por um fator K: " << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << vMatriz[i][j] << " ";
        }
        cout << endl;
    }
}


void segundaMatriz(int **novaMatriz, int N, int M) {
    for (int i = 0; i < N; i++) {
        //Gera a quantidade de linhas e colunas inserida pelo usuário
        for (int j = 0; j < M; j++) {
            cout << "Insira um valor na posicao[" << i << "][" << j << "]: " << endl; //Fluxo de entrada
            cin >> novaMatriz[i][j]; //Alocamento de memória
        }
    }
}

void somaMatrizes(int **vMatriz, int **novaMatriz, int **somaMatriz, int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            somaMatriz[i][j] = vMatriz[i][j] + novaMatriz[i][j];
        }
    }
    cout << "Resultado da soma: " << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << somaMatriz[i][j] << " " << endl;
        }
    }
}


int main() {
    int N, M, fatK;

    cout << "Digite o numero de linhas: " << endl;
    cin >> N;
    cout << "Digite o numero de colunas" << endl;
    cin >> M;
    cout << endl;
    cout << "Digite um fator K: " << endl;
    cin >> fatK;
    cout << endl;

    //Alocação da matriz original
    int **vMatriz = new int *[N]; //Alocação de memoria
    for (int i = 0; i < N; i++) {
        vMatriz[i] = new int [M];
    }

    //Alocação da matriz transposta

    int **transposta = new int *[M]; //Alocação de memoria
    for (int i = 0; i < M; i++) {
        transposta[i] = new int [N];
    }


    if (N <= 20 && M <= 23) {
        preencherMatriz(vMatriz, N, M);
        matrizTransposta(vMatriz, transposta, N, M);
        multiplicaçãoMatriz(vMatriz, N, M, fatK);
    } else {
        return 1;
    }

    cout << endl;

    int N2, M2;

    cout << "Insira uma nova matriz " << endl;
    cout << endl;
    cout << "Digite o numero de linhas: " << endl;
    cin >> N2;
    cout << "Digite o numero de colunas: " << endl;
    cin >> M2;


    //Alocação de memoria da segunda matriz

    int **novaMatriz = new int *[N2]; //Alocação de memoria
    for (int i = 0; i < N2; i++) {
        novaMatriz[i] = new int [M2];
    }


    if (N <= 20 && M <= 23) {
        segundaMatriz(novaMatriz, N2, M2);
    } else {
        return 1;
    }

    //Alocação de memoria da soma da matriz
    int **somaMatriz = new int *[N];
    for (int i = 0; i < N; i++) {
        somaMatriz[i] = new int[M];
    }

    somaMatrizes(vMatriz, novaMatriz, somaMatriz, N, M);

    //Libera a matriz de cada coluna.
    for (int i = 0; i < N; i++) {
        delete[]vMatriz[i];
    }

    delete[]vMatriz; // Libera a matriz dos ponteiros


    //Libera a matriz transposta de cada coluna
    for (int i = 0; i < M; i++) {
        delete[]transposta[i];
    }

    delete[]transposta; //Libera a matriz trasnposta dos ponteiros.


    //Libera a segunda matriz de cada coluna
    for (int i = 0; i < N2; i++) {
        delete[]novaMatriz[i];
    }

    delete[]novaMatriz; // Libera a matriz dos ponteiros

    //Libera a soma da matriz de cada coluna
    for (int i = 0; i < N; i++) {
        delete[]somaMatriz[i];
    }

    delete[]somaMatriz;


    return 0;
}
